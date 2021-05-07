#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{

	int s1, s2;
	char kontrol;
	do
	{
		printf("toplamak isediginiz sayilari giriniz : ");
		scanf("%d %d", &s1, &s2);
		printf("%d\n", (s1 + s2));
		printf("devam etmek istiyor musunuz : ");
		kontrol = getche();
		printf("\n");
	} while (kontrol == 'e' || kontrol == 'E');
	
	return 1;
}
