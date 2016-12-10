#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

clock_t inicio, fin;
inicio = clock();
int ints = 536870912;
int *arreglo = (int*)malloc(sizeof(int)*ints);
int i,random;

for (i = 0; i < ints; i++)
{
	random = rand()%(ints+1);
	arreglo[i] = random;
}
fin = clock();
	printf("Tiempo transcurrido: %f", (fin-inicio)/(double)CLOCKS_PER_SEC);

	return 0;
} 
