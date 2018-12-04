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
	int size;   //��ǰ��Ա����
	int cap;   //�������
	people_t peoples[0];     //��������
}contact_t, *contact_p, **contact_pp;

void Log(const char* level_, const char* msg_);   //��ӡ��־
void addpeople(contact_pp, people_p);
void updatePeople(contact_p ct_, const char* name);   //������ϵ��
static int isContactFull(contact_p ct);   //�ж�ͨѶ¼�Ƿ�Ϊ��
int isContactEmpty(contact_p ct_);        //�ж�ͨѶ¼�Ƿ�Ϊ��
contact_p initContact();
void showPeople(people_p p_);
static int dilatation(contact_pp ct_);    //����
void listPeople(contact_p ct_);
void deletePeople(contact_p ct_, const char* name);
void deleteAllPeople(contact_p ct_);
void searchPeople(contact_p ct_, const char* name);
int compare_names(const void* p1, const void* p2);  //�Զ���ıȽϺ���������ʵ��qsort��
void sortAllPeople(contact_p ct_);
void contactMessagePrint(contact_p ct_);   //��ʾͨѶ¼��ǰ����Ϣ
int destroy(contact_pp ct_);      //�ݻ٣�free����ǰͨѶ¼





#endif