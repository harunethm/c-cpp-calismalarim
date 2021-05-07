#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	node* solVeri;
	int veri;
	node* sagVeri;
};
node* root = (node*)(malloc(sizeof(node)));

int toplam = 0;
int toplamBul(node* dugum) {
	//e�er d���m�n sa��nda veya solunda veri varsa o d���m� kontrol eder, kontrol
	//etti�i d���m�n sa�� solu bo�sa de�erini toplama ekler, bo� de�ilse bo� olmayan
	//d���mden kontrol etmeye devam eder
	if (dugum->sagVeri != NULL) {
		return toplamBul(dugum->sagVeri);
	}
	if (dugum->solVeri != NULL) {
		return toplamBul(dugum->solVeri);
	}
	if (dugum->sagVeri == NULL && dugum->solVeri == NULL) {
		return toplam + dugum->veri;
	}
}

int main() {
	//root dizinine veri eklemesi yap�l�r uzun diye yapm�yorum

	int yaprakToplami = toplamBul(root);
	printf("%d", yaprakToplami);
}
