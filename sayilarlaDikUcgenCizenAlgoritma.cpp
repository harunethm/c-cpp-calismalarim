#include <stdio.h>
#include <stdlib.h>

//1
//2 3
//4 5 6

int main()
{
	int a = 1, c = 1, d;
	
	printf("kac satir olmasini istediginizi giriniz: ");
	scanf("%d", &d);
	d++;
	
	for(int a; a < d; a++)
	{
		for(int b = 1; b <= a; b++)
		{
			printf("%d ", c);
			c++;
		}
		printf("\n");
	}
	return 1;
}
