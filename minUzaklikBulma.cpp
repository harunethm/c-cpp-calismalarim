#include <stdio.h>

int dizi[5];

int minUzaklik() {
	int _minUzaklik = dizi[0] - dizi[1];
	_minUzaklik = _minUzaklik < 0 ? _minUzaklik * (-1) : _minUzaklik;
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			int mesafe = dizi[i] - dizi[j] < 0 ? -(dizi[i] - dizi[j]) : (dizi[i] - dizi[j]);
			if(mesafe < _minUzaklik){
				_minUzaklik = mesafe;
			}
		}
	}
	return _minUzaklik;
}

int main() {
	for (int i = 0; i < 5; i++)
	{
		printf("dizinin %d. elemani : ", i+1);
		scanf("%d", &dizi[i]); 
	}

	int _minUzaklik = minUzaklik();
	
	printf("%d", _minUzaklik);
}
