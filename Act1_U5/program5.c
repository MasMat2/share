/*Desarrollar un programa en C, el cual Calcule el promedio de n valores almacenados en un vector. Determinar además cuantos son mayores que el promedio, imprimir 
el promedio, el número de datos mayores que el promedio y una lista de valores mayores que el promedio, así como el vector original.*/
#include<stdio.h>
#include<stdlib.h>
int i, j, n, m, A [' '],  B[' '], C[' '], cont=0, cont2=0, suma=0;
float prom;
int main ()
{
		do
	  { 
	  	printf("\n Ingrese el numero total de elementos numericos: ");
	  	scanf("%d", &n);
	  }while(n<=0);
	
	//Rutina para realizar la lectura
	printf("\n\n\t\t Entrada de datos \n\n");
	for(i=0; i<n; i++)
	{
	  	printf("\n A[%d]: ", i+1);
	  	scanf("%d", &A[i]);
	  	suma=suma+A[i];
	}
	
	prom=suma/n;
	
	for(i=0; i<n; i++)
	  if(A[i]>prom)
	  {
	  	B[j]=A[i];
	  	cont++;
	  }
	
	printf("\n\n\t\t Reporte de salida: \n");
	
	printf("El promedio de los numeros es: %.2f\n", prom);

	printf("Numero de datos mayores que el promedio: %d\n", cont);
	  
	printf("Datos mayores que el promedio:\n ");
	for(i=0; i<cont; i++)
	  printf("    %d    ", B[j]);
	  
	printf("\nArreglo original: \n");
	for(i=0; i<n; i++)
	  printf("    %d    ", A[i]);
	  
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
}
   
