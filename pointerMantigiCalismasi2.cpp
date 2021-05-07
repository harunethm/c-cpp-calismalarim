#include <stdio.h>

int main(){

int a=10;

int *p;

p=&a;

printf("%dn\n",*p); // p’nin gösterdiði yeri basar -- 10

printf("%dn\n",p); // p’nin deðerini yani, p’nin gösterdiði yerin adresini basar -- 6487628

printf("%dn\n",a); // a’nýn deðerini basar -- 10

printf("%dn\n",&a); //a’nýn adresini basar -- 6487628

printf("%dn\n",&p); //p’nin adresini basar -- 6487616

}
