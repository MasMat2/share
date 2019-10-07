/*Dado dos arreglos de n elementos numéricos. Crear un programa en C, el cual del
arreglo uno se tomarán en cuenta los elementos que sean múltiplos de tres y los
mandará a un tercer arreglo y los almacenará en forma invertida, del segundo arreglo
tomará los elementos que sean impares y los almacenará en el tercer arreglo en forma
invertida. Se imprimirá los dos arreglos de entrada y el tercer arreglo. Por ejemplo:
A: {7 6 9 5 12 8}          B: {2 7 6 11 8 5}          C: {5 11 7 12 9 6}*/
#include<stdio.h>
#include<stdlib.h>
int na,nb,i,j,A[' '],B[' '],C[' '],cont=0;
int main(){
	do{
		system("cls");
		printf("Introduzca el numero de elementos para el Arreglo A\n");
	    scanf("%d",&na);
	    printf("Introduzca el numero de elementos para el Arreglo B\n");
	    scanf("%d",&nb);
	}while(na<=0 || nb<=0);
	for(i=0;i<na;i++){
		printf("\nA[%d]: ",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<nb;i++){
		printf("\nB[%d]: ",i);
		scanf("%d",&B[i]);
	}
	j=0;
	for(i=nb;i>=0;i--){
		if(B[i]%2!=0){
			C[j]=B[i];
			j++;
		}
	}
	for(i=na-1;i>=0;i--){
		if(A[i]%3==0){
			C[j]=A[i];
			j++;
		}
	}
	printf("\nArreglo A: \n");
	for(i=0;i<na;i++)
		printf("%d  ",A[i]);
	printf("\nArreglo B: \n");
	for(i=0;i<nb;i++)
		printf("%d  ",B[i]);
	printf("\nArreglo C: \n");
	for(i=0;i<j;i++)
		printf("%d  ",C[i]);
	return 0;
}
