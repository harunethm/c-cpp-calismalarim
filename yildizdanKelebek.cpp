#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k, l;

	for (k = 1; k <= 5; k++)
	{
		for (l = 1; l <= k; l++)
		{
			printf("*");
		}
		for (int i = 5; i >= l; i--)
		{
			printf(" ");
		}
		for (int i = 5; i >= l; i--)
		{
			printf(" ");
		}
		for (l = 1; l <= k; l++)
		{
			printf("*");
		}
		printf("\n");
	}

	int i, j;
	
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j >= i; j--)
		{
			printf("*");
		}
		for (int a = 0; a < j; a++)
		{
			printf(" ");
		}
		for (int a = 0; a < j; a++)
		{
			printf(" ");
		}
		for (j = 5; j >= i; j--)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

