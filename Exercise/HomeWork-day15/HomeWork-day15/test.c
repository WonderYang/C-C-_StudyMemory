 //#pragma warning(disable:4996)
/*1.一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个数字，编程实现。
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
//	int ret = arr[0];   //保存所有值异或的结果,这里千万注意，ret初始值不要定义为0，如果数组中有0的话，会对结果干扰
//	int i = 0;
//	int flag = 1;   //用来寻找ret的二进制位中第一个1；
//	int count = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 1; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//计算出异或总值
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
//	//找出异或总值的bit位为1的第一个位置
//	flag = 1;                    //这里必须又要把flag初始化为一；
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
//	//分组异或
//	printf("只出现一次的数为：%d   %d\n", a, b);
//}


/*模拟实现strcpy*/
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

/*模拟实现strcat*/
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

/*2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。*/
//#include<stdio.h>
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int empty = 0;
//	int num = 0;
//	empty = money / price;
//	num = money / price;
//	while (empty >= 2)        //注意此处不能是empty >= 0哟
//	{
//		num += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}