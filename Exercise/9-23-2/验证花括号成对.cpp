#include <stdio.h>
int main()
{
	int ch, i = 0;
	ch = getchar();
	while (ch != EOF)
	{
		if (ch == '{')
			i++;
		if (ch == '}')
			i--;
		ch = getchar();
	}
	if (i == 0)
		printf("matched!");             //�ɶ�
	else
		printf("unmatched!");           //���ɶ�
	return 0;
}
