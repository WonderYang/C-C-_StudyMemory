 #pragma warning(disable:4996)
/*����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
��������:
1999 2299
�������:7  */
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//		if ((m >> i & 1) ^ (n >> i & 1))
//		{
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}



/*���һ��������ÿһλ*/
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	return 0;
//}




/*��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������� */
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int i = 0;
//	scanf("%d", &x);
//	printf("�����������λ��ż��λΪ:\n");
//	for (i = 31; i >= 1; i -= 2)        //ż��λ
//	{
//		printf("%d  ", (x >> i) & 1);
//	}
//	printf("\n--------------------------\n");
//	printf("�����������λ������λΪ:\n");
//	for (i = 30; i >= 0; i -= 2)        //����λ
//	{
//		printf("%d  ", (x >> i) & 1);
//	}
//	return 0;
//}



/*дһ���������ز����������� 1 �ĸ��� */
//������
//#include<stdio.h>
//int count_one_bits(int value)
//{
//	int count = 0;
//	while (value)
//	{
//		count++;
//		value = value&(value - 1);
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &num);
//	ret = count_one_bits(num);
//	printf("count=%d\n", ret);
//	return 0;
//}


/*дһ���������ز����������� 1 �ĸ��� */
//������
//#include<stdio.h>
//int count_one_bits(unsigned int value);
//int main()
//{
//	int x = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &x);
//	printf("�����������Ϊ1��λ��Ϊ��%d��\n", count_one_bits(x));
//	return 0;
//}
//int count_one_bits(unsigned int value)
//{
//	int i = 32;
//	int count = 0;
//	while (i)
//	{
//		i--;
//		if (1 == value % 2)
//			count++;
//		value /= 2;
//	}
//	return count;
//}



/*дһ���������ز����������� 1 �ĸ��� */
//����һ
//#include<stdio.h>
//int count_one_bits(unsigned int value);
//int main()
//{
//	int x = 0;
//	printf("please enter a figer>\n");
//	scanf("%d", &x);
//	printf("�����������Ϊ1��λ��Ϊ��%d��\n", count_one_bits(x));
//	return 0;
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	int i = 32;
//	while (i)
//	{
//		if (1 == (value & 1))
//			count++;
//		value >>= 1;
//		i--;
//	}
//	return count;
//}