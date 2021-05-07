#include <stdio.h>

int sayi1, sayi2, sonuc1, sonuc2;

int ekok(int sayi1, int sayi2)
{
 	int kucukSayi;
    int i, sonuc1 = 1;
    
 	if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;
 
    for (i = 2; i <= kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0)
            sonuc1 = i;
 }
 return sonuc1;
}
 
 int ebob(int sayi1, int sayi2)
 {
	int buyukSayi;
    int i = 2, sonuc2 = 1;
    int gecici1, gecici2, kontrol;
 	
 	
	if (sayi1 > sayi2)
        buyukSayi = sayi1;
    else
        buyukSayi = sayi2;
 
 
    gecici1 = sayi1;
    gecici2 = sayi2;
 
    while (i <= buyukSayi)
	{
        kontrol = 0;
        if (gecici1 % i == 0)
		{
            gecici1 /= i;
            kontrol++;
        }
        if (gecici2 % i == 0)
		{
            gecici2 /= i;
            kontrol++;
        }
        if (kontrol != 0)
            sonuc2 *= i;
 
        if (gecici1 % i != 0 && gecici2 % i != 0)
            i++;
    }
    return sonuc2;
 }
 
 
 
int main()
{	
	printf("iki sayi giriniz : ");
	scanf("%d %d", &sayi1, &sayi2);
	sonuc1 = ekok(sayi1, sayi2);
	sonuc2 = ebob(sayi1, sayi2);
	printf("ebob(%d,%d)=%d\n", sayi1, sayi2, sonuc1);
	printf("ekok(%d,%d)=%d\n", sayi1, sayi2, sonuc2);
		 
    return 0;
}
