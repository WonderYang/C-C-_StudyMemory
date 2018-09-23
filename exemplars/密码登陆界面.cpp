#include<stdio.h>
#include<string.h>
int main()
{
	char code[20]={0},i=0,logle=0;
	printf("%30c***********************用户登录********************\n",' ');
	printf("\n\n%25c请输入用户名密码:\n",' ');
	for(i=0;i<10;i++)
	{
		logle++;
		scanf("%s",code);             //不是%c，当初就是这样错了； 
		if(strcmp(code,"123456")==0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			if(logle==3)
			{
				printf("登陆失败\n");
				break;
			}
			printf("密码错误\n你还有%d次机会输入正确密码\n",2-i);
		}
	}
}
