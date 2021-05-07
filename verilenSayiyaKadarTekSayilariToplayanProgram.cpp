#include <stdio.h>
#include <stdlib.h>

int a, top = 0;

int toplama(int a) {
	if (a == 2)
		return 2;
	else 
		return a + toplama(a - 2);
}


int main() {
	geri:
	printf("1 den buyuk bir sayiyi giriniz : ");
	scanf("%d", &a);
	if (a % 2 != 0)
		a -= 1;
	if (a <= 2)
		goto geri;
	top = toplama(a);
	printf("%d", top);
 }
