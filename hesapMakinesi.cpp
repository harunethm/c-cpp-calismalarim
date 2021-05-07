#include <stdio.h>
#include <stdlib.h>

int main() {
	char islem[15];
	char sayilar[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int i, j, s1 = 0, s2 = 0, is;

	printf("islemi giriniz : ");
	scanf("%s", &islem);

	for (i = 0, j = 0; islem[i] == sayilar[j]; j++) {
		s1 += islem[i];
		if (islem[i] != sayilar[j]) {
			is == islem[i];
			break;
		}
	}
	for (i, j = 0; islem[i] == sayilar[j]; j++) {
		s2 += islem[i];
		if (islem[i] != sayilar[j])
			break;
	}

	return 0;
}
