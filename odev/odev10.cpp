#include <stdlib.h>
#include <stdio.h>

int main()
{

	int hiz1, hiz2, hiz3;
	float zaman1, zaman2, zaman3;


	printf("1. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hiz1);
	printf("1. seferin suresini dakika cinsinden giriniz:");
	scanf("%f", &zaman1); 
	zaman1 = zaman1 * (0.0166666666667);

	printf("2. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hiz2);
	printf("2. seferin suresini dakika cinsinden giriniz:");
	scanf("%f", &zaman2);
	zaman2 = zaman2 * (0.0166666666667);

	printf("3. seferdeki hizi km/h cinsinden giriniz:");
	scanf("%d", &hiz3);
	printf("3. seferin suresini dakika cinsinden giriniz:");
	scanf("%f", &zaman3);
	zaman3 = zaman3 * (0.0166666666667);
	
	float orthiz;
	orthiz = ( (hiz1 * zaman1) + (hiz2 * zaman2) + (hiz3 * zaman3) ) / ( (zaman1 + zaman2 + zaman3) );

	printf("ortalama hizi : %.2f", orthiz);


	printf("\n");
	system("pause");
	return 1;
}
