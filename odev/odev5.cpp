#include <stdlib.h>
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	//A kentinden B kentine giden bir ki�i; klavyeden girilen dakika boyunca,								
	//yine klavyeden girilen bir h�z ile 3 farkl� seferde aralarda beklemeden gitmektedir
	//(�rne�in 20 dakika boyunca 60km/h, 10 dakika boyunca 90km/h, 30 dakika boyunca 130km/h ile,
	//say�sal de�erler klavyeden girilecek). Arac�n ortalama h�z�n� bulan program� yaz�n�z.

	//1. seferi iste, 2. seferi iste, 3. seferi iste,  1. seferin s�resi x h�z� + 2. seferin s�resi x h�z� + 3. seferin s�resi x h�z�, toplam s�reye b�l

	int h�z1, h�z2, h�z3;
	float zaman1, zaman2, zaman3;


	printf("1. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &h�z1);
	printf("1. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman1);
	

	printf("2. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &h�z2);
	printf("2. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman2);
	

	printf("3. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &h�z3);
	printf("3. seferin suresini saat cinsinden giriniz:");
	scanf("%f", &zaman3);
	

	//printf("%d\n%d\n%d\n%.2f\n%.2f\n%.2f\n", h�z1, h�z2, h�z3, zaman1, zaman2, zaman3);

	float orth�z;
	orth�z = ( (h�z1 * zaman1) + (h�z2 * zaman2) + (h�z3 * zaman3) ) / ( (zaman1 + zaman2 + zaman3) );

	printf("ortalama hizi : %.2f", orth�z);


	printf("\n");
	system("pause");
	return 0;
}