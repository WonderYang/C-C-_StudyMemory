 #pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);   //打印出当前进行编译的源文件的位置
//	printf("%d\n", __LINE__);
//	//printf("%d", __STDC__);  //这句话会报错，说明VS不遵循ANSI C
//}


//#include<stdio.h>
//#define ADD(x, y) x+y 
//#define SQ(x) x*x       //切记不要在宏后面加分号
//int main()
//{
//	printf("%d\n", SQ(2 + 1));   //2+1*2+1 = 5;
//	printf("%d\n", ADD(1, 2) * 2);
//	return 0;
//}
//所以使用宏函数（宏）要把表达式的每个变量以及总的表达式带上括号
//例如：((x) * (x))      ((x) + (y))


//#include<stdio.h>
//int main()
//{
//	char* p = "hello ""bit\n";
//	printf("hello", " bit\n");    //这句只会输出hello
//	printf("%s", p);   //输出hello bit
//	return 0;
//}


/*
   使用#，把一个宏参数变成相应的字符串；
*/
//#include<stdio.h>
//#define PRINT(FORMAT, VALUE)\
//	   printf("the value of "#VALUE" is "FORMAT"\n", VALUE);    //注意续航符后面不能有空格
//int main()
//{
//	int i = 10;
//	PRINT("%d", i + 3);
//	return 0;
//}


/*
   ##可以把位于他两边的符号合成一个符号。
*/
//#include<stdio.h>
//#define ADD_TO_SUM(num, value)
//sum##num += value;
//int main()
//{
//	ADD_TO_SUM(5, 10);
//	return 0;
//}


//宏的经典运用 1
//#include<stdio.h>
//#define MAX(a, b) a>b?a:b
//int main()
//{
//	int max = 0;
//	printf("%d\n", MAX(3, 8));
//	return 0;
//}

//宏的经典运用 2
//#include<stdio.h>
//#include<stdlib.h>
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(3, int);
//
//	free(p);
//	return 0;
//}



/*
    条件编译
*/
//#include<stdio.h>
//int main()
//{
//	printf("lala\n");
//#ifdef _DEBUG_
//	printf("haha\n");             //将不会执行这一块
//#endif
//	return 0;
//}