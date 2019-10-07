
#include <stdio.h>

int main(){
  int num, ult_cif;
  printf("\nPara calcular la ultima cifra de cierto numero ingrese ese numero:");
  scanf("%d", &num);
  ult_cif = num%10;
  printf("\nLa ultima cifra de %d es %d\n\n", num, ult_cif);
  fflush(stdin);
  getchar();
  return 0;
}
