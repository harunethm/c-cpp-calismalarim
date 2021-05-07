#pragma warning(disable:4996)
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <iostream>

int karealma(int sayi)
{
	return sayi * sayi;
}

char c;
void mesajyaz()
{
	printf("%c", c);
	return;
}

float ortalama(int sayi1, int sayi2, int sayi3)
{
	float toplam;
	toplam = sayi1 + sayi2 + sayi3;
	float ort;
	ort = toplam / 3;
	return ort;
}

int toplam = 1;
int faktoriyelhesaplama(int a)
{
	for ( a; a >= 1; a--)
	{
		toplam = toplam * a;
	}
	return 0;
}



int main()
{

/*
	----1 den 50 ye kadar olan ve 3 e bölünemeyen sayýlarý yazdýrma

	int a = 0;
	while (1)
	{
		a++;
		if (a % 3 != 0)
		{
			printf("%d ", a);
		}
		if (a > 50)
			break;
	}

	----test sorusu (20 satýr kod oluþur)

	int i = 0;
	do
	{
		for (int j = 0; j < 4; j++)
			printf("%d\n", i + j);
		i++;
	} while (i < 5);


	----kare alma

	int a;
	int b;
	printf("karesini almak istediginiz sayiyi giriniz:");
	scanf("%d", &a);
	b = karealma(a);
	printf("%d", b);

	----fonksiyon denemesi

	scanf("%s", &c);
	mesajyaz();

	----3 sayýnýn ortalamasýný bulma

	float sonuc;
	int sayi1, sayi2, sayi3;
	printf("3 sayi giriniz:");
	scanf("%d %d %d", &sayi1, &sayi2, &sayi3);
	sonuc = ortalama(sayi1, sayi2, sayi3);
	printf("%.2f\n", sonuc);


	----18 yaþ kontrolü uygulamasý
	//yaþ tanýmla, yaþ iste, 18 ile karþýlaþtýr, büyükse giriþ, küçükse çýkýþ;
	int yas;
	printf("siteye girebilmek icin 18 yasindan buyuk olmalisiniz, lutfen yasinizi giriniz:");
	scanf_s("%d", &yas);
	if (yas >= 18)
		printf("Basariyla giris yaptiniz.");
	else
		printf("Yasiniz 18'den buyuk olmali.");


	----hangi sinemaya gideceðiniz bilen birine salon numarasýný söyleyen kod
	//int a,b,c,salonno, a-birinci sinema b-ikinci sinema c-üçüncü sinema, birini seçtir, seçilene göre salon no söyle

	char vizyondaki1[50], vizyondaki2[50], vizyondaki3[50], secilen;

	printf("lütfen vizyondaki filmleri giriniz:");
	scanf_s(" %s, %s, %s", &vizyondaki1, &vizyondaki2, &vizyondaki3);
	printf("gitmek istediðiniz filmi seciniz:\n1-%s\n2-%s\n3-%s", vizyondaki1, vizyondaki2, vizyondaki3);
	scanf_s("%d", &secilen);
	switch (secilen)
	{
	case 1: printf("a");
		break;
	case 2: printf("b");
		break;
	case 3: printf("c");
		break;
	default:printf("gecerli deger girmediniz!!!");
		break;
	}


	----a dan b ye kadar sayan döngü
	//a ve b tanýmla, a ve b iste, ekrana a yazdýr bir arttýr b den küçük mü kontrol et

	int a, b;
	printf("yazdirmak istediginiz sayi araligini giriniz:");
	scanf_s("%d %d", &a, &b);
	b++;

	if (a >= b)
	{
		printf("a sayisi b sayisindan buyuk olamaz!!!");
	}

	for (a; a<b; a++)
	{
		printf("%d ", a);
	}


	----a ile b arasýndaki c ye bölünen sayýlarý yazdýran döngü

	int a, b;
	printf("yazdirmak istediginiz sayi araligini giriniz:");
	scanf_s("%d %d", &a, &b);
	b++;
	printf("bolunebilmesini istediginiz sayiyi giriniz:");
	scanf_s("%d", &c);

	if (a >= b)
	{
		printf("a sayisi b sayisindan buyuk olamaz!!!");
	}

	for (a; a < b; a++)
	{
		if(a % c == 0)
			printf("%d\n", a);
	}

	char secenek[5];

	printf("kalani gormek istiyor musunuz(isterim, istemem):");
	for (int a = 0; a < 7; a++)
	{
		scanf_s(" %c", &secenek[a]);
	}

	if (secenek[4] == 'r')
		printf("kalan");
	else
		printf("kalan gosterilmiyor");

----6 adet nottan en küçüðünü bulan fonksiyon
//a tanýmla, herhangi notu a ya ver, her sayýyý tek tek a ile karþýlaþtýr küçükse yeni küçük sayý olarak seç, deðilse devam et

int notlar[5];

printf("lutfen notlari giriniz:");
for (int i = 0; i < 6; i++)
{
	scanf_s("%d", &notlar[i]);
}

int enkucuk = notlar[0];
for (int i = 0; i < 6 ;i++)
{
	if(enkucuk > notlar[i])
		enkucuk = notlar[i];
}
printf("%d", enkucuk);

int delta;
scanf("%d", &delta);
delta = sqrt(delta);
printf("%d", delta);
*/


	int a = 1, i, b;
	for	(a; a < 16; a++)
	{
		for (int i = 1; i <= a; i++)
		{
			int j = i;
			for (j; i <= j; j--, i++)
			{
				printf("%d ", i);
			}
		}
		printf("\n");
	}


	printf("\n");
	system("pause");
	return 0;
}
