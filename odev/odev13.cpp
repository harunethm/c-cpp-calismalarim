#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, a, b;
	printf("iki sayi giriniz:");
	scanf("%d %d", &x, &y);
	a = x;
	b = y;
	
	printf("x += y = %d\n", x += y);
	x = a;
	y = b; 
	printf("x -= y = %d\n", x -= y);
	x = a;
	y = b;
	printf("x *= y = %d\n", x *= y);
	x = a;
	y = b;
	printf("x += -y = %d\n", x += -y);
	x = a;
	y = b;
	printf("x -= -y = %d\n", x -= -y);
	x = a;
	y = b;
	printf("x *= -y = %d\n", x *= -y);

	printf("\n");
	system("pause");
	return 0;
}
