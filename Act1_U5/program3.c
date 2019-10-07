/* Desarrollar un programa en C, el cual lea un arreglo de n elementos numéricos. Se eliminaran todos aquellos elementos del arreglo que sean negativos. Se 
imprimirá el arreglo de entrada, el arreglo con los elementos que no fueron eliminados, y la suma de los elementos eliminados*/
#include<stdio.h>
#include<stdlib.h>
int i, j, n, A [' '], suma=0, cont=0,  B[' '], acum=0;
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
	}
 
	for(i=0;i<n;i++)
    {
    	if(A[i]>=0)
    	{
    		B[j]=A[i];
    		j++;
    		cont+=1;
        }
    	    
	}
	
	for(i=0;i<n;i++)
	  if(A[i]<0)
	    acum+=A[i];
	
	//Rutina para salida de datos
	printf("\n\n\t\t Reporte de salida: \n\nArreglo de entrada: \n");
	for(i=0; i<cont; i++)
	  printf("    %d    ", B[i]);
	  
	printf("\n\nArreglo con los elementos que no fueron eliminados: \n");
	for(i=0; i<n; i++)
	  printf("    %d    ", A[i]);
	  
	printf("\n\nSuma de los elementos eliminados: %d", acum);
	
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
	  
}

