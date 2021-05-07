#include <stdlib.h>
#include <stdio.h>

int main()
{
	char ders1[52], ders2[52], ders3[52], ders4[52], ders5[52], ders6[52], ders7[52], ders8[52];
	float vize1, vize2, vize3, vize4, vize5, vize6, vize7, vize8;
	float final1, final2, final3, final4, final5, final6, final7, final8;
	float gecme1, gecme2, gecme3, gecme4, gecme5, gecme6, gecme7, gecme8;

	printf("1. dersin adini giriniz : ");
	gets_s(ders1);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize1, &final1);
	vize1 = vize1 * 0.4;
	final1 = final1 * 0.6;
	gecme1 = vize1 + final1;
	
	printf("2. dersin adini giriniz : ");
	getchar();
	gets_s(ders2);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize2, &final2);
	vize2 = vize2 * 0.4;
	final2 = final2 * 0.6;
	gecme2 = vize2 + final2;

	printf("3. dersin adini giriniz : ");
	getchar();
	gets_s(ders3);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize3, &final3);
	vize3 = vize3 * 0.4;
	final3 = final3 * 0.6;
	gecme3 = vize3 + final3;

	printf("4. dersin adini giriniz : ");
	getchar();
	gets_s(ders4);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize4, &final4);
	vize4 = vize4 * 0.4;
	final4 = final4 * 0.6;
	gecme4 = vize4 + final4;

	printf("5. dersin adini giriniz : ");
	getchar();
	gets_s(ders5);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize5, &final5);
	vize5 = vize5 * 0.4;
	final5 = final5 * 0.6;
	gecme5 = vize5+ final5;

	printf("6. dersin adini giriniz : ");
	getchar();
	gets_s(ders6);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize6, &final6);
	vize6 = vize6 * 0.4;
	final6 = final6 * 0.6;
	gecme6 = vize6 + final6;

	printf("7. dersin adini giriniz : ");
	getchar();
	gets_s(ders7);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize7, &final7);
	vize7 = vize7 * 0.4;
	final7 = final1 * 0.6;
	gecme7 = vize7 + final7;

	printf("8. dersin adini giriniz : ");
	getchar();
	gets_s(ders8);
	printf("Bu ders icin vize ve final notlarini giriniz : ");
	scanf_s("%f %f", &vize8, &final8);
	vize8 = vize8 * 0.4;
	final8 = final8* 0.6;
	gecme8 = vize8 + final8;
	
	
	
	printf("%s dersinin gecme notu %.2f\n", ders1, gecme1);
	printf("%s dersinin gecme notu %.2f\n", ders2, gecme2);
	printf("%s dersinin gecme notu %.2f\n", ders3, gecme3);
	printf("%s dersinin gecme notu %.2f\n", ders4, gecme4);
	printf("%s dersinin gecme notu %.2f\n", ders5, gecme5);
	printf("%s dersinin gecme notu %.2f\n", ders6, gecme6);
	printf("%s dersinin gecme notu %.2f\n", ders7, gecme7);
	printf("%s dersinin gecme notu %.2f", ders8, gecme8);


	printf("\n");
	system("pause");
	return 0;
}