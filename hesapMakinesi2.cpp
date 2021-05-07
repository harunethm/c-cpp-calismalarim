#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int toplama(int sayi1, int sayi2)
{
	return sayi1 + sayi2;
}

int cikarma(int sayi1, int sayi2)
{
	return sayi1 - sayi2;
}

int carpma(int sayi1, int sayi2)
{
	return sayi1 * sayi2;
}

int bolme(int sayi1, int sayi2)
{
	return (float)sayi1 / sayi2;
}

int modAlma(int sayi1, int sayi2)
{
	int mod;
	mod = sayi1 % sayi2;
	return mod;
}

int dsecenegi(int sayi1, int sayi2)
{
	char kalan;
	printf("kalani gormek istiyor musunuz(e,h):");
	scanf(" %c", &kalan);

	switch (kalan)
	{
	case 'e':
	{
		printf("bolum:%d kalan:%d", bolme(sayi1, sayi2), (int)sayi1 % (int)sayi2);
	}
	break;
	case 'h':
	{
		printf("%d", bolme(sayi1, sayi2));
	}
	break;
	default:
		break;
	}
	return 0;
}

int main()
{
	int sayi1, sayi2;
	char islem;

	printf("iki sayi giriniz:");
	scanf("%d %d", &sayi1, &sayi2);
	printf("a-toplama\nb-cikarma\nc-carpma\nd-bolme\nyapmak istediginiz islemi seciniz:");
	scanf(" %c", &islem);

	switch (islem)
	{
	case 'a': {printf("%d", toplama(sayi1, sayi2));}
			  break;
	case 'b': {printf("%d", cikarma(sayi1, sayi2)); }
			  break;
	case 'c': {printf("%d", carpma(sayi1, sayi2)); }
			  break;
	case 'd':
	{
		dsecenegi(sayi1, sayi2);
		
		/*char kalan;
		printf("kalani gormek istiyor musunuz(e,h):");
		scanf(" %c", &kalan);

		switch (kalan)
		{
		case 'e':
		{
			printf("bolum:%.2f kalan:%d", bolme(sayi1, sayi2), modAlma(sayi1, sayi2));
		}
		case 'h':
		{
			printf("%.0f", bolme(sayi1, sayi2));
		}
		default:
		break;
		}*/
	}
		break;
	
	default:
		printf("gecerli bir islem girmediniz!");
		break;
	}
	
	
	/*
	int sayi1, sayi2;
	char secenek;

	printf("	lutfen iki sayi giriniz:");
	scanf("%d %d", &sayi1, &sayi2);

	printf("	a-toplama\n	b-cikarma\n	c-carpma\n	d-bolme\n");
	printf("	lutfen islemlerden bir tanesini seciniz:");
	scanf(" %c", &secenek);

	switch (secenek)
	{
	case 'a':{printf("	%d\n", sayi1 + sayi2);}
		break;
	case 'b':{printf("	%d\n", sayi1 - sayi2); }
		break;
	case 'c':{printf("	%d\n", sayi1 * sayi2); }
		break;
	case 'd':
	{
		int kalan;
		
		printf("	kalani gormek istiyor musunuz(1=evet, 2=hayir):");
		scanf("%d", &kalan);
		
		switch (kalan)
		{
		case 1:
		{
			printf("	bolum:%d ,kalan:%d\n", sayi1 / sayi2, sayi1 % sayi2);
		}
		break;
		case 2:
		{
			printf("	bolum:%.2f\n", (float)sayi1 / sayi2);
		}
		break;
		default:
		{
			printf("	gecerli bir deger girmediniz");
		}
		break;
		}
	}
		break;
	default: { printf("	gecerli bir islem secmediniz\n"); }
		break;
	}
	*/
	
	printf("\n");
	system("pause");
	return 0;
}
