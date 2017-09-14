#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void Ordenar(int vectorDesordenado[10000],int vectorOrdenado[10000]);
int main(){
	int vectorDesordenado[10000],vectorOrdenado[10000];
	do{
		printf("1) Genera los 10000 numeros aleatorios\n");
		printf("2) Imprime los 10000 numeros aleatorios\n");
		printf("3) Ordena los 10000 numeros\n");
		printf("4) Imprime los 10000 numeros ya ordenados\n");
		printf("Presiona ESC para salir\n");
	}while(op!=27);
	system ("pause");
	return 0;
}
