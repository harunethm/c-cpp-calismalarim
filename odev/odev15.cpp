#include <stdio.h>
#include <stdlib.h>

int nufusartisi(float nufus)
{

	for (int yil = 2000; yil < 2011; yil++)
	{
		printf("%d yilindaki nufus %.2f milyon\n", yil, nufus);
		nufus = nufus + nufus * 0.025;
	}
	return 0;
}

int main()
{
	nufusartisi(70);
	return 1;
}
