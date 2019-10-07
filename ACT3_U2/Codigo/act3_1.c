
#include <stdio.h>
int main(){
  float costo, precio_venta;
  printf("\nIngrese el costo del articulo: ");
  scanf("%f", &costo);
  precio_venta = costo*1.16;
  printf("\nEl precio de venta es de %.2f\n\n", precio_venta);
  fflush(stdin);
  getchar();
  return 0;
}
