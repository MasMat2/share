#include <stdio.h>

int main(){
  int n, i;
  int num_1=0, num_2=0, change=0;
  float sueldos_g1=0, sueldos_g2=0;
  float prom_1=0, prom_2=0, prom_t=0;
  int clave[50], grupo[50], sueldo[50];
  printf("Escriba el numero de empleados de la empresa: ");
  scanf("%d", &n);
  for(i=0;i<n;i++){
    printf("\nEscriba la clave del empleado: ");
    scanf("%d", &clave[i]);
    do{
      printf("Escriba el grupo del empleado: ");
      scanf("%d", &grupo[i]);
    } while(grupo[i]!=1 && grupo[i]!=2);
    printf("Escriba el sueldo semanal del empleado: ");
    scanf("%d", &sueldo[i]);
    switch(grupo[i]){
      case 1:
        sueldo[i] += 250;
        break;
      case 2:
        sueldo[i] += 150;
        break;
    }
  }

  //Calcular promedio del grupo 1
  for(i=0; i<n; i++){
    if(grupo[i]==1){
      sueldos_g1 += sueldo[i];
      num_1 += 1;
    }
  }
  if(num_1){
    prom_1 = sueldos_g1/num_1;
  }
  //Calcular promedio del grupo 2
  for(i=0; i<n; i++){
    if(grupo[i]==2){
      sueldos_g2 += sueldo[i];
      num_2 += 1;
    }
  }
  if(num_2){
    prom_2 = sueldos_g2/num_2;
  }
  //Calcular promedio del grupo 2
  prom_t = (prom_1*num_1+prom_2*num_2)/n;

  //Cambiar empleados de grupo 1 a 2 si su sueldo es mayor al promedio del grupo 1
  for(i=0; i<n; i++){
    if(grupo[i]==1 && sueldo[i]>prom_1){
      grupo[i] = 2;
      change += 1;
      // sueldo[i] -= 100;
    }
  }

  for(i=0; i<n; i++){
    printf("\nEmpleado %d", i+1);
    printf("\nClave: %-6dGrupo: %-6dSueldo: %d\n", clave[i], grupo[i], sueldo[i]);
  }
  printf("\n\n");
  printf("\nEl promedio del grupo 1: %.2f", prom_1);
  printf("\nEl promedio del grupo 2: %.2f", prom_2);
  printf("\nEl promedio del total de los empleados: %.2f", prom_t);
  printf("\nEl numero de empleados que cambio del grupo 1 al 2 es de: %d", change);
  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
