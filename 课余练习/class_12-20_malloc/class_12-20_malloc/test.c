 #pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr = NULL;
//	int num = 0;
//	scanf("%d", &num);
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)   //�����ж�
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = i;
//		}
//	}
//	else
//	{
//		perror("malloc");
//	}
//	int* p = ptr;
//	for (; p < ptr + num; p++)
//	{
//		printf("%d\n", *p);
//	}
//
//	free(ptr);      //����
//	ptr = NULL;    //�б�Ҫ����������Ȼptr����Ұָ�룻
//	return 0;
//}




//int main()
//{
//	int* ptr = NULL;
//	int num = 0;
//	scanf("%d", &num);
//	ptr = (int*)malloc(num*1024*1024*sizeof(char));
//	if (NULL != ptr)   //�����ж�
//	{
//		;
//	}
//	else
//	{
//		perror("malloc");
//	}
//	free(ptr);      //����
//	ptr = NULL;    //�б�Ҫ����������Ȼptr����Ұָ�룻
//	return 0;
//}


//void* calloc(size_t num, size_t size);
//void* realloc(void* ptr, size_t size);

//#include<stdio.h>
//int main()
//{
//	int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		;//ִ������
//	}
//	else
//	{
//		perror("malloc");
//		//���� exit(EXIT_FAILURE);
//	}
//	//��һ�ַ�����չ
//	//ptr = realloc(ptr, 1000);     //��һ�ַ����������ܻ�����ڴ�й©��
//
//	//�ڶ��ַ�����չ
//	int *p = realloc(ptr, 1024);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	else
//	{
//		perror("realloc");
//	}
//	//ִ������
//
//	free(ptr);
//	return 0;
//}


/*��̬�ڴ泣����������*/
/*  1.����Խ��  */
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i <= 10; i++)     //����Ӧ��i < 10, <=��Խ����
//		{
//			*(p + i) = i;
//		}
//	}
//	else
//	{
//		exit(EXIT_FAILURE);    //EXIT_FAILURE ��<stdlib.h>�У�����ֵ����һ��
//	}
//
//	free(p);
//	return 0;
//}


/*  2.������������1 */
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//void GetMemory(char* p)   //����ʽ
//{
//	p = (char*)malloc(100);
//}

//void GetMemory(char** p)   //��ȷ��ʽһ
//{
//	*p = (char*)malloc(100);
//}

//char* GetMemory(char* p)      //��ȷ��ʽ��
//{
//	p = (char*)malloc(100);
//	return p;
//}

//int main()
//{
//	char* str = NULL;
//	str = GetMemory(str);                 
//	strcpy(str, "hello world");
//	printf(str);
//	//free(str);
//	return 0;
//}

/*��������������2*/
//#include<stdio.h>
//#include<stdlib.h>
//
//char* getmemory(void)                 //����һ��������ջ֡�ṹ�ͻ��ͷ�
//{
//	char arr[] = "i love you";
//	return arr;
//}
//int main()
//{
//	char* p = getmemory();
//	printf("%s\n", p);             //�º������Ǳ��ͷŵĺ���ջ֡
//	return 0;
//}
