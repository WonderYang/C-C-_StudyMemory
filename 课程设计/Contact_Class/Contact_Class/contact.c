 #pragma warning(disable:4996)
#include"contact.h"
//声明全局变量，是声明哟，定义已经在main.c中定义了
extern stu *head;
void print()    //主菜单
{
	system("cls");
	printf("\n\n\n");
	printf("         ●●●●●●●●●●●●●●●●●●●●●●●●●●●    \n");
	printf("         ●     \t     通讯录管理系统                  ●\n");
	printf("         ●●●●●●●●●●●●●●●●●●●●●●●●●●●    \n");
	printf("         ●\t1. 添加联系人");
	printf("\t\t2. 显示联系人        ●\n");
	printf("         ●\t3. 插入联系人");
	printf("\t\t4. 删除联系人        ●\n");
	printf("         ●\t5. 查找联系人");
	printf("\t\t6. 修改联系人        ●\n");
	printf("         ●\t7. 保存联系人");
	printf("\t\t8. 返回主菜单        ●\n");
	printf("         ●●●●●●●●●●●●●●●●●●●●●●●●●●●\n");
	printf("         ●●●●●●●●●● 按 9 退 出 ●●●●●●●●●●●\n");
}


void input(stu *p1)    //输入相关数据
{
	printf("姓名:");
	scanf("%s", &p1->name);
	printf("街道:");
	scanf("%s", &p1->street);
	printf("城市:");
	scanf("%s", &p1->city);
	printf("邮编:");
	scanf("%s", &p1->eip);
	printf("国家:");
	scanf("%s", &p1->state);

	printf("保存联系人成功!!\n");
}

//用来输出联系人信息
void printMessage(stu * p)
{
	printf("姓名:%s\n", p->name);
	printf("街道:%s\t", p->street);
	printf("城市:%s\t", p->city);
	printf("邮编:%s\t", p->eip);
	printf("国家:%s\n", p->state);

}

//添加联系人，默认为头插法
void add()
{
	stu * p;
	if (head == NULL)   //如果head为空，则代表通讯录为空
	{
		head = malloc(sizeof(stu));
		head->next = NULL;    //这里必须要写这条语句，不然查看数据时会崩溃
		printf("请输入信息：\n");
		input(head);
		return;
	}
	p = malloc(sizeof(stu));
	printf("请输入信息：\n");
	input(p);
	p->next = head;
	head = p;

}



void lookdata(stu *p1)     //查看数据的函数
{
	printf("\n\t\t\t●●●●   显示数据  ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	while (p1 != NULL)
	{
		printMessage(p1);
		printf("======================================================================\n");
		p1 = p1->next;
	}
}


void insert()      //插入数据
{
	int i;
	char named[20];
	stu *p1, *p2, *p3;
	p1 = head;
	p3 = (stu *)malloc(sizeof(stu));
	p3->next = NULL;
	printf("\n\t\t\t●●●●   插入数据   ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	printf("请输入插入者的资料:\n");
	input(p3);
	printf("\n插入选项\n");
	printf("1.首位置插入\t2.尾位置插入\t3.前插\n");
	printf("请输入你的选择:");
	scanf("%d", &i);
	switch (i)
	{
	case 1:p3->next = p1;
		head = p3;
		break;
	case 2:while (p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
		   p1->next = p3;
		   break;
	case 3:printf("请输入姓名（前插）:");
		scanf("%s", named);
		while (strcmp(named, p1->name) != 0)
		{
			p2 = p1;
			p1 = p1->next;
		}
		p2->next = p3;
		p3->next = p1;
		break;
	}
	printf("插入成功!\n");
	printf("======================================================================\n");
	return;
}

//删除数据
void deleted()
{
	stu *p1, *p2;
	char Name[20];  //想要删除的人的姓名
	printf("\n\t\t\t●●●●   删除数据   ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	printf("请输入要删除的姓名:");
	scanf("%s", Name);
	p1 = head;
	if (head == NULL)
	{
		printf("通讯录为空，无法删除!\n");
		printf("======================================================================\n");
		return;
	}
	if (strcmp(Name, p1->name) == 0)
	{
		head = p1->next;
		printf("删除成功!\n");
		printf("======================================================================\n");
		return;
	}
	while (p1 != NULL && (strcmp(Name, p1->name) != 0))
	{
		p2 = p1;  //p2指针用来保存p1的前一个指针，这样便于删除
		p1 = p1->next;
	}
	if (p1 == NULL)  //遍历完整个链表还未找到
	{
		printf("此人不存在!\n");
		printf("======================================================================\n");
		return;
	}
	if (p1->next != NULL)
	{
		p2->next = p1->next;
		free(p1);
		printf("删除成功!\n");
		printf("======================================================================\n");
		return;
	}
	else  //要删除的联系人在链表末尾
	{
		p2->next = NULL;
		free(p1);
		printf("删除成功!\n");
		printf("======================================================================\n");
		return;
	}
}

//通过姓名查找查看数据的函数
void find(stu *p)
{
	char name[20];
	printf("\n\t\t\t●●●●   查看数据   ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	printf("请输入您想查找人的姓名:");
	scanf("%s", name);
	while (p != NULL)
	{
		if (strcmp(name, p->name) == 0)
		{
			printMessage(p);
			printf("*************************************************************\n");
			return;
		}
		p = p->next;
	}

	printf("\n您要查找的人不存在!\n");
}

//通过姓名查找修改数据
void update(stu *p)
{
	char name[20];
	int b = 0, i;
	printf("\n\t\t\t●●●●   修改数据   ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	printf("请输入将要修改人的姓名:");
	scanf("%s", name);
	while (p != NULL)
	{
		if (strcmp(name, p->name) == 0)
		{
			printf("该同学的基本信息为：\n");
			printMessage(p);
			printf("\n请选择要修改的信息\n");
			printf("\t1.姓名\t2.街道\t3.城市\t4.邮编\n\t5.国家\n");
			printf("\n您的选择是(1~5):");
			scanf("%d", &i);
			printf("请输入修改之后的内容：");
			switch (i)
			{
			case 1:printf("姓名:");
				scanf("%s", &p->name);
				break;
			case 2:printf("街道:");
				scanf("%s", &p->street);
				break;
			case 3:printf("城市:");
				scanf("%s", &p->city);
				break;
			case 4:printf("邮编:");
				scanf("%s", &p->eip);
				break;
			case 5:printf("国家:");
				scanf("%s", &p->state);
				break;

			}
			printf("\n修改成功!\n");
			printf("=========================================================================\n");
			return;
		}
		p = p->next;
	}

	printf("通讯录不存在该联系人!\n");

}


save(stu *p2)   //保存数据
{
	FILE *fp;
	char file[15];
	printf("\n\t\t\t●●●●   保存数据   ●●●●\n");
	printf("----------------------------------------------------------------------\n");
	printf("输入文件名:");
	scanf("%s", file);
	if ((fp = fopen(file, "w")) == NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	fprintf(fp, "姓名\t街道\t城市\t邮编\t国家\n");
	while (p2 != NULL)
	{
		fprintf(fp, "%s\t", p2->name);
		fprintf(fp, "%s\t", p2->street);
		fprintf(fp, "%s\t", p2->city);
		fprintf(fp, "%s\t", p2->eip);
		fprintf(fp, "%s\t", p2->state);
		p2 = p2->next;
	}
	printf("\n保存成功!\n");
	printf("======================================================================\n");
	fclose(fp);
}

