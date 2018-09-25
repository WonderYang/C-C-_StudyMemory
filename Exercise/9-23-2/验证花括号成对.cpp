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
		printf("matched!");             //成对
	else
		printf("unmatched!");           //不成对
	return 0;
}
