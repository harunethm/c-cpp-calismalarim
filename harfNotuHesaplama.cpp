#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Merhaba! Derslerden gecme durumunuzu kontrol edebilmek icin asagida istenen bilgileri lutfen eksiksiz ve dogru giriniz.\n");
	
	char d1,d2,d3,d4,d5,d6,d7,d8;
	int v1,v2,v3,v4,v5,v6,v7,v8;
	int f1,f2,f3,f4,f5,f6,f7,f8;
	float o1,o2,o3,o4,o5,o6,o7,o8;
	
		printf("1. dersin adini giriniz : ");
		scanf("%s",&d1);
		
		printf("1. dersin vize notunu giriniz : ");
		scanf("%d",&v1);
		
		printf("1. dersin final notunu giriniz : ");
		scanf("%d",&f1);
		
		
		
		
		printf("2. dersin adini giriniz : ");
		scanf("%s",&d2);
		
		printf("2. dersin vize notunu giriniz : ");
		scanf("%d",&v2);
		
		printf("2. dersin final notunu giriniz : ");
		scanf("%d",&f2);
	
	
	
	
	
	
	
		printf("3. dersin adini giriniz : ");
		scanf("%s",&d3);
		
		printf("3. dersin vize notunu giriniz : ");
		scanf("%d",&v3);
		
		printf("3. dersin final notunu giriniz : ");
		scanf("%d",&f3);
	
	
	
	
	
	
	
	
		printf("4. dersin adini giriniz : ");
		scanf("%s",&d4);
		
		printf("4. dersin vize notunu giriniz : ");
		scanf("%d",&v4);
		
		printf("4. dersin final notunu giriniz : ");
		scanf("%d",&f4);
		
		
		
		
		
	    printf("5. dersin adini giriniz : ");
		scanf("%s",&d5);
		
		printf("5. dersin vize notunu giriniz : ");
		scanf("%d",&v5);
		
		printf("5. dersin final notunu giriniz : ");
		scanf("%d",&f5);
		
		
		
		
		
		
		printf("6. dersin adini giriniz : ");
		scanf("%s",&d6);
		
		printf("6. dersin vize notunu giriniz : ");
		scanf("%d",&v6);
		
		printf("6. dersin final notunu giriniz : ");
		scanf("%d",&f6);
	
	
	
	
	
	
	
		printf("7. dersin adini giriniz : ");
		scanf("%s",&d7);
		
		printf("7. dersin vize notunu giriniz : ");
		scanf("%d",&v7);
		
		printf("7. dersin final notunu giriniz : ");
		scanf("%d",&f7);
		
		
		
		
		
		
		
	    printf("8. dersin adini giriniz : ");
		scanf("%s",&d8);
		
		printf("8. dersin vize notunu giriniz : ");
		scanf("%d",&v8);
		
		printf("8. dersin final notunu giriniz : ");
		scanf("%d\n\n\n",&f8);
		
		
		
		o1=(0.4*v1)+(0.6*f1);
		o2=(0.4*v2)+(0.6*f2);
		o3=(0.4*v3)+(0.6*f3);
		o4=(0.4*v4)+(0.6*f4);
		o5=(0.4*v5)+(0.6*f5);
		o6=(0.4*v6)+(0.6*f6);
		o7=(0.4*v7)+(0.6*f7);
		o8=(0.4*v8)+(0.6*f7);
	
		printf("DERSLERÝNÝZÝN NOT ORTALAMALARI\n");
		
		printf("1.dersin not ortalamasý=   %s : %.2f",d1,o1);
		printf("2.dersin not ortalamasý=   %s : %.2f",d2,o2);
		printf("3.dersin not ortalamasý=   %s : %.2f",d3,o3);
		printf("4.dersin not ortalamasý=   %s : %.2f",d4,o4);
		printf("5.dersin not ortalamasý=   %s : %.2f",d5,o5);
		printf("6.dersin not ortalamasý=   %s : %.2f",d6,o6);
		printf("7.dersin not ortalamasý=   %s : %.2f",d7,o7);
		printf("8.dersin not ortalamasý=   %s : %.2f",d8,o8);
	
	
	
	
	
	
}
