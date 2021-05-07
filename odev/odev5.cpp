#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//A kentinden B kentine giden bir kiþi; klavyeden girilen dakika boyunca,								
	//yine klavyeden girilen bir hýz ile 3 farklý seferde aralarda beklemeden gitmektedir
	//(Örneðin 20 dakika boyunca 60km/h, 10 dakika boyunca 90km/h, 30 dakika boyunca 130km/h ile,
	//sayýsal deðerler klavyeden girilecek). Aracýn ortalama hýzýný bulan programý yazýnýz.

	//1. seferi iste, 2. seferi iste, 3. seferi iste,  1. seferin süresi x hýzý + 2. seferin süresi x hýzý + 3. seferin süresi x hýzý, toplam süreye böl

	int hýz1, hýz2, hýz3;
	float zaman1, zaman2, zaman3;


	printf("1. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hýz1);
	printf("1. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman1);
	

	printf("2. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hýz2);
	printf("2. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman2);
	

	printf("3. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hýz3);
	printf("3. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman3);
	

	//printf("%d\n%d\n%d\n%.2f\n%.2f\n%.2f\n", hýz1, hýz2, hýz3, zaman1, zaman2, zaman3);

	float orthýz;
	orthýz = ( (hýz1 * zaman1) + (hýz2 * zaman2) + (hýz3 * zaman3) ) / ( (zaman1 + zaman2 + zaman3) );

	printf("ortalama hizi : %.2f", orthýz);


	printf("\n");
	system("pause");
	return 0;
}