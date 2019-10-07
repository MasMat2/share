
#include <stdio.h>

int main(){
  char nombre[30];
  float costo, precio;
  printf("Para calucluar el precio de venta del articulo ingresar: ");
  printf("\nEl nombre del articulo: ");
  fflush(stdin);
  gets(nombre);
  printf("El costo del articulo: ");
  scanf("%f", &costo);
  precio = costo*1.6*1.16;
  printf("\nEl precio de venta de %s es de %.2f\n\n", nombre, precio);
  fflush(stdin);
  getchar();
  return 0;
}
