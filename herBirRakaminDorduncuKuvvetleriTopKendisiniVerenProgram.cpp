#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//1000' den 9999 a kadar olan say�lardan her bir rakam�n d�rd�nc� kuvvetlerinin toplam� kendisi olan say�lar� bulan C program�n� yaz�n�z 

int bin, yuz, on, bir, sonuc, a, i;
	
	printf("sayilar : ||\n");
	printf("          \\/\n");
	
	for(int i = 1000; i < 10000; i++)
	{
		a = i;
		bir = i % 10;
		i = i / 10;
		on = i % 10;
		i = i / 10;
		yuz = i % 10;
		i = i / 10;
		bin = i % 10;
		i = i / 10;
		i = a;
				
		//printf("%d, %d, %d, %d\n", bir, on, yuz, bin);
		
		sonuc = pow(bir,4)+pow(on,4)+pow(yuz,4)+pow(bin,4);
		
		if(i == sonuc)
		printf("	 %d\n", i);		
	}
	return 0;
}
