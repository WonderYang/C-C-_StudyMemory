 #pragma warning(disable:4996)
//#include<stdio.h>
//int main()
//{
//	printf("%s\n", __FILE__);   //��ӡ����ǰ���б����Դ�ļ���λ��
//	printf("%d\n", __LINE__);
//	//printf("%d", __STDC__);  //��仰�ᱨ��˵��VS����ѭANSI C
//}


//#include<stdio.h>
//#define ADD(x, y) x+y 
//#define SQ(x) x*x       //�мǲ�Ҫ�ں����ӷֺ�
//int main()
//{
//	printf("%d\n", SQ(2 + 1));   //2+1*2+1 = 5;
//	printf("%d\n", ADD(1, 2) * 2);
//	return 0;
//}
//����ʹ�ú꺯�����꣩Ҫ�ѱ��ʽ��ÿ�������Լ��ܵı��ʽ��������
//���磺((x) * (x))      ((x) + (y))


//#include<stdio.h>
//int main()
//{
//	char* p = "hello ""bit\n";
//	printf("hello", " bit\n");    //���ֻ�����hello
//	printf("%s", p);   //���hello bit
//	return 0;
//}


/*
   ʹ��#����һ������������Ӧ���ַ�����
*/
//#include<stdio.h>
//#define PRINT(FORMAT, VALUE)\
//	   printf("the value of "#VALUE" is "FORMAT"\n", VALUE);    //ע�����������治���пո�
//int main()
//{
//	int i = 10;
//	PRINT("%d", i + 3);
//	return 0;
//}


/*
   ##���԰�λ�������ߵķ��źϳ�һ�����š�
*/
//#include<stdio.h>
//#define ADD_TO_SUM(num, value)
//sum##num += value;
//int main()
//{
//	ADD_TO_SUM(5, 10);
//	return 0;
//}


//��ľ������� 1
//#include<stdio.h>
//#define MAX(a, b) a>b?a:b
//int main()
//{
//	int max = 0;
//	printf("%d\n", MAX(3, 8));
//	return 0;
//}

//��ľ������� 2
//#include<stdio.h>
//#include<stdlib.h>
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = MALLOC(3, int);
//
//	free(p);
//	return 0;
//}



/*
    ��������
*/
//#include<stdio.h>
//int main()
//{
//	printf("lala\n");
//#ifdef _DEBUG_
//	printf("haha\n");             //������ִ����һ��
//#endif
//	return 0;
//}