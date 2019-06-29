#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define COUNT 10
#define ROW 9
#define CLO 9
#define ROWS 11
#define CLOS 11
void printbroad(char arr[ROW][CLO], int row, int clo);   //打印棋盘
void arr_init(char arr[ROW][CLO], int row, int clo);    //棋盘初始化
void menu();
void arrs_randinit(char arrs[ROWS][CLOS], int row, int clo);     //生成随机雷
void arrs_init(char arrs[ROWS][CLOS], int row, int clo);     //真正存放雷的数组初始化
void print(char arrs[ROWS][CLOS], int row, int clo); 
void sweep(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo);  //扫雷
int is_thunder(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo);
int count(char arrs[ROWS][CLOS], int row, int clo);         //计算周围雷的数目
void movefirst(char arrs[ROWS][CLOS], int row, int clo);
void open(char arrs[ROWS][CLOS], char arr[ROW][CLO], int i, int j);
void flag(char arrs[ROWS][CLOS], char arr[ROW][CLO], int row, int clo);
