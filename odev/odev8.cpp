#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Bir s�t �r�nleri i�letmesinde 7,5 lt s�t kullan�larak 1 kg peynir �retiliyor. Klavyeden girilen peynir miktar�n�n �retilebilmesi i�in ka� litre s�t �retilmesi gerekti�ini bulan program� yaz�n�z.
	int peynir;
	float gsut;
	printf("Peynir miktarini giriniz : ");
	scanf("%d", &peynir);
	
	gsut = peynir * (7.5);
	
	printf("Uretilmesi gereken sut miktari : %.1f", gsut);
	
	
	return 1;
}
