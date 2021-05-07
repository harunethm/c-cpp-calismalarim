#include <stdio.h>

int diziBoyutu = 0;

void sirala(int dizi[]) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (dizi[j] == 0)
				continue;
			if (dizi[j] < dizi[i])
			{
				int a = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = a;
			}
		}
	}
}

void ekle(int dizi[], int eklenecek) {
	int sayac = 0;
	for (int i = 0; i < 5; i++) {
		if (eklenecek < dizi[i])
			sayac++;
	}

	for (int i = 5; i > sayac; i--) {
		dizi[i] = dizi[i - 1];
	}
	dizi[sayac] = eklenecek;
	diziBoyutu += 1;
}

int main() {
	int dizi[5] = { 5,2,4,1 };
	diziBoyutu = 4;
	for (int i = 0; i < diziBoyutu; i++)
		printf("%d", dizi[i]);
	printf("\n");
	sirala(dizi);
	for (int i = 0; i < diziBoyutu; i++)
		printf("%d", dizi[i]);
	printf("\n");
	ekle(dizi, 3);
	for (int i = 0; i < diziBoyutu; i++)
		printf("%d", dizi[i]);
	printf("\n");

}
