 #pragma warning(disable:4996)
#include"contact.h"
//����ȫ�ֱ�����������Ӵ�������Ѿ���main.c�ж�����
extern stu *head;
void print()    //���˵�
{
	system("cls");
	printf("\n\n\n");
	printf("         ����������������������������    \n");
	printf("         ��     \t     ͨѶ¼����ϵͳ                  ��\n");
	printf("         ����������������������������    \n");
	printf("         ��\t1. �����ϵ��");
	printf("\t\t2. ��ʾ��ϵ��        ��\n");
	printf("         ��\t3. ������ϵ��");
	printf("\t\t4. ɾ����ϵ��        ��\n");
	printf("         ��\t5. ������ϵ��");
	printf("\t\t6. �޸���ϵ��        ��\n");
	printf("         ��\t7. ������ϵ��");
	printf("\t\t8. �������˵�        ��\n");
	printf("         ����������������������������\n");
	printf("         ����������� �� 9 �� �� ������������\n");
}


void input(stu *p1)    //�����������
{
	printf("����:");
	scanf("%s", &p1->name);
	printf("�ֵ�:");
	scanf("%s", &p1->street);
	printf("����:");
	scanf("%s", &p1->city);
	printf("�ʱ�:");
	scanf("%s", &p1->eip);
	printf("����:");
	scanf("%s", &p1->state);

	printf("������ϵ�˳ɹ�!!\n");
}

//���������ϵ����Ϣ
void printMessage(stu * p)
{
	printf("����:%s\n", p->name);
	printf("�ֵ�:%s\t", p->street);
	printf("����:%s\t", p->city);
	printf("�ʱ�:%s\t", p->eip);
	printf("����:%s\n", p->state);

}

//�����ϵ�ˣ�Ĭ��Ϊͷ�巨
void add()
{
	stu * p;
	if (head == NULL)   //���headΪ�գ������ͨѶ¼Ϊ��
	{
		head = malloc(sizeof(stu));
		head->next = NULL;    //�������Ҫд������䣬��Ȼ�鿴����ʱ�����
		printf("��������Ϣ��\n");
		input(head);
		return;
	}
	p = malloc(sizeof(stu));
	printf("��������Ϣ��\n");
	input(p);
	p->next = head;
	head = p;

}



void lookdata(stu *p1)     //�鿴���ݵĺ���
{
	printf("\n\t\t\t�����   ��ʾ����  �����\n");
	printf("----------------------------------------------------------------------\n");
	while (p1 != NULL)
	{
		printMessage(p1);
		printf("======================================================================\n");
		p1 = p1->next;
	}
}


void insert()      //��������
{
	int i;
	char named[20];
	stu *p1, *p2, *p3;
	p1 = head;
	p3 = (stu *)malloc(sizeof(stu));
	p3->next = NULL;
	printf("\n\t\t\t�����   ��������   �����\n");
	printf("----------------------------------------------------------------------\n");
	printf("����������ߵ�����:\n");
	input(p3);
	printf("\n����ѡ��\n");
	printf("1.��λ�ò���\t2.βλ�ò���\t3.ǰ��\n");
	printf("���������ѡ��:");
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
	case 3:printf("������������ǰ�壩:");
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
	printf("����ɹ�!\n");
	printf("======================================================================\n");
	return;
}

//ɾ������
void deleted()
{
	stu *p1, *p2;
	char Name[20];  //��Ҫɾ�����˵�����
	printf("\n\t\t\t�����   ɾ������   �����\n");
	printf("----------------------------------------------------------------------\n");
	printf("������Ҫɾ��������:");
	scanf("%s", Name);
	p1 = head;
	if (head == NULL)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��!\n");
		printf("======================================================================\n");
		return;
	}
	if (strcmp(Name, p1->name) == 0)
	{
		head = p1->next;
		printf("ɾ���ɹ�!\n");
		printf("======================================================================\n");
		return;
	}
	while (p1 != NULL && (strcmp(Name, p1->name) != 0))
	{
		p2 = p1;  //p2ָ����������p1��ǰһ��ָ�룬��������ɾ��
		p1 = p1->next;
	}
	if (p1 == NULL)  //��������������δ�ҵ�
	{
		printf("���˲�����!\n");
		printf("======================================================================\n");
		return;
	}
	if (p1->next != NULL)
	{
		p2->next = p1->next;
		free(p1);
		printf("ɾ���ɹ�!\n");
		printf("======================================================================\n");
		return;
	}
	else  //Ҫɾ������ϵ��������ĩβ
	{
		p2->next = NULL;
		free(p1);
		printf("ɾ���ɹ�!\n");
		printf("======================================================================\n");
		return;
	}
}

//ͨ���������Ҳ鿴���ݵĺ���
void find(stu *p)
{
	char name[20];
	printf("\n\t\t\t�����   �鿴����   �����\n");
	printf("----------------------------------------------------------------------\n");
	printf("��������������˵�����:");
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

	printf("\n��Ҫ���ҵ��˲�����!\n");
}

//ͨ�����������޸�����
void update(stu *p)
{
	char name[20];
	int b = 0, i;
	printf("\n\t\t\t�����   �޸�����   �����\n");
	printf("----------------------------------------------------------------------\n");
	printf("�����뽫Ҫ�޸��˵�����:");
	scanf("%s", name);
	while (p != NULL)
	{
		if (strcmp(name, p->name) == 0)
		{
			printf("��ͬѧ�Ļ�����ϢΪ��\n");
			printMessage(p);
			printf("\n��ѡ��Ҫ�޸ĵ���Ϣ\n");
			printf("\t1.����\t2.�ֵ�\t3.����\t4.�ʱ�\n\t5.����\n");
			printf("\n����ѡ����(1~5):");
			scanf("%d", &i);
			printf("�������޸�֮������ݣ�");
			switch (i)
			{
			case 1:printf("����:");
				scanf("%s", &p->name);
				break;
			case 2:printf("�ֵ�:");
				scanf("%s", &p->street);
				break;
			case 3:printf("����:");
				scanf("%s", &p->city);
				break;
			case 4:printf("�ʱ�:");
				scanf("%s", &p->eip);
				break;
			case 5:printf("����:");
				scanf("%s", &p->state);
				break;

			}
			printf("\n�޸ĳɹ�!\n");
			printf("=========================================================================\n");
			return;
		}
		p = p->next;
	}

	printf("ͨѶ¼�����ڸ���ϵ��!\n");

}


save(stu *p2)   //��������
{
	FILE *fp;
	char file[15];
	printf("\n\t\t\t�����   ��������   �����\n");
	printf("----------------------------------------------------------------------\n");
	printf("�����ļ���:");
	scanf("%s", file);
	if ((fp = fopen(file, "w")) == NULL)
	{
		printf("cannot open this file\n");
		exit(0);
	}
	fprintf(fp, "����\t�ֵ�\t����\t�ʱ�\t����\n");
	while (p2 != NULL)
	{
		fprintf(fp, "%s\t", p2->name);
		fprintf(fp, "%s\t", p2->street);
		fprintf(fp, "%s\t", p2->city);
		fprintf(fp, "%s\t", p2->eip);
		fprintf(fp, "%s\t", p2->state);
		p2 = p2->next;
	}
	printf("\n����ɹ�!\n");
	printf("======================================================================\n");
	fclose(fp);
}

