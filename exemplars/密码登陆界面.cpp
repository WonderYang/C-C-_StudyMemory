#include<stdio.h>
#include<string.h>
int main()
{
	char code[20]={0},i=0,logle=0;
	printf("%30c***********************�û���¼********************\n",' ');
	printf("\n\n%25c�������û�������:\n",' ');
	for(i=0;i<10;i++)
	{
		logle++;
		scanf("%s",code);             //����%c�����������������ˣ� 
		if(strcmp(code,"123456")==0)
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			if(logle==3)
			{
				printf("��½ʧ��\n");
				break;
			}
			printf("�������\n�㻹��%d�λ���������ȷ����\n",2-i);
		}
	}
}
