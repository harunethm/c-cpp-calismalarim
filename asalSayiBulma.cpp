#include  <stdio.h>
#include <stdlib.h>

int main() {
	//Klavyeden girilen sayıya kadar kaç adet asal sayı olduğunu bulan ve bulduğu asal sayıları ekrana yazdıran programı yazınız
	
	int i, j, a, kontrol, asalsayi = 0, toplam = 0;
	printf("Son sinir olacak sayiyi giriniz : ");
	scanf("%d", &a);

	for(i = 2; i < a; i++)
	{
		kontrol = 1;
		for(j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				kontrol = 0;
				asalsayi++;
				break;
			}
		}
		if(kontrol == 1)
		{
			printf("%d\n", i);
			toplam += i;
		}
	}
	printf("--------------------------------\n");
	printf("%d tane asal sayi vardir.\n", asalsayi);
	printf("asal sayilarin toplami = %d", toplam);
	return 0;
}
