#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src); //��������Ϊchar*������void��������Ϊ��ʵ����ʽ���� 
int main()                         //��ν��ʽ���ʾ��Ǹú�������ֵ����Ϊ��һ�������Ĳ��� 
{ 
	char arr[12] = {0};
	char *p = "i love you";
	printf("%s", my_strcpy(arr, p));
	return 0;
}
char* my_strcpy(char* dest, const char* src)   //const���λᱣ֤src��ָ�����ݵĲ����� 
{
	char* ret = dest;
	assert(dest != NULL);            //��һ��ָ�������ʱ���ָ�벻��Ϊ�գ�����ᱨ�� 
	assert(src != NULL);            //assertΪ���ԣ������������Ϊ��ʱ��ɶ����������Ϊ��ʱ���������ʾ 
	while(*dest++ = *src++)      //�⺯������д�ģ����Ӽ�� 
	{
		;
	}
	return ret;
}
