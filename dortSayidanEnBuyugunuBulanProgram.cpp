#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int max_of_four(int a, int b, int c, int d)
{
	int dizi[] = { a,b,c,d };
	int buyuk = dizi[0];
	for (int i = 0; i < 5; i++)
	{
		if (dizi[i] > buyuk)
			buyuk = dizi[i];
	}
	return buyuk;
}

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	system("pasue");
	return 0;
}
