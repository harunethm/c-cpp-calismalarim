#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	// a dan b ye kadar olan sayýlarýn toplamý

	int a, b;
	int toplam = 0;
	
	printf("iki sayi giriniz:");
	scanf("%d %d", &a, &b);
	b++;
	
	/*
	//do while kullanarak
	do
	{
		toplam = toplam + a;
		a++;
	} 
	while (a < b);
	*/
	
	
	// for kullanarak 	
	for (a; a < b; a++)
	{
		toplam = toplam + a;

	}
	
	printf("%d", toplam);
	
	printf("\n");
	system("pause");
	return 0;
}
