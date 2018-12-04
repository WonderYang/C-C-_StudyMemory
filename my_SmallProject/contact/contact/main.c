 #pragma warning(disable:4996)
#include"contact.h"

void menu(contact_p ct_)
{
	printf("\n\n");
	printf("**************************    MY CONTACT  *************************\n");
	printf("****       1.add                                  2.delete     ****\n");
	printf("****       3.search                               4.update     ****\n");
	printf("****       5.list_all                             6.delete_all ****\n");
	printf("****       7.sort_all                             8.destroy    ****\n");
	printf("**************************     0.exit     *************************\n");
	contactMessagePrint(ct_);
	printf("please enter:\n");
}

void scanf_(people_p p_)
{
	printf("please enter name:");
	scanf("%s", p_->name);
	printf("please enter sex:");
	scanf(" %c", &p_->sex);    //注意在%c前面要加上空格，刷新缓存区
	printf("please enter age:");
	scanf("%d", &p_->age);
	printf("please enter phone:");
	scanf("%s", p_->phone);
	printf("please enter address:");
	scanf("%s", p_->address);
}

int main()
{
	int select = 1;

	contact_p ct_ = initContact();
	people_t p_;
	while (select)
	{
		menu(ct_);
		scanf("%d", &select);
		switch (select)
		{
		case 1:
		{
			scanf_(&p_);
			addpeople(&ct_, &p_);
			break;
		}
		case 2:
		{
			if (isContactEmpty(ct_))
			{
				Log("WARNING", "Contact Is Empty!! Deny Delete!!");
				break;
			}
			char name[20];
			printf("please enter the name you want to delete: ");
			scanf("%s", name);
			deletePeople(ct_, name);
			break;
		}
		case 3:
		{
			char name[20];
			printf("please enter the name you want to find: ");
			scanf("%s", name);
			searchPeople(ct_, name);
			break;
		}
		case 4:
		{
			char name[20];
			printf("please enter the name you want to update: ");
			scanf("%s", name);
			updatePeople(ct_, name);
			break;
		}
		case 5:
		{
			listPeople(ct_);
			break;
		}
		case 6:
		{
			if (isContactEmpty(ct_))
			{
				Log("WARNING", "Contact Is Empty!! Deny Delete!!");
				break;
			}
			deleteAllPeople(ct_);
			break;
		}
		case 7:
		{
			sortAllPeople(ct_);
			break;
		}
		case 8:
		{
			if(destroy(&ct_))
			return 0;
			break;
		}
		case 0:
		{
			printf("EXIT!!!!\n");
			select = 0;
			break;
		}
		default:
		{
			printf("error input,please enter again:\n");
			break;
		}
		}
	}
	return 0;
}