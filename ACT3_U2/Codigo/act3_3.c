
#include <stdio.h>
#include <math.h>

int main(){
  double cateto1, cateto2, hipotenusa;
  printf("\nPara calcular la hipotenusa de el triangulo rectangulo ingresar lo siguiente:");
  printf("\nCateto1: ");
  scanf("%lf", &cateto1);
  printf("Cateto1: ");
  scanf("%lf", &cateto2);
  hipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2));
  printf("\nEl valor de a hipotenusa es de %.2f\n\n", hipotenusa);
  fflush(stdin);
  getchar();
  return 0;
}
