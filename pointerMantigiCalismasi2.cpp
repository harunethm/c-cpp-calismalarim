#include <stdio.h>

int main(){

int a=10;

int *p;

p=&a;

printf("%dn\n",*p); // p�nin g�sterdi�i yeri basar -- 10

printf("%dn\n",p); // p�nin de�erini yani, p�nin g�sterdi�i yerin adresini basar -- 6487628

printf("%dn\n",a); // a�n�n de�erini basar -- 10

printf("%dn\n",&a); //a�n�n adresini basar -- 6487628

printf("%dn\n",&p); //p�nin adresini basar -- 6487616

}
