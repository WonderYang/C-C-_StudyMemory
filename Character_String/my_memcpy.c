#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dst, const void* src, int count);
int main()
{
	char s[10];
	char *str = "as davs";
	printf("%s", my_memcpy(s, str, strlen(str)+1));
	return 0;
}
void* my_memcpy(void* dst, const void* src, int count)
{
	assert( dst);
	assert(src);
	
	char* ret = (char*) dst;
	while (count--)
	{
		*(char*)dst = *(const char*)src;
		++(char*)dst;    //�����Ǻ��üӼӣ������ִ��++����ʱdst����void*���ͣ�����ִ�мӼӣ���ᱨ�� 
		++(const char*)src;  //������dev��������Ҫ����++����VS2013����Ҫǰ�üӼӣ���why���� 
	}
	return ret;
	
}
