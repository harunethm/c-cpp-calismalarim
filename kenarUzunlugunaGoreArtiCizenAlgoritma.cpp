#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, c, d, e;
	printf("bir kenar uzunlugunu giriniz: ");
	scanf("%d", &a);
	c = (a/2)+1;
	d = (a/2);
	e = d++;
	
	if(a % 2 != 0)
	{
		for(int i = 1; i <= a; i++)
		{
			for(int j = 1; j <= a; j++)
			{
				if(j == c || i == c)
				{
					printf("*");
				}
				else
				printf(" ");
			}
			printf("\n");
		}
	}
	
	else if(a % 2 == 0)
	{
		for(int i = 1; i <= a; i++)
		{
			for(int j = 1 ; j <= a; j++)
			{
				if(j == d || i == d || j == e || i == e)
				{
					printf("*");
				}
				else
				printf(" ");
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("gecerli bir deger girmediniz!!");
	}
	
	return 0;
}
