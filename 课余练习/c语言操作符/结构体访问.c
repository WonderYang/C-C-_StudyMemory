#include<stdio.h>
#include<string.h>
struct stu
{
	int age;
	char name[20];
	char sex[5];	
};
int main()
{
	struct stu student;
	struct stu* pstu = &student;
	student.age = 20;
	strcpy(student.name , "zhangsan");
	strcpy(student.sex , "��");
	printf("%s\n",student.name);    //ֱ������ 
	printf("%s\n",pstu->name);   //ָ������ 
	return 0;
}
