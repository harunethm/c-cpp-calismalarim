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
	//eðer düðümün saðýnda veya solunda veri varsa o düðümü kontrol eder, kontrol
	//ettiði düðümün saðý solu boþsa deðerini toplama ekler, boþ deðilse boþ olmayan
	//düðümden kontrol etmeye devam eder
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
	//root dizinine veri eklemesi yapýlýr uzun diye yapmýyorum

	int yaprakToplami = toplamBul(root);
	printf("%d", yaprakToplami);
}
