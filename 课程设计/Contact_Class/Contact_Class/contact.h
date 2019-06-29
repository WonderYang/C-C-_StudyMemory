#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct student     //定义结构体
{
	char name[20];    //姓名
	char street[15];      //街道
	char city[10];     //城市
	char eip[20];    //邮编
	char state[10];    //国家
	struct student *next;  //结构体指针
}stu;

void print();
void input(stu *p1);    //输入相关数据
void printMessage(stu * p);//用来输出联系人信息
//添加联系人，默认为头插法
void add();
void lookdata(stu *p1);     //查看数据的函数

void insert();      //插入数据

void deleted();   //删除数据

void find(stu *p);  //通过姓名查找查看数据的函数

void update(stu *p);  //通过姓名查找修改数据
save(stu *p2);   //保存数据