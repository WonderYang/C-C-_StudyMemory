#ifndef __CONTACT_H__
#define __CONTACT_H__

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define INIT 2

typedef struct
{
	char name[20];
	char sex;
	char age;
	int phone[16];
	char address[10];
}people_t, *people_p, **people_pp;

typedef struct
{
	int size;   //当前人员个数
	int cap;   //最大容量
	people_t peoples[0];     //柔性数组
}contact_t, *contact_p, **contact_pp;

void Log(const char* level_, const char* msg_);   //打印日志
void addpeople(contact_pp, people_p);
void updatePeople(contact_p ct_, const char* name);   //更新联系人
static int isContactFull(contact_p ct);   //判断通讯录是否为满
int isContactEmpty(contact_p ct_);        //判断通讯录是否为空
contact_p initContact();
void showPeople(people_p p_);
static int dilatation(contact_pp ct_);    //扩容
void listPeople(contact_p ct_);
void deletePeople(contact_p ct_, const char* name);
void deleteAllPeople(contact_p ct_);
void searchPeople(contact_p ct_, const char* name);
int compare_names(const void* p1, const void* p2);  //自定义的比较函数（用于实现qsort）
void sortAllPeople(contact_p ct_);
void contactMessagePrint(contact_p ct_);   //显示通讯录当前的信息
int destroy(contact_pp ct_);      //摧毁（free）当前通讯录





#endif