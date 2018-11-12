#include<stdio.h>
#include<assert.h>
void ReverseStringCode(char* start, char* end);
void Reverse(char* p);
int main()
{
	char arr[] = "student a is friend my";
	int sz = sizeof(arr)/sizeof(arr[0]);
	printf("%s", arr);
	Reverse(arr);
	printf("\n");
	printf("%s", arr);
	return 0;
}
void ReverseStringCode(char* start, char* end)
{
	assert(start);
	assert(end); 
	while(start < end)
	{
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++;
		end--;
	}
}
void Reverse(char* p)
{
	assert(p);
	char* str = p;
	char* start = p;
	char* end;
	assert(p);
	while (*str )
	{
		if(*str == ' ')
		{
			end = str;
			ReverseStringCode(start, end - 1);
			str++;
			start = str;
		}
		else
		{
			str++;
		}
	}
	ReverseStringCode(start, str - 1);
	ReverseStringCode(p, str - 1);
} 


