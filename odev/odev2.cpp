#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y;
	printf("iki sayi giriniz:");
	scanf_s("%d %d", &x, &y);
	
	printf("x += y = %d\n", x += y);
	printf("x -= y = %d\n", x -= y);
	printf("x *= y = %d\n", x *= y);
	printf("x += -y = %d\n", x += -y);
	printf("x -= -y = %d\n", x -= -y);
	printf("x *= -y = %d\n", x *= -y);
	

	printf("\n");
	system("pause");
	return 0;
};