/*Desarrollar un programa en C y diagrama de flujo, que pueda determinar, dados dos
n�meros enteros, si un n�mero es divisible de otro, se imprimir� los dos n�meros enteros
de entrada y el n�mero que sea divisible entre el otro n�mero o no hay n�meros
divisibles.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
 int main() {
   int a, b;
   printf("Ingrese 2 numeros: \n");
   scanf("%d%d", &a, &b);
   if((a % b == 0) && (b!=0))
   {
      printf("%d es Divisible entre %d",a,b);
   }else{
      printf("%d NO es Divisible entre %d",b,a);
   }

   return 0;
   }
 

 
 
 
 
 
 
 

