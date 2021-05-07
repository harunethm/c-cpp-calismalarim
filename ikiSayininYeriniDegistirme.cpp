#include <stdio.h>
#include <stdlib.h>

int main()
{	

int a, b;
printf("a ve b yi giriniz:");
scanf("%d %d", &a, &b);

a = a + b;
b = a - b;
a = a - b;

printf("a = %d, b = %d", a, b);

printf("\n");
system("pause");
return 0;
}
