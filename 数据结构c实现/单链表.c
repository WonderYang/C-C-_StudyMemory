#include<stdio.h>
typedef struct Node
{
	char date;
	struct Node* next;
}NodeList,*LinkList;

LinkList init_List()
{
	int size = 0;  //记录链表长度
	char c;
	LinkList head;
	head = (LinkList)malloc(sizeof(NodeList));
	head->next = NULL;
	head->date = size;
	printf("请输入一串字符：（以*结束）\n"); 
	while(1)
	{
		c = getchar();
		if(c != '*')
		{
			LinkList newNode = (LinkList)malloc(sizeof(NodeList));
			newNode->date = c;
			newNode->next = head->next;
			head->next = newNode;
			size++;
		}
		else
		{
			break;
		}
	}
	return head;

}
//查找某个下标的节点
char findNode(LinkList head,int index)
{
	int i = 0;
	LinkList temp = head;
	for(i=0; i < index; i++)
	{
		temp = temp->next;

	}
	return temp->date;
}

void showList(LinkList head)
{
	LinkList temp = head->next;
	int count = 0;
	printf("show the Node:\n");
	for (;temp != NULL; temp = temp->next)
	{
		printf("%c  ", temp->date);
	}
	printf("\n");
}
//插入节点
void insert_Node(LinkList head, int index, char c)
{
	
	LinkList temp = head->next;
	int i = 0;
	LinkList newNode = (LinkList)malloc(sizeof(NodeList));
	for(;i < index-1 && temp!=NULL; i++)
	{
		temp = temp->next;

	}
	newNode->date = c;
	newNode->next = temp->next;
	temp->next = newNode;
}

//删除节点
void delete_Node(LinkList head, int index)
{
	
	LinkList temp = head;
	int i = 0;
	for(;i < index-1 && temp!=NULL; i++)
	{
		temp = temp->next;

	}
	temp->next = temp->next->next;
	//free(temp->next);

}

void menu()
{
	printf("---------------------1. 新建链表--------------------------------\n");
	printf("---------------------2. 插入节点--------------------------------\n");
	printf("---------------------3. 打印链表--------------------------------\n");
	printf("---------------------4. 查找指定下标的节点----------------------\n");
	printf("---------------------5. 删除节点      --------------------------\n");
	printf("---------------------0.退出-------------------------------------\n");

}

int main()
{
	int input;
	int flag = 1;
	int ins;
	char c,s;
	LinkList head;
	menu();
	while(flag) 
	{
		printf("\n--------------------------------------------------------------\n");
		printf("请输入序号，来完成相应功能：\n");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			{
				LinkList headCopy = init_List();
				head = headCopy;
				break;

			}
		case 2:
			{
				
				printf("please enter the site of insert:  ");
				scanf("%d", &ins);
				s = getchar();
				c = getchar();
				insert_Node(head, ins,c);
				break;
			}
		case 3:
			{
				showList(head);
				break;

			}
		case 4:
			{
				printf("plese enter the index:\n");
				scanf("%d",&ins);
				char s = findNode(head,ins);
				printf("%c",s);
				break;

			}
		case 0:
			{
				flag = 0;
				break;
			}


		case 5:
			{	
				printf("please enter the site of delete:  ");
				scanf("%d", &ins);
				delete_Node(head,ins);
			}

		}

	}

	return 0;
}
