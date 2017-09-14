#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void Ordenar(int vectorDesordenado[10000],int vectorOrdenado[10000]);
void Generar(int vectorDesordenado[10000]);
void imprimir(int vectorDesordenado[10000]);
int main(){
	int op, vectorDesordenado[10000],vectorOrdenado[10000];
	do{
		system("cls");
		printf("1) Genera los 10000 numeros aleatorios\n");
		printf("2) Imprime los 10000 numeros aleatorios\n");
		printf("3) Ordena los 10000 numeros\n");
		printf("4) Imprime los 10000 numeros ya ordenados\n");
		printf("Presiona ESC para salir\n");
		scanf("%d",&op);
		switch(op){
			case 1: Generar(vectorDesordenado); break;
			case 2: imprimir(vectorDesordenado); break;
		}
	}while(op!=27);
	system ("pause");
	return 0;
}

void Generar(int vectorDesordenado[10000])
{
	int i;
	system("cls");
	for(i=0;i<10000;i++){
		vectorDesordenado[i]=rand()%10000;
	}
	printf("Vector generado\n");
	system("pause");
}
void imprimir(int vectorDesordenado[10000])
{
	int i;
	system("cls");
	for( i=0;i<10000;i++){
		printf("%d\n",vectorDesordenado[i]);
	}
	printf("Vector Impreso\n");
	system("pause");
}

