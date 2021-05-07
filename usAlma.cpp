#include <stdio.h>
#include <math.h>

int usAlma(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a * usAlma(a, b - 1);
}

int main() {
	int a = 1, b = 1, c = 0;
	printf("taban : ");
	scanf("%d", &a);

	printf("\ntaban : ");
	scanf("%d", &b);

	c = usAlma(a,b);
	printf("\nsonuc : %d", c);
}
