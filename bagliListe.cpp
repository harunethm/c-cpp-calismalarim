#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

struct dugum 
{
	int veri;
	struct dugum* sonraki;
};

struct dugum* baslangic = NULL;
struct dugum* geciciDegisken;

int secim;

struct dugum* dugumOlustur()
{
	struct dugum* yeniDugum = (struct dugum*)malloc(sizeof(struct dugum));
	return yeniDugum;
}

void sonaEkle(int a)
{
	struct dugum* dugumParcasi = dugumOlustur();
	dugumParcasi->veri = a;
	dugumParcasi->sonraki = NULL;

	if (baslangic == NULL)
	{
		baslangic = dugumParcasi;
	}
	else
	{
		geciciDegisken = baslangic;
		while (geciciDegisken->sonraki != NULL)
		{
			geciciDegisken = geciciDegisken->sonraki;
		}
		geciciDegisken->sonraki = dugumParcasi;
	}
}

void basaEkle(int a)
{
	struct dugum* dugumParcasi = dugumOlustur();
	dugumParcasi->veri = a;
	geciciDegisken = baslangic;
	dugumParcasi->sonraki = geciciDegisken;
	baslangic = dugumParcasi;
}

void arayaEkle(int a, int sira)
{
	int sayac = 0;
	struct dugum* arayaEklenecek = dugumOlustur();
	arayaEklenecek->veri = a;
	geciciDegisken = baslangic;
	if (sira == 0)
	{
		basaEkle(a);
	}
	else
	{
		while (geciciDegisken != NULL)
		{
			if (sayac + 1 == sira)
				break;
			geciciDegisken = geciciDegisken->sonraki;
			sayac++;
		}
		struct dugum* geciciDegisken1;
		geciciDegisken1 = geciciDegisken->sonraki;
		geciciDegisken->sonraki = arayaEklenecek;
		arayaEklenecek->sonraki = geciciDegisken1;
	}
}

void yazdir()
{
	if (baslangic == NULL)
	{
		printf("\n Listede hic dugum yok, lutfen dugum ekleyin.");
	}
	else
	{
		geciciDegisken = baslangic;
		printf("\n---------------------\n");
		while (geciciDegisken->sonraki != NULL)
		{
			printf(" %d", geciciDegisken->veri);
			geciciDegisken = geciciDegisken->sonraki;
		}
		printf(" %d", geciciDegisken->veri);
		printf("\n---------------------\n");
		//printf("\n");
	}
}

void secenekler(int secim)
{
	int sayi, sira;
	switch (secim)
	{
	case 1:
		printf(" Basa ekleyeceginiz sayiyi girin: ");	scanf("%d", &sayi);
		basaEkle(sayi);
		break;
	case 2:
		printf(" Kacinci siraya ekleyeceksiniz: ");    scanf("%d", &sira);
		printf(" Hangi sayiyi ekleyeceksiniz ? ");	 scanf("%d", &sayi);
		arayaEkle(sayi, sira - 1);
		break;
	case 3:

		printf("\n Kac tane dugum ekleyeceksiniz ? ");    scanf("%d", &sayi);
		for (int i = 0; i < sayi; i++)
		{
			printf("\n %d. sayi: ", i + 1);    scanf("%d", &secim);
			sonaEkle(secim);
		}
		break;
	case 4:
		yazdir();
		break;
	default:
		printf(" Gecerli bir deger girmediniz.");
		break;
	}
}

void menu()
{
	while (true)
	{
		printf("\n ---------MENU--------");
		printf("\n 1- Basa Eleman Ekle");
		printf("\n 2- Ortaya Eleman Ekle");
		printf("\n 3- Sona Eleman Ekle");
		printf("\n 4- Listeyi Goruntule");
		printf("\n\n Seciminiz: ");
		scanf("%d", &secim);
		secenekler(secim);
	}
}

int main()
{
	menu();
}