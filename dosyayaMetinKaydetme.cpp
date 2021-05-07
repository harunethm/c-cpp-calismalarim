#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct ogrenci
{
	int numara;
	char ad[50], soyad[50];
}kisi;

int main()
{
	const int kisisayisi = 1;

	kisi ogrenciler[kisisayisi];

	int i = 0;

	while (i < kisisayisi)
	{
		printf("%d. kisinin once numarasini sonra adini ve soyadini giriniz : ", i + 1);
		scanf("%d", &ogrenciler[i].numara);
		getchar();
		gets_s(ogrenciler[i].ad);
		const int a = strlen(ogrenciler[i].ad);
		char ad[a];
		strcpy(ad, ogrenciler[i].ad);
		//scanf("%s", ogrenciler[i].ad);
		getchar();
		scanf("%s", ogrenciler[i].soyad);
		i++;
	}

	FILE* dosya = fopen("ogrencilistesi.txt", "a");
	if (!dosya)
	{
		printf("Dosya acilamadi!!");
		exit(1);
	}

	i = 0;
	while (i < kisisayisi)
	{
		fprintf(dosya, "%d %s %s\n", ogrenciler[i].numara, ogrenciler[i].ad, ogrenciler[i].soyad);
		i++;
	}
	printf("verileriniz basarili bir sekilde kaydedilmistir.\n");
	if (dosya)
		fclose(dosya);

	system("pause");
	return 0;
}