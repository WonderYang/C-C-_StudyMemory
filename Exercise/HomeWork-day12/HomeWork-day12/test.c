#define _CRT_SECURE_NO_WARNINGS 1
/*1.��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��*/
//#include<stdio.h>
//#include<math.h>
//unsigned int reverse_bit(unsigned int value);
//int main()
//{
//	int x = 0;
//	printf("please enter a figer:\n");
//	scanf("%d", &x);
//	printf("%u\n", reverse_bit(x));
//	return 0;
//}
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned ret = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		ret += ((value >> i) & 1) * pow(2, 31 - i);     //�ӣ�����һ��Ҫ�����ţ�*�����ȼ����ڰ�λ�루&�� 
//		//		if ((value>>i)&1 == 1)
//		//		{
//		//			ret = ret + pow(2, 31-i);
//		//		}
//
//	}
//	return ret;
//}


/*��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� */
//#include<stdio.h>
//int aver(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("their average is %d\n", aver(a, b));
//	return 0;
//}
//int aver(int x, int y)
//{
//	return (x&y) + ((x^y) >>1);    //>>���������ȼ�����^���������ȼ��ߣ�����һ��Ҫ��������
//}

/*���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
*/
//#include<stdio.h>
//int sigle(int* p, int sz);
//int main()
//{
//	int arr[] = { 1, 3, 4, 4, 3, 5, 5 ,77,77};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ψһ��������Ϊ: %d\n", sigle(arr, sz));
//	return 0;
//}
//int sigle(int* p, int sz)
//{
//	int i = 0;
//	int ret = 0;
//	int* str = p;
//	for (; str < p + sz; str++)
//	{
//		ret = ret^*str;
//	}
//	return ret;
//}


/*��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
Ҫ��
����ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� */
//#include<stdio.h>
//#include<string.h>
//void reverse_arr(char arr[], int sz);
//void reverse_word(char arr[], int sz);
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = strlen(arr);
//	reverse_arr(arr, sz);
//	printf("%s\n", arr);
//	reverse_word(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse_arr(char arr[], int sz)
//{
//	char tmp;
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = tmp;
//	}
//}
//void reverse_word(char arr[], int sz)
//{
//	int i = 0;
//	int flag = 0;
//	while (arr[i] != '\0')
//	{
//		int m = i;
//		while (arr[i] != ' ')
//		{
//			if (arr[i] == '\0')
//			{
//				flag = 1;
//				break;
//			}
//			i++;
//		}
//		int j = m;                       //������һ���ո��һ���ַ����±�
//		char tmp = 0;                     //���н������м���
//		int t = i - 1;
//		int num = i + j;                  //num���������潻��ѭ���Ĵ���
//		for (j = m; j < num / 2; j++)
//		{
//			tmp = arr[j];
//			arr[j] = arr[t];
//			arr[t] = tmp;
//			t--;
//		}
//		i++;
//		if (flag)
//			break;
//	}
//}
