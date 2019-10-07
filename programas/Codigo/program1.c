#include <stdio.h>

int main(){
  float lado, altura, ancho;
  printf("Este programa calculara el area de un cuadrado y un triangulo");
  printf("\n\n\tPrimeramente ingresa la longitud del lado del cuadrado: ");
  scanf("%f", &lado);
  printf("\n\t\tEl cuadrado tiene un area de %.2f unidades", lado*lado);

  printf("\n\n\tPara calcular el area del triangulo ingresa su altura: ");
  scanf("%f", &altura);
  printf("\n\tPor favor ingresas el ancho del triangulo: ");
  scanf("%f", &ancho);
  printf("\n\t\tEl area del triangulo es de %.2f unidades", altura*ancho/2);
  printf("\n\n\n\n");

}
