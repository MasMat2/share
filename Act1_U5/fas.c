#include<stdio.h>

int main(){

	int n,i,j;
	int num[' '],suma=0,pos[' '],cont=0;

	 printf("\n ingresa el total a numeros a ingresar: ");
	 scanf("%d",&n);

	 for(i=0;i<n;i++){

		printf("\n ingresa un numero: ");
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){

		if(num[i]<0){
			suma+=num[i];
		}
	}
		for(i=0;i<n;i++){

		if(num[i]>=0){

			pos[j]=num[i];
			j++;
			cont+=1	;
		}
	}

   printf("\n Arreglo con los numeros que no se eliminaron: ");
   for(i=0; i<cont; i++)

   	printf("\n  %d  ",pos[i]);

   printf("\n Arreglo de entrada: ");
 for(i=0;i<n;i++)

		printf("\n  %d  ",num[i]);



    printf("\n La suma de los numeros negativos es: %d ",suma);


		return 0;
}
