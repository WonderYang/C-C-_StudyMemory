#define _CRT_SECURE_NO_WARNINGS 1
/*1.编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。*/
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
//		ret += ((value >> i) & 1) * pow(2, 31 - i);     //坑，这里一定要加括号，*的优先级高于按位与（&） 
//		//		if ((value>>i)&1 == 1)
//		//		{
//		//			ret = ret + pow(2, 31-i);
//		//		}
//
//	}
//	return ret;
//}


/*不使用（a+b）/2这种方式，求两个数的平均值。 */
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
//	return (x&y) + ((x^y) >>1);    //>>操作符优先级级比^操作符优先级高，所以一定要加上括号
//}

/*编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
*/
//#include<stdio.h>
//int sigle(int* p, int sz);
//int main()
//{
//	int arr[] = { 1, 3, 4, 4, 3, 5, 5 ,77,77};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("该数组唯一不单的数为: %d\n", sigle(arr, sz));
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


/*有一个字符数组的内容为:"student a am i",
请你将数组的内容改为"i am a student".
要求：
不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。 */
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
//		int j = m;                       //保存上一个空格后一个字符的下标
//		char tmp = 0;                     //进行交换的中间量
//		int t = i - 1;
//		int num = i + j;                  //num来控制下面交换循环的次数
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
