#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void Ordenar(int vectorOrdenado[10000]);
void Generar(int vectorDesordenado[10000],int vectorOrdenado[10000]);
void imprimir(int vectorDesordenado[10000]);
void imprimeOrdenado(int Vector[10000],int ord);
int main(){
	int op, vectorDesordenado[10000],vectorOrdenado[10000],ord=0;
	do{
		system("cls");
		printf("1) Genera los 10000 numeros aleatorios\n");
		printf("2) Imprime los 10000 numeros aleatorios\n");
		printf("3) Ordena los 10000 numeros\n");
		printf("4) Imprime los 10000 numeros ya ordenados\n");
		printf("Presiona 5 para salir\n");
		scanf("%d",&op);
		switch(op){
			case 1: Generar(vectorDesordenado,vectorOrdenado); break;
			case 2: imprimir(vectorDesordenado); break;
			case 3: Ordenar(vectorOrdenado);ord=1;break;
			case 4: imprimeOrdenado(vectorOrdenado,ord);
		}
	}while(op!=5);
	system ("pause");
	return 0;
}

void Generar(int vectorDesordenado[10000],int vectorOrdenado[10000])
{
	int i;
	system("cls");
	for(i=0;i<10000;i++){
		vectorDesordenado[i]=rand()%10000;
		vectorOrdenado[i]=vectorDesordenado[i];
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
void Ordenar(int VectorOrdenado[10000]){
	system("cls");
	int N=10000, paso, j, AUX;
	int bandera=1;
	for(paso=0;paso<N-1&&bandera==1;paso++)
	  {
		bandera=0;
		for(j=0;j<N-paso-1;j++)
		  {
			if(VectorOrdenado[j]<VectorOrdenado[j+1])
			  {
				bandera=1;
				AUX=VectorOrdenado[j];
				VectorOrdenado[j]=VectorOrdenado[j+1];
				VectorOrdenado[j+1]=AUX;
			  }
		  }
	  }
	printf("Vector Ordenado\n");
	system("pause");
}

void imprimeOrdenado(int Vector[10000],int ord){
	int i;
	system("cls");
	if(ord==0){
		printf("Vector no ha sido ordenado\n");
	}
	else{
		for(i=0;i<10000;i++){
			printf("%d\n",Vector[i]);
		}
	}
	system("pause");
}
