#include <stdio.h>
int main()
{
	int i, j, k, n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = 1; i <= n - 2; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		printf("*");

		for (j = 1; j <= n - 2 - i; j++)
		{
			printf("+");
		}
		printf("*\n");
	}
	for (k = 1; k < n; k++)
	{
		printf(" ");
	}
	printf("*");



	return 0;
}