

#include <stdio.h>

int main(){
  char name[30];
  float costo;
  gets(name);
  printf("Calcular el precio de venta de un articulo tomando en cuenta \nel costo de produccion, utilidad e impuesto");
  printf("\n\nIngresa el nombre del articulo: ");
  fflush(stdin);
  gets(name);
  printf("\nIngresa el costo de produccion de %s: ", name);
  scanf("%f", &costo);
  printf("\n\nEl precio de venta de %s es de %.2f", name, costo*2.2*1.15);
  printf("\n\n\n\n");

}
