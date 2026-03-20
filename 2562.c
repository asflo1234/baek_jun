#include <stdio.h>

int main()
{
	int a[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	int max = a[0];
	int idx = 0;

	for (int i = 1; i < 9; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			idx = i;
		}
	}
	printf("%d\n%d", max, idx + 1);
	return 0;
}