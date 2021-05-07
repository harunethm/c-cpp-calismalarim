#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
/*	typedef int say;
	say a;
	a = 5.7;
	printf("%f", a);
*/

	typedef struct
	{
		char dizi1[52];
		char dizi2[52];
		int a;
		int b;
	}degisken;
	
degisken h1, h2, h3;

/*	struct
	{
		char dizi1[52];
		char dizi2[52];
		int a;
		int b;
	}h1, h2, h3;
	
*/
	
	strcpy(h1.dizi1, "harun ethem" );
	strcpy(h1.dizi2,"calis");
	h1.a = 2000;
	h1.b = 18;
	
	strcpy(h2.dizi1, "suleyman mert");
	strcpy(h2.dizi2, "engur");
	h2.a = 2001;
	h2.b = 17;
	
	strcpy(h3.dizi1, "ali");
	strcpy(h3.dizi2, "seker");
	h3.a = 1999;
	h3.b = 19;
	
	printf("%s %s = %d / %d\n", h1.dizi1, h1.dizi2, h1.a, h1.b);
	printf("%s %s = %d / %d\n", h2.dizi1, h2.dizi2, h2.a, h2.b);	
	printf("%s %s = %d / %d", h3.dizi1, h3.dizi2, h3.a, h3.b);	



	return 1;
}
