#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Klavyeden girilen 3 basamaklý bir sayýnýn basamak deðerini ekrana yazan C programýný yazýnýz.
	int s, bbas, ybas, obas;
	printf("3 basamakli bir sayi giriniz : ");
	scanf("%d", &s);
	
	//birler basamaðý
	bbas = s % 10;
	printf("birler basamagi %d\n", bbas);
	
	//onlar basamaðý
	s = s / 10;
	obas = s % 10;
	obas = obas * 10;
	printf("onlar basamagi %d\n", obas);
	
	//yüzler basamaðý
	s = s / 10;
	ybas = s % 10;
	ybas = ybas * 100;
	printf("yuzler basamagi %d", ybas);	
	
	return 1;
}
