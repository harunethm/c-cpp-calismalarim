#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int a, salonno;
	printf("yasiniz:");
	scanf("%d", &a);

	if (a > 18)
	{
		printf("giris kabul edildi\n");
		printf("giris yapmak istediginiz salon numarasini giriniz(1,2,3):");
		scanf("%d", &salonno);
		switch (salonno)
		{
		case 1:
		{
			printf("%d numarali salona giris yaptiniz.\n", salonno);
		}
		break;
		case 2:
		{
			printf("%d numarali salona giris yaptiniz.\n", salonno);
		}
		break;
		case 3:
		{
			printf("%d numarali salona giris yaptiniz.\n", salonno);
		}
		break;
		default: 
		{
			printf("lutfen gecerli bir salon seciniz : "); 
		}
			break;
		}
	}
	else
	{
		printf("yasiniz cok kucuk\n");
	}
	system("pause");
	return 0;
}
