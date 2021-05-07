#include <stdio.h>

void uzunlukBul(int sayi) {
	int sayac = 0;
	for (int  i = 0; i < 10; i++)
	{
		sayi = sayi / 10;
	}
}


int main() {
	int sayi;

	printf("3 basamakli bir sayi giriniz : ");
	scanf("%d", &sayi);
	
	int birler, onlar, yuzler;

	birler = sayi % 10;
	sayi = sayi / 10;
	onlar = sayi % 10;
	sayi = sayi / 10;
	yuzler = sayi % 10;

	printf("%d * 100, %d * 10, %d * 1", yuzler, onlar, birler);
}
