#pragma warning(disable:4996)
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str1[] = "lala:lulu:lll";
//	char str2[] = "hahha:hehhe";
//	char* ret1 = strtok(str1, ":");
//	printf("%s\n", ret1);
//	/*ret1 = strtok(str1, ":");
//	printf("%s\n", ret1);*/
//	ret1 = strtok(NULL, ":");
//	printf("%s\n", ret1);
//	return 0;
//}




//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char mgs[] = "str:::str:end";   //不能是char* mgs = "str:::str:end",因为这保存在字符常量区，不可以被修改
//	char* ret = strtok(mgs, ":");
//	int count = 0;
//	while (ret != NULL)
//	{
//		count++;
//		printf("%d: %s\n", count, ret);
//		ret = strtok(NULL, ":");           //这里一定是NULL，只有第一次分割才不为NULL，如果这里是mgs，将会输出str的死循环
//	}
//	return 0;
//}
/*1: str
  2: str
  3: end
请按任意键继续. . .*/         //上一题结果，证明不会分割中间的空字符




/*课件例题*/
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[] = "- this, a sample string.";
//	char* pch;
//	printf("splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}
/*splitting string "- this, a sample string." into tokens:
  this
  a
  sample
  string
  请按任意键继续. . .*/        //结果


/*strerror函数*/
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		printf("%d : %s\n",i, strerror(i));
//	}
//	system("pause");
//	return 0;
//
//}
//输出结果：（这是windows下，在Linux下又不一样）
/*
0 : No error
1 : Operation not permitted
2 : No such file or directory
3 : No such process
4 : Interrupted function call
5 : Input/output error
6 : No such device or address
7 : Arg list too long
8 : Exec format error
9 : Bad file descriptor
10 : No child processes
11 : Resource temporarily unavailable
12 : Not enough space
13 : Permission denied
14 : Bad address
15 : Unknown error
16 : Resource device
17 : File exists
18 : Improper link
19 : No such device
20 : Not a directory
21 : Is a directory
22 : Invalid argument
23 : Too many open files in system
24 : Too many open files
25 : Inappropriate I/O control operation
26 : Unknown error
27 : File too large
28 : No space left on device
29 : Invalid seek
30 : Read-only file system
31 : Too many links
32 : Broken pipe
33 : Domain error
34 : Result too large
35 : Unknown error
36 : Resource deadlock avoided
37 : Unknown error
38 : Filename too long
39 : No locks available
40 : Function not implemented
41 : Directory not empty
42 : Illegal byte sequence
43 : Unknown error
44 : Unknown error
45 : Unknown error
46 : Unknown error
47 : Unknown error
48 : Unknown error
49 : Unknown error
50 : Unknown error
51 : Unknown error
52 : Unknown error
53 : Unknown error
54 : Unknown error
55 : Unknown error
56 : Unknown error
57 : Unknown error
58 : Unknown error
59 : Unknown error
60 : Unknown error
61 : Unknown error
62 : Unknown error
63 : Unknown error
64 : Unknown error
65 : Unknown error
66 : Unknown error
67 : Unknown error
68 : Unknown error
69 : Unknown error
70 : Unknown error
71 : Unknown error
72 : Unknown error
73 : Unknown error
74 : Unknown error
75 : Unknown error
76 : Unknown error
77 : Unknown error
78 : Unknown error
79 : Unknown error
80 : Unknown error
81 : Unknown error
82 : Unknown error
83 : Unknown error
84 : Unknown error
85 : Unknown error
86 : Unknown error
87 : Unknown error
88 : Unknown error
89 : Unknown error
90 : Unknown error
91 : Unknown error
92 : Unknown error
93 : Unknown error
94 : Unknown error
95 : Unknown error
96 : Unknown error
97 : Unknown error
98 : Unknown error
99 : Unknown error
100 : Unknown error
请按任意键继续. . .
*/


/*利用字符函数将大写转小写*/
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char arr[] = "i lOve You";
//	printf("%s\n", arr);
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//			arr[i] = toupper(arr[i]);
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}