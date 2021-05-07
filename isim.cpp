#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bosluk(int b)
{
	for (int a = 1; a <= b; a++)
		printf(" ");
}

int main()
{
	char isim[60];
	int b;
	printf("isim giriniz : ");
	gets(isim);
	b = strlen(isim);
	bosluk(b);	bosluk(b);  printf("%s", isim);  bosluk(b);  printf("%s", isim);  bosluk(b);  bosluk(b); 
	printf("\n");

	bosluk(b);  printf("%s", isim);  bosluk(b);  bosluk(b);	 bosluk(b);  printf("%s", isim);  bosluk(b);
	printf("\n");

	printf("%s", isim);  bosluk(b);  bosluk(b);	 bosluk(b);  bosluk(b);	 bosluk(b);  printf("%s", isim);
	printf("\n");

	bosluk(b);  printf("%s", isim);  bosluk(b);	 bosluk(b);	 bosluk(b);  printf("%s", isim);  bosluk(b);
	printf("\n");

	bosluk(b);  bosluk(b);  printf("%s", isim);  bosluk(b);  printf("%s", isim);  bosluk(b);  bosluk(b);



	printf("\n");
	system("pause");
	return 1;
}
