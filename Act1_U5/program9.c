#include <stdio.h>

int main(){
  int n, i, j=0, k, op;
  int len_rem=0, na=0;
  int el;
  int remove[' '];
  float parcelas[100], upt_parcelas[100];

  printf("Ingrese el total de parcelas que tiene la productora: ");
  scanf("%d", &n);


  //Poblar el arreglo de parcelas
  for(i=0; i<n*2; i+=2){
    printf("\n");
    printf("Ingresa el numero de toneladas cosechadas para comer: ");
    scanf("%f", &parcelas[i]);
    printf("Ingresa el numero de toneladas cosechadas para jugo: ");
    scanf("%f", &parcelas[i+1]);
  }

  //Pedir al usuario las parcelas a eliminar
  do{
    printf("\nDesea eliminar la informacion de una parcela 1-Si/0-No: ");
    scanf("%d", &op);
    if(op){
      printf("Ingrese el numero de la parcela que desea eliminar: ");
      scanf("%d", &remove[len_rem]);
      len_rem++;
    }
  }while(op);

  //Eliminar parcelas elegidas por el usuario
  for(i=0;i<n;i++){
    el = 0;
    for(k=0;k<len_rem;k++){
      if(i == remove[k]-1){
        el = 1;
        break;
      }
    }
    if(el==0){
      upt_parcelas[j*2] = parcelas[i*2];
      upt_parcelas[j*2+1] = parcelas[i*2+1];
      j++;
    }
  }

  //Contar las parcelas sin produccion
  for(i=0;i<(n-len_rem);i++){
    if(upt_parcelas[i*2]+upt_parcelas[i*2+1]==0){
      na += 1;
    }
  }

  //Imprimir parcelas su produccion por tipo y total
  for(i=0;i<(n-len_rem);i++){
    printf("\n\nLa produccion de la parcela %d es:", i+1);
    printf("\nToneladas para comer: %.2f", upt_parcelas[i*2]);
    printf("\nToneladas para jugo: %.2f", upt_parcelas[i*2+1]);
    printf("\nToneladas totales: %.2f", upt_parcelas[i*2]+upt_parcelas[i*2+1]);
  }

  printf("\n\nEl numero de parcelas con una produccion nula es de %d", na);

  //Imprimir parcelas sin produccion
  for(i=0;i<(n-len_rem);i++){
    if(upt_parcelas[i*2]+upt_parcelas[i*2+1]==0){
      printf("\nLa parcela %d tuvo una produccion nula", i+1);
    }
    }



  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
