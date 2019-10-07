/*Desarrollar un programa en C y diagrama de flujo, que pueda determinar, dados dos
números enteros, si un número es divisible de otro, se imprimirá los dos números enteros
de entrada y el número que sea divisible entre el otro número o no hay números
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
 

 
 
 
 
 
 
 

