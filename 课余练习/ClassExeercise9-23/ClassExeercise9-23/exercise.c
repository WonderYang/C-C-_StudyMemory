 #pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int n = 0,x=0;
	int ret = 1;
	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d", &x);
	for (j = 1; j <= x; j++)
	{
		ret *= j;
		sum += ret;
	}
	printf("1!+2!+....x!=%d\n", sum);
	return 0;
}



//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	for (i = 0, j = 0; i < 2,j < 5; i++, j++)  //���ű��ʽ�������Ҽ��㣬�����ս��ȡ�������ұߵ�ֵ
//		printf("hehe\n");
//	return 0;
//}


//#include<stdio.h>
////���ܣ��������й������ֲ����
//int main()
//{
//	int ch = 0;
//	printf("������һ�������ַ�(ctrl+z����):\n");
//	while ((ch = getchar()) != EOF)             //ch=getchar()����Ҫ����ϴ����ţ���Ȼ�����
//	{
//		if (ch >= '0'&&ch <= '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 1, n = 1;
//	switch (m)
//	{
//	case 0:m++;
//	case 1:m++;
//	case 2:
//		switch (n)
//		{                      //switch������Ƕ��ʹ��
//		case 1:m++;
//			break;
//		}           //�������break����ֲ�һ��
//	case 3:m++;
//		break;
//	default:m++;
//		break;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}