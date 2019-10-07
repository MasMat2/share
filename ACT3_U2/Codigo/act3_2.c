
#include <stdio.h>
int main(){
  int residuo, divisor, dividendo, cociente;
  printf("\nIngrese los siguientes datos: ");
  printf("\nDividendo: ");
  scanf("%d", &dividendo);
  printf("Divisor: ");
  scanf("%d", &divisor);
  printf("Cociente: ");
  scanf("%d", &cociente);
  residuo = dividendo - (divisor*cociente);
  printf("\n\nEl residuo es: %d\n", residuo);
  fflush(stdin);
  getchar();
  return 0;
}
