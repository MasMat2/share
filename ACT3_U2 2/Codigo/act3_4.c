
#include <stdio.h>
#include <math.h>

int main(){
  float precio, precio_venta, descuento;
  printf("\nPara calcular el porcentaje descontado ingresa:");
  printf("\nPrecio original: ");
  scanf("%f", &precio);
  printf("Precio de venta: ");
  scanf("%f", &precio_venta);
  descuento = (1 - precio_venta/precio)*100;
  printf("\nEl descuento es del %.2f\x0a\n\n", descuento);
  fflush(stdin);
  getchar();
  return 0;
}
