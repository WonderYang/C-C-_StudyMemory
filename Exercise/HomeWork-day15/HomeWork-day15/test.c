 //#pragma warning(disable:4996)
/*1.һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ����������֣����ʵ�֡�
*/
//#include<stdio.h>
//void FindSingle(int arr[], int sz);
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 3, 5, 5, 18, 6, 6 };    
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	FindSingle(arr, sz);
//	return 0;
//}
//void FindSingle(int arr[], int sz)
//{
//	int ret = arr[0];   //��������ֵ���Ľ��,����ǧ��ע�⣬ret��ʼֵ��Ҫ����Ϊ0�������������0�Ļ�����Խ������
//	int i = 0;
//	int flag = 1;   //����Ѱ��ret�Ķ�����λ�е�һ��1��
//	int count = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//����������ֵ
//	for (i = 0; i < 32; i++)
//	{
//		if (ret&(flag))
//		{
//			break;
//		}
//		else
//		{
//			flag <<= 1;
//			count++;
//		}
//	}
//	//�ҳ������ֵ��bitλΪ1�ĵ�һ��λ��
//	flag = 1;                    //���������Ҫ��flag��ʼ��Ϊһ��
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] & (flag << count))
//		{
//			a ^= arr[i];
//		}
//		else
//		{
//			b ^= arr[i];
//		}
//	}
//	//�������
//	printf("ֻ����һ�ε���Ϊ��%d   %d\n", a, b);
//}


/*ģ��ʵ��strcpy*/
//char* my_strcpy(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//
//	char* dst_ = dst;
//	const char* src_ = src;
//	while (*dst_++ = *src_++);
//	return dst;
//}

/*ģ��ʵ��strcat*/
//char* my_strcat(char* dst, const char* src)
//{
//	assert(dst);
//	assert(src);
//
//	char* dst_ = dst;
//	const char* src_ = src;
//	while (*dst_)
//	{
//		dst_++;
//	}
//	while (*dst_ = *src_)
//	{
//		dst_++, src_++;
//	}
//	return dst;
//}

/*2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�*/
//#include<stdio.h>
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int empty = 0;
//	int num = 0;
//	empty = money / price;
//	num = money / price;
//	while (empty >= 2)        //ע��˴�������empty >= 0Ӵ
//	{
//		num += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}