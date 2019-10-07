
#include <stdio.h>

int main(){
  int clave;
  float prom_tri, prom_sem, mes, total, sem1=0, sem2=0;
  printf("Para calcular el ingreso total anual y el promedio trimestral ingrese:");
  printf("\nClave del empleado:");
  scanf("%d", &clave);
  printf("\nIngreso del mes 1: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 2: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 3: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 4: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 5: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 6: ");
  scanf("%f", &mes);
  sem1 = sem1 + mes;
  printf("Ingreso del mes 7: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  printf("Ingreso del mes 8: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  printf("Ingreso del mes 9: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  printf("Ingreso del mes 10: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  printf("Ingreso del mes 11: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  printf("Ingreso del mes 12: ");
  scanf("%f", &mes);
  sem2 = sem2 + mes;
  total = sem1+sem2;
  prom_tri = total/4;
  prom_sem = total/2;
  printf("\n\nEl empleado con clave %d tuvo un ingreso semestral promedio de %.2f (total semestre 1 = %.2f, total semestre 2 = %.2f)", clave, prom_sem, sem1, sem2 );
  printf("'\nun ingreso trimestral promedio de %.2f y un ingreso anual de %.2f\n\n", prom_tri, total);
  fflush(stdin);
  getchar();
  return 0;
}
