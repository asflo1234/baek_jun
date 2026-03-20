#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int r;
		char s[20];
		scanf("%d", &r);
		scanf("%s", s);
		for (int j = 0; s[j] != '\0'; j++)
		{
			for (int k = 0; k < r; k++)
			{
				printf("%c", s[j]);
			}
		}
		printf("\n");
	}
	return 0;
}