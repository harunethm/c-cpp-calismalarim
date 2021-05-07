#include <stdio.h>
#include <stdlib.h>


typedef struct node {
	int data;
	node* next;
};

void sonaEkle(node* r, int a);
void yazdir(node* r);

int main() {
	node* root = (node*)malloc(sizeof(node));
	root->data = 3;
	root->next = (node*)malloc(sizeof(node));
	root->next->data = 2;
	root->next->next = NULL;
	sonaEkle(root, 5);
	yazdir(root);

}

void sonaEkle(node* r, int a) {
	while (r->next != NULL) {
		r = r->next;
	}
	for (int i = 0; i <= a; i++) {
		r->next = (node*)malloc(sizeof(node));
		r = r->next;
		r->data = i * 10;
		r->next = NULL;
	}
}

void yazdir(node* r) {
	while (r->next != NULL) {
		printf("%d\n", r->data);
		r = r->next;
	}
	printf("%d\n", r->data);
}