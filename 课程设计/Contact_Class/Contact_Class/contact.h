#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct student     //����ṹ��
{
	char name[20];    //����
	char street[15];      //�ֵ�
	char city[10];     //����
	char eip[20];    //�ʱ�
	char state[10];    //����
	struct student *next;  //�ṹ��ָ��
}stu;

void print();
void input(stu *p1);    //�����������
void printMessage(stu * p);//���������ϵ����Ϣ
//�����ϵ�ˣ�Ĭ��Ϊͷ�巨
void add();
void lookdata(stu *p1);     //�鿴���ݵĺ���

void insert();      //��������

void deleted();   //ɾ������

void find(stu *p);  //ͨ���������Ҳ鿴���ݵĺ���

void update(stu *p);  //ͨ�����������޸�����
save(stu *p2);   //��������