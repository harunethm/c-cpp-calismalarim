#include <stdio.h>

int main() {
	char metin[100];
	char aranan[10];
	char arananTemp[10];
	int arananUzunlugu = 0;	
	int baslangic = 100;
	
	gets(metin);
	gets(aranan);
	
	for(int i = 0; i < 10; i++){
		if(aranan[i] == 0){
			arananUzunlugu = i;
		}
	}
	
	
	for(int i = 0; i < 100; i++){
		//arananın ilk harfi metinde bi yerde var mı
		if(metin[i] == aranan[0]){
			baslangic = i;
			//aranan kelime metnin içinde ilk harfini bulduğumuz indekste mi başlıyo
			for(int j = 0; j < arananUzunlugu; j++){
				if(metin[i+j] == aranan[j]){
					arananTemp[j] = aranan[j];
				}
			}
			//arananTemp ile aranan eşit mi
			bool bulundu = true;
			for(int j = 0; j < arananUzunlugu; j++){
				for(int k = 0; k < arananUzunlugu; k++)
				{
					if(arananTemp[j] != aranan[k]){
						//eşit değilse aynı kelime değil demektir sıfırlanması gerekir
						for(int l = 0; l < arananUzunlugu;l++){
							arananTemp[l] = 0;
							bulundu = false;
						}
						baslangic = 100;
					}
				}
			}
			if(bulundu)
				break;
		}
	}
	
	for(int i = 0; i < arananUzunlugu; i++){
		printf("%c", arananTemp[i]);
	}
	
	
	return 0;
}
