#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char dizi[100], ayni[50];

	scanf("%s", dizi);
	int uzunluk = 0, lenght = 0;
	uzunluk = strlen(dizi);

	int i = 0, y = 0;

	for (int i = 0; i < 50; i++)
		ayni[i] = 0;

	while (i <= uzunluk)
	{
		int a = dizi[i], b = dizi[i + 1];
		if (dizi[i] == NULL)
			break;
		if (a == b)
		{
			ayni[y] = dizi[i];
			i++;
			y++;
			ayni[y] = dizi[i];
		}
		else
		{
			lenght = strlen(ayni);
			if (lenght == 0)
			{
				ayni[0] = dizi[i];
				lenght++;
			}
			printf("-%d%c", lenght, ayni[0]);
			for (int i = 0; i < lenght; i++)
				ayni[i] = 0;
			i++;
			y = 0;
		}
	}
	printf("\n");
	return 0;
}
