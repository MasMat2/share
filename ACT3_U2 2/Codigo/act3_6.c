
#include <stdio.h>

int main(){
  int num_com;
  float precio_arr, precio_alm, precio_tot, kilo_arr, kilo_alm;
  printf("\nPara calcular la cantidad de ingredientes y su precio ingrese:");
  printf("\nNumero de comensales: ");
  scanf("%d", &num_com);
  printf("Precio del arroz por kilo: ");
  scanf("%f", &precio_arr);
  printf("Precio de las almejas por kilo: ");
  scanf("%f", &precio_alm);
  kilo_arr = num_com/8.0;
  kilo_alm = num_com/16.0;
  precio_arr = precio_arr*kilo_arr;
  precio_alm = precio_alm*kilo_alm;
  precio_tot = precio_arr + precio_alm;
  printf("\nKilos arroz : %.2f", kilo_arr);
  printf("\nKilos almejas : %.2f", kilo_alm);
  printf("\nPrecio arroz : %.2f", precio_arr);
  printf("\nPrecio almejas : %.2f", precio_alm);
  printf("\nPrecio total : %.2f\n", precio_tot);
  fflush(stdin);
  getchar();
  return 0;
}
