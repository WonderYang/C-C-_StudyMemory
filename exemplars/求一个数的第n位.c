/*����һ*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x = 0;
	int tmp = 0;
	int n = 0;
	int count = 1;
	printf("������һ����\n��������Ҫ�����λ���ĵ�nλ����\n");
	scanf("%d%d", &x, &n);
	tmp = x;
	while(tmp /= 10)
	{
		count++;
	}
	printf("%d", x /(int)(pow(10, count - n))% 10);
}


/*������*/ 
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int x = 0;
//	int n = 0;
//	int count = 0;
//	printf("������һ����\n��������Ҫ�����λ���ĵ�nλ����\n");
//	scanf("%d%d", &x, &n);
//	do
//	{
//		arr[i] = x % 10;
//		i++;
//		count++;
//	}while(x /= 10);
//	printf("%d", arr[count - n]);
//	 
//}
