 #pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* ptr = NULL;
//	int num = 0;
//	scanf("%d", &num);
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)   //必须判断
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
//	free(ptr);      //勿忘
//	ptr = NULL;    //有必要这样做，不然ptr成了野指针；
//	return 0;
//}




//int main()
//{
//	int* ptr = NULL;
//	int num = 0;
//	scanf("%d", &num);
//	ptr = (int*)malloc(num*1024*1024*sizeof(char));
//	if (NULL != ptr)   //必须判断
//	{
//		;
//	}
//	else
//	{
//		perror("malloc");
//	}
//	free(ptr);      //勿忘
//	ptr = NULL;    //有必要这样做，不然ptr成了野指针；
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
//		;//执行任务
//	}
//	else
//	{
//		perror("malloc");
//		//或者 exit(EXIT_FAILURE);
//	}
//	//第一种方法扩展
//	//ptr = realloc(ptr, 1000);     //第一种方法；（可能会造成内存泄漏）
//
//	//第二种方法扩展
//	int *p = realloc(ptr, 1024);
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//	else
//	{
//		perror("realloc");
//	}
//	//执行任务
//
//	free(ptr);
//	return 0;
//}


/*动态内存常见错误例题*/
/*  1.访问越界  */
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p != NULL)
//	{
//		for (int i = 0; i <= 10; i++)     //这里应该i < 10, <=就越界了
//		{
//			*(p + i) = i;
//		}
//	}
//	else
//	{
//		exit(EXIT_FAILURE);    //EXIT_FAILURE 在<stdlib.h>中，它的值就是一；
//	}
//
//	free(p);
//	return 0;
//}


/*  2.超经典面试题1 */
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>

//void GetMemory(char* p)   //错误方式
//{
//	p = (char*)malloc(100);
//}

//void GetMemory(char** p)   //正确方式一
//{
//	*p = (char*)malloc(100);
//}

//char* GetMemory(char* p)      //正确方式二
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

/*超级经典面试题2*/
//#include<stdio.h>
//#include<stdlib.h>
//
//char* getmemory(void)                 //函数一结束它的栈帧结构就会释放
//{
//	char arr[] = "i love you";
//	return arr;
//}
//int main()
//{
//	char* p = getmemory();
//	printf("%s\n", p);             //新函数覆盖被释放的函数栈帧
//	return 0;
//}
