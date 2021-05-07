#include <stdio.h>

int pascal(int a, int b) {
	if (a == 0 || a == b || b == 0)
		return 1;
	else {
		return pascal(a - 1, b) + pascal(a - 1, b - 1);
	}
}

int main() {
	int c;
	printf("Pascal üçgeni kaça kadar saysin : ");
	scanf_s("%d", &c);
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", pascal(i, j));
		}
		printf("\n");
	}
}