#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Klavyeden girilen 3 basamakl� bir say�n�n basamak de�erini ekrana yazan C program�n� yaz�n�z.
	int s, bbas, ybas, obas;
	printf("3 basamakli bir sayi giriniz : ");
	scanf("%d", &s);
	
	//birler basama��
	bbas = s % 10;
	printf("birler basamagi %d\n", bbas);
	
	//onlar basama��
	s = s / 10;
	obas = s % 10;
	obas = obas * 10;
	printf("onlar basamagi %d\n", obas);
	
	//y�zler basama��
	s = s / 10;
	ybas = s % 10;
	ybas = ybas * 100;
	printf("yuzler basamagi %d", ybas);	
	
	return 1;
}
