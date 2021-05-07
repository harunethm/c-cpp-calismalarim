#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int dizi[3][4] = { {1,2,3,4} ,
{5,6,7,8} ,
{9,10,11,12} };

void yaz() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d-", dizi[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int a;
	int* b = &dizi[0][0];
	int* ptr;

	printf("indis : ");
	scanf("%d", &a);
	a--;
	ptr = b + a;

	yaz();
	printf("\n");

	for (int i = a ; i < 11 ; i++) {
		*ptr = *(ptr + 1);
		ptr ++;
	}
	if(a!=11)
		dizi[2][3] = 0;

	yaz();

	return 0;
}
