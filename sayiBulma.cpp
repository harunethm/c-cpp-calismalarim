#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#pragma warning(disable:4996)

int main()
{
	srand(time(NULL));
	int random = rand() % 100 + 1;
	int kullanici, flag = 0;
while(flag == 0){

	printf("tahminin : ");
	scanf("%d", &kullanici);
	if (kullanici > random)
		printf("daha kucuk\n");
	else if (kullanici < random)
		printf("daha buyuk\n");
	else if (kullanici == random){
		printf("buldun efferim sana");
		flag = 1;
	}

}
	printf("\n");
	system("pause");
	return 0;
}
