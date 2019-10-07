#include <stdio.h>

int main() {
	int x;
  printf("\n\n");
	printf("Programa que categorize si un numero entero es menor a 0, entre 0 y 100 o mayor que 100\n");
	printf("Introduzca un numero entero: \n");
	scanf("%d", &x);
	if(x<0)
	{
	printf("El numero es menor que 0");
	}
	else if(0<=x && x<=100){
	printf("El numero esta entre el 0 y el 100");
	}
	else{
	printf("El numero es mayor a 100");
	}
  printf("\n\n");
	return 0;
}
