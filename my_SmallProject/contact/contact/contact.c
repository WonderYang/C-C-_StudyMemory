 #pragma warning(disable:4996)
#include"contact.h"

contact_p initContact()
{
	contact_p ct = (contact_p)malloc(sizeof(people_t)*INIT + sizeof(contact_t));   
	if (ct == NULL)
	{
		perror("malloc");
		return NULL;
	}
	ct->cap = INIT;
	ct->size = 0;
	return ct;
}

void contactMessagePrint(contact_p ct_)  //用来显示当前通讯录的基本信息
{
	printf("****************     cap(now): %d     size(now): %d     *************\n",ct_->cap, ct_->size);
}

void Log(const char* level_, const char* msg_)
{
	assert(level_ && msg_);

	printf("%s: %s\n", level_, msg_);
}

static int isContactFull(contact_p ct_)
{
	assert(ct_);
	return ct_->size == ct_->cap ? 1 : 0;
}

int isContactEmpty(contact_p ct_)
{
	assert(ct_);
	return ct_->size == 0 ? 1 : 0;
}



void addpeople(contact_pp ct_, people_p p_)
{
	assert(ct_ && p_);

	if (isContactFull(*ct_))          //判断通讯录是否满
	{
		Log("INFO", "Contact is full!! Now Begin dilatation");
		if (dilatation(ct_))
		{
			Log("INFO", "Dilatation success!!!");
		}
		else
		{
			Log("ERROR", "Dilatation Fail!!!");
			return;
		}
	}
	memcpy(&(((*ct_)->peoples)[(*ct_)->size]), p_, sizeof(people_t));
	((*ct_)->size)++;
	Log("INFO", "Add People Success!!");
}

void updatePeople(contact_p ct_, const char* name)
{
	assert(ct_ && name);

	people_t p_;
	for (int i = 0; i < ct_->size; i++)
	{
		if (!(strcmp(name, (ct_->peoples)[i].name)))
		{
			showPeople(&(ct_->peoples)[i]);
			printf("please enter the new message:\n");

			printf("please enter name:");
			scanf("%s", p_.name);
			printf("please enter sex:");
			scanf(" %c", &p_.sex);    //注意在%c前面要加上空格，刷新缓存区
			printf("please enter age:");
			scanf("%d", &p_.age);
			printf("please enter phone:");
			scanf("%s", p_.phone);
			printf("please enter address:");
			scanf("%s", p_.address);

			memcpy(&(ct_->peoples)[i], &p_, sizeof(people_t));
			Log("INFO", "Update Success!!!");
			return;
		}
	}
	printf("Don't Find Such A People!!!\n");
}

void showPeople(people_p p_)
{
	assert(p_);

	printf("Name:%-12s  Sex:%-5c   Age:%-3d   Phone:%-12s   Address:%-12s\n", \
		p_->name, p_->sex, p_->age, p_->phone, p_->address);
}

/*删除原理：将柔性数组的最后一个元素（结构体）拷贝到要被删除的元素，再将size减一*/
void deletePeople(contact_p ct_, const char* name)
{
	assert(ct_ && name);

		for (int i = 0; i < (ct_->size); i++)
		{
			if (!(strcmp(name, (ct_->peoples)[i].name)))   //注意解引用后是 .name而不是->name,因为这是它不再是指针，而是一个结构体；
			{
				memcpy(&(ct_->peoples[i]), &(ct_->peoples[ct_->size - 1]), \
					sizeof(people_t));
				ct_->size--;
				Log("INFO", "Delete Peoele Success");
				return;
			}
		}
		Log("INFO", "Find Fail!!  Don't Find Such A People!");
}

void deleteAllPeople(contact_p ct_)
{
	int key = 0;
	printf("Are You Sure To delete All people:\n");
	printf("1 . SURE    0 . NOT SURE\n");
	scanf("%d", &key);
	if (1 == key)
	{
		ct_->size = 0;
		Log("INFO", "Delete All People Success!!!");
	}
	else
	{
		Log("INFO", "Delete All People Fail!!!");
	}
}

void searchPeople(contact_p ct_, const char* name)
{
	assert(ct_);

	for (int i = 0; i < ct_->size; i++)
	{
		if (!(strcmp(name, (ct_->peoples)[i].name)))
		{
			showPeople(&(ct_->peoples)[i]);
			return;
		}
	}
	Log("INFO", "Find Fail!!  Don't Find Such A People!");
}

void listPeople(contact_p ct_)
{
	int i = 0;
	if (isContactEmpty(ct_))
	{
		printf("empty!! please select 1 to add people to the contact!\n");
		return;
	}
	for (i = 0; i < ct_->size; i++)
	{
		showPeople(&(ct_->peoples)[i]);
	}
}

int compare_names(const void* p1, const void* p2)
{
	assert(p1 && p2);

	//people_p p1_ = (people_p)p1;
	//people_p p2_ = (people_p)p2;
	//return (strcmp(p1_->name, p2_->name));
	return (strcmp(((people_p)p1)->name, ((people_p)p2)->name));   //使用这种方法时，务必注意要在（people_p）p2外层加一个括号；
}

void sortAllPeople(contact_p ct_)
{
	assert(ct_);
	qsort(ct_->peoples, ct_->size, sizeof(people_t), compare_names);
	Log("INFO", "Sort Success!!!");
}

static int dilatation(contact_pp ct_)    //扩容函数,这里需要传二级指针，因为要改变通讯录的地址，所以得传通讯录地址的地址；
{
	(*ct_)->cap *= 2;
	*ct_ = (contact_p)realloc(*ct_, sizeof(people_t)*((*ct_)->cap) + sizeof(contact_t));
	if (*ct_ != NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int destroy(contact_pp ct_)  //摧毁通讯录
{
	int key = 0;
	printf("Are You Sure To Destroy The Contact:\n");
	printf("1 . SURE    0 . NOT SURE\n");
	scanf("%d", &key);
	if (key)
	{
		free(*ct_);
		Log("INFO", "Destroy Success!!!");
		return 1;
	}
	else
	{
		Log("INFO", "Destroy Fail!!!");
		return 0;
	}
}