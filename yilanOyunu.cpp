#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char yilan = 'O';
char yem = 'X';

//int rastgele = rand();
//int yilan_yatayUzunluk = 1;
//int yilan_dikeyUzunluk = 0;
int yilan_toplamUzunluk = 1;

int kafaKoordinati_xEkseni = 16;
int kafaKoordinati_yEkseni = 26;
int kuyrukKoordinati_xEkseni = 0;
int kuyrukKoordinati_yEkseni = 0;

int dizi[30][50];
//dizi[0][0] = 0 -> boþ
//dizi[0][0] = 1 -> yýlan
//dizi[0][0] = 2 -> yem

void loop() {
	int yilanUzunlugu = 1;
	system("cls");
	for (int i = 0; i < 30; i++)
	{
		printf("|");
		for (int j = 0; j < 50; j++)
		{
			if (dizi[i][j] == 1 && yilanUzunlugu <= yilan_toplamUzunluk) {
				printf("%c", yilan);
				yilanUzunlugu++;
			}
			//else if i,j == 1 ama yilan uzunlugu büyükse toplam uzunluk
			else if (dizi[i][j] == 1 && yilanUzunlugu > yilan_toplamUzunluk)
				dizi[i][j] = 0;
			else if (dizi[i][j] == 2)
				printf("%c", yem);
			else
				printf(" ");
		}
		printf("|\n");
	}
	Sleep(500);
}

int yatayKontrolEt(int kafa, int yem) {
	if (kafa > yem)
		/*sola dönmeli*/return -1;
	else if (kafa < yem)
		/*saða dönmeli*/return 1;
	else
		return 0;
}

int dikeyKontrolEt(int kafa, int yem) {
	if (kafa > yem)
		/*aþaðý inmeli*/return -1;
	else if (kafa < yem)
		/*yukarý çýkmalý*/return 1;
	else
		return 0;
}

void kuyrukBelirle() {
	int sayac = 0;
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			if(dizi[i][j] == dizi[i + 1][j + 1])
				sayac++;
			if (dizi[i][j] == dizi[i + 1][j])
				sayac++;
			if (dizi[i][j] == dizi[i][j + 1])
				sayac++;
			if (dizi[i][j] == dizi[i - 1][j - 1])
				sayac++;
			if (dizi[i][j] == dizi[i - 1][j])
				sayac++;
			if (dizi[i][j] == dizi[i][j - 1])
				sayac++;
			if (dizi[i][j] == dizi[i - 1][j + 1])
				sayac++;
			if (dizi[i][j] == dizi[i + 1][j - 1])
				sayac++;

			switch (sayac)
			{
			case 1:
				kuyrukKoordinati_xEkseni = i;
				kuyrukKoordinati_yEkseni = j;
				break;

			default:
				break;
			}
		}
	}
}

void yilaniHareketEttir(int yatayHareket, int dikeyHareket) {

	kafaKoordinati_xEkseni += yatayHareket;
	kafaKoordinati_yEkseni += dikeyHareket;
	if (dizi[kafaKoordinati_xEkseni][kafaKoordinati_yEkseni] == 2)
		yilan_toplamUzunluk++;
	dizi[kafaKoordinati_xEkseni][kafaKoordinati_yEkseni] = 1;


	/*
	if (yatayHareket == 1 || yatayHareket == -1)
		yilan_yatayUzunluk += 1;
	if (dikeyHareket == 1 || dikeyHareket == -1)
		yilan_dikeyUzunluk += 1;
	*/
	//yilan_toplamUzunluk = yilan_yatayUzunluk + yilan_dikeyUzunluk - 1; //-1 kesiþim noktasý için
	loop();
}

int main() {
	
	//baþlangýç için
	dizi[kafaKoordinati_xEkseni][kafaKoordinati_yEkseni] = 1;

	int yem_xEkseni = 1 + rand() % 30;
	int yem_yEkseni = 1 + rand() % 50;
	dizi[yem_xEkseni][yem_yEkseni] = 2;
	
	while (1) {
		int yatayHareket = yatayKontrolEt(kafaKoordinati_xEkseni, yem_xEkseni);
		int dikeyHareket = dikeyKontrolEt(kafaKoordinati_yEkseni, yem_yEkseni);
		
		yilaniHareketEttir(yatayHareket, dikeyHareket);

		if (dizi[yem_xEkseni][yem_yEkseni] != 2) {
			yem_xEkseni = 1 + rand() % 30;
			yem_yEkseni = 1 + rand() % 50;
			dizi[yem_xEkseni][yem_yEkseni] = 2;

			yilan_toplamUzunluk++;
			kuyrukBelirle();
			if (yilan_toplamUzunluk > 2)
				dizi[kuyrukKoordinati_xEkseni][kuyrukKoordinati_yEkseni] = 0;
		}
	}
}
