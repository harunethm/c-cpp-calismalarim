#include <stdio.h>
#include <time.h>

int pascal(int a, int b) {
	if (a == 0 || a == b || b == 0)
		return 1;
	else {
		return pascal(a - 1, b) + pascal(a - 1, b - 1);
	}
}

int main() {
	float baslangic = clock();
	int c, d;
	printf("kacinci satir olsun :");
	scanf("%d", &c);
	printf("kacinci sutun olsun :");
	scanf("%d", &d);

	int sonuc = pascal(c-1, d-1);
	printf("%d. satir, %d. sutundaki sayi : %d\n", c, d, sonuc);

	float bitis = clock();
	float fark = (bitis - baslangic)/ CLOCKS_PER_SEC;
	printf("erisim suresi (sn) : %.2f", fark);
}
