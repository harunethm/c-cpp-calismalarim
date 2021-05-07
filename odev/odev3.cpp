#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
	//Ýkinci dereceden bir bilinmeyenli denklemin köklerini bulan programý yazýnýz.
	int a, b, c;
	printf("x^2'nin katsayisini giriniz:");
	scanf("%d", &a);
	printf("x'in katsayisini giriniz:");
	scanf("%d", &b);
	printf("c'yi giriniz:");
	scanf("%d", &c);

	float delta, kok, kok1, kok2;
	delta = (b * b) - (4 * a * c);
	if (delta > 0)
	{
		kok1 = ((b) + (sqrt(delta))) / (2 * a);
		printf("kok1 : %.2f\n", kok1);
		kok2 = ((b) - (sqrt(delta))) / (2 * a);
		printf("kok2 : %.2f", kok2);
	}
	else if (delta == 0)
	{
		kok = (b + sqrt(delta)) / (2 * a);
		printf("kok : %.2f", kok);
	}
	else if (delta < 0)
		printf("gercel kok yoktur!");

	printf("\n");
	system("pause");
	return 0;
}