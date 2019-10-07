#include <stdio.h>

int main(){
  char nombre[30];
  float costo;
  printf("\n\nEste programa calculara el costo final de un articulo \naplicando un 20%c de descuento y un 15%c de IVA", '%', '%');
  printf("\n\n\tIngresar el nombre del articulo: ");
  fflush(stdin);
  gets(nombre);
  printf("\n\tIngresar el costo de %s: ", nombre);
  scanf("%f", &costo);
  printf("\n\n\tEl costo de %s despues del descuento es de %.2f", nombre, costo*0.8);
  printf("\n\tEl costo final incuyendo el IVA es de %.2f", costo*0.8*1.15);
  printf("\n\n\n\n");
}
