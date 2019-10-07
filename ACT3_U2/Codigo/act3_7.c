
#include <stdio.h>
#include <math.h>

int main(){
  float capital, interes, cap_obt;
  printf("Para calcular el total de intereses y el capital obtenido a los seis meses ingrese:");
  printf("\nCapital invertido: ");
  scanf("%f", &capital);
  interes = pow(1.02, 6);
  cap_obt = capital*interes - capital;
  capital = capital*interes;
  printf("\nEl total de interes a los 6 meses es de %.4f\nEl capital obtenido a los 6 meses es de: %.4f\nEl capital total en la cuenta es de: %.4f\n\n", interes, cap_obt, capital);
  fflush(stdin);
  getchar();
  return 0;
}
