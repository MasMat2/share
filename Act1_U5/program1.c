#include <stdio.h>

int main(){
  int i, n;
  float prom=0, mayor=0;
  float val[' '];
  int jump=0;
  printf("Escriba el numero de valores que contendra el vector: ");
  scanf("%d", &n);
  printf("\n");
  for(i=0;i<n;i++){
    printf("Valor %d: ", i+1);
    scanf("%f", &val[i]);
  }

  //Determinar el promedio de los valores del vector
  for(i=0;i<n;i++){
    prom += val[i]/n;
  }
  //Encontrar el numero de datos mayores al promedio
  for(i=0;i<n;i++){
    if(prom<val[i]){
      mayor++;
    }
  }
  printf("\n");
  printf("El promedio de los valores del vector es %.2f\n", prom);
  printf("El numero de datos mayores al promedio es %.0f\n", mayor);
  printf("\n");
  printf("Lista de elementos mayores al promedio");
  for(i=0;i<n;i++){
    if(prom<val[i]){
      if(jump%5==0)
        printf("\n");
      printf("\tval[%d] = %.2f", i, val[i]);
      jump++;
    }
  }
  printf("\n");
  printf("Elementos del vector");
  for(i=0;i<n;i++){
    if(i%5==0)
      printf("\n");
    printf("\tval[%d] = %.2f", i, val[i]);
  }



  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
