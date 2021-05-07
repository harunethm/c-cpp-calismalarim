#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Bir süt ürünleri iþletmesinde 7,5 lt süt kullanýlarak 1 kg peynir üretiliyor. Klavyeden girilen peynir miktarýnýn üretilebilmesi için kaç litre süt üretilmesi gerektiðini bulan programý yazýnýz.
	int peynir;
	float gsut;
	printf("Peynir miktarini giriniz : ");
	scanf("%d", &peynir);
	
	gsut = peynir * (7.5);
	
	printf("Uretilmesi gereken sut miktari : %.1f", gsut);
	
	
	return 1;
}
