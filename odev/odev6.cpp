#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

char bosluk(int b)
{
	for (int a = 1; a <= (b); a++)
	{
		printf(" ");
	}
	return 0;
}

int main()
{
	char isim[60], b;
	printf("isim giriniz : ");
	gets_s(isim);
	b = printf("yazdirilan isim : %s", isim);
	b = b - 18;
	printf("\n");
	
	/*
	printf("%d\n", b);
	printf("%s\n", isim);
	printf(".", bosluk(b));
	*/

	printf("%c%c%s\n", bosluk(b), bosluk(b), isim);
	printf("%c%s\n", bosluk(b), isim);
	printf("%s%c\n", isim, bosluk(b));
	printf("%c%s\n", bosluk(b), isim);
	printf("%c%c%s\n", bosluk(b), bosluk(b), isim);


	printf("\n");
	system("pause");
	return 1;
}