#pragma warning(disable:4996)
#include"contact.h"
extern stu *head = NULL;
void main()
{
	int i;
	system("color 2e");
	print();
	while (1)
	{
		printf("���������ѡ��(1~9):");
	loop:scanf("%d", &i);
		if (i<1 || i>9)
		{
			printf("��������,����1~9�н���ѡ��:");
			goto loop;
		}
		switch (i)
		{
		case 1:
			add();
			break;
		case 2:
			lookdata(head);
			break;
		case 3:
			insert();
			break;
		case 4:
			deleted();
			break;
		case 5:
			find(head);
			break;
		case 6:
			update(head);
			break;
		case 7:
			save(head);
			break;
		case 8:
			print();
			break;
		case 9:
			exit(1);
			break;
		}
	}
}