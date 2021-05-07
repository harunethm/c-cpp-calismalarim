#include <stdio.h>
#include <stdlib.h>

struct node {
	node* once;
	int veri;
	node* sonra;
};
node* root = (node*)malloc(sizeof(node));

void addNode(node* dugum, int ekle) {
	while (dugum->sonra != NULL) {
		dugum = dugum->sonra;
	}
	dugum->sonra = (node*)malloc(sizeof(node));
	dugum->sonra->veri = ekle;
	dugum->sonra->once = dugum;
	dugum->sonra->sonra = NULL;
}

void eraseNode(node* dugum, int sil) {
	while (dugum->veri != sil && dugum->sonra != NULL) {
		dugum = dugum->sonra;
	}
	if (dugum->sonra == NULL) {
		dugum->once->sonra = NULL;
		free(dugum);
	}
	else {
		while (dugum->sonra->sonra != NULL) {
			dugum->veri = dugum->sonra->veri;
			dugum = dugum->sonra;
		}dugum->veri = dugum->sonra->veri;
		free(dugum->sonra->sonra);
		dugum->sonra = NULL;
	}
}

void printNode(node* dugum) {
	while (dugum->sonra != NULL)
	{
		printf("%d\n", dugum->veri);
		dugum = dugum->sonra;
	}printf("%d\n", dugum->veri);
}

void ucOnceBul(node* dugum) {
	while (dugum->sonra->sonra->sonra != NULL) {
		dugum = dugum->sonra;
	}
	printf("-uc nextli-%d\n", dugum->veri);

}
void ikiOnceBul(node* dugum) {
	while (dugum->sonra->sonra != NULL) {
		dugum = dugum->sonra;
	}
	printf("-iki nextli-%d\n", dugum->veri);

}

int main() {
	root->veri = 0;
	root->once = NULL;
	root->sonra = NULL;

	addNode(root, 1);
	addNode(root, 2);
	addNode(root, 3);
	addNode(root, 4);
	addNode(root, 5);
	addNode(root, 6);
	eraseNode(root, 4);
	printNode(root);
	ucOnceBul(root);
	ikiOnceBul(root);
	eraseNode(root, 6);
	printNode(root);

}
