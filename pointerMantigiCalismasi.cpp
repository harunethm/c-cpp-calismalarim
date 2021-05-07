#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 5, *sayi1;
	sayi1 = &a;
	
	printf("%d", sayi1);
	printf("%p", *sayi1);
	
	return 1;
}
