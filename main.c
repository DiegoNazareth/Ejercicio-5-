//Ejercicio 5 Final Funciones
//5. Realice un programa en C que mediante una funcion calcule e imprima el producto escalar de dos vectores de igual tamaño. 
//El producto escalar esta dado por: (a1, a2, a3, ... , aN)*(b1,b2,b3, ... , bN) = a1*b1 + a2*b2 + a3*b3 + ... aNbN
#include<stdio.h>
#include<stdlib.h>
int n;
void producto(int vector[], int vector1[]);
void llenar(int vector[]);
void llenar1(int vector1[]);
int main(){
	printf("Dame el tamaño de ambos vectores\n");
	scanf("%d", &n);
	int vector[n], vector1[n];
	
	llenar(vector);
	
	llenar1(vector1);
	producto(vector, vector1);
	return 0;
}
void llenar(int vector[]){
	int i;
	printf("Dame los valores para llenar el primer vector\n");
	for(i=0;i<n;i++){
		scanf("%d", &vector[i]);
	}
}
void llenar1(int vector1[]){
	int i;
	printf("Dame los valores para llenar el segundo vector\n");
	for(i=0;i<n;i++){
		scanf("%d", &vector1[i]);
	}
}
void producto(int vector[], int vector1[]){
	int i, vector2[n], suma;
	suma=0;
	for(i=0;i<n;i++){
		vector2[i]=vector[i]*vector1[i];
	}
	for(i=0;i<n;i++){
		printf("%d ", vector2[i]);
		suma=suma+vector2[i];
	}
	printf("\nProducto escalar de ambos vectores %d ", suma );
	
}
