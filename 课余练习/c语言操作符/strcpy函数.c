#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src); //返回类型为char*而不是void，这样是为了实现链式访问 
int main()                         //所谓链式访问就是该函数返回值可作为另一个函数的参数 
{ 
	char arr[12] = {0};
	char *p = "i love you";
	printf("%s", my_strcpy(arr, p));
	return 0;
}
char* my_strcpy(char* dest, const char* src)   //const修饰会保证src所指向内容的不变性 
{
	char* ret = dest;
	assert(dest != NULL);            //当一个指针解引用时这个指针不能为空，否则会报错 
	assert(src != NULL);            //assert为断言，当括号内语句为真时，啥都不发生，为假时，会输出提示 
	while(*dest++ = *src++)      //库函数这样写的，更加简洁 
	{
		;
	}
	return ret;
}
