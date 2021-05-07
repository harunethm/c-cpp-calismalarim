#include <stdio.h>
#include <stdlib.h>

//1
//2 1
//3 2 1
//4 3 2 1

int main()
{
int a = 1, d, e;
	
	printf("kac satir olmasini istediginizi giriniz: ");
	scanf("%d", &d);
	d++;
	
	for(a; a < d; a++)
	{
		e = a;
		for(int b = 1; b <= a; a--)
		{
			printf("%d ", a);
		}
		printf("\n");
		a = e;
	}
	return 1;
}
