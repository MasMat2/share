
#include <stdio.h>
#include <math.h>

int main(){
  float interes, capital, redito, tiempo;
  printf("Para calcular el total de intereses simple ingresar:");
  printf("\nEl capital: ");
  scanf("%f", &capital);
  printf("\nEl redito anual en forma de porcentaje (20%% = 20): ");
  scanf("%f", &redito);
  printf("\nEl tiempo en dias: ");
  scanf("%f", &tiempo);
  interes = capital*redito*tiempo/36000;
  printf("\n\nEl interes simple generado en %.1f dias es de es de %.2f\n\n", tiempo, interes);
  fflush(stdin);
  getchar();
  return 0;
}
