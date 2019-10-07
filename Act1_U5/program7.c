#include <stdio.h>
#include <math.h>
int main(){
  int n, i, j, k, slice;
  int con;
  int A[' '], B[' '];
  printf("Escriba el tamano del arreglo: ");
  scanf("%d", &n);
  for(i=0;i<n;i++){
    printf("Ingrese el elemnto %d: ", i+1);
    scanf("%d", &A[i]);
  }


  //Crear vector espejo

  //Recorrer todos los elementos del vecotr A
  for(i=0;i<n;i++){
    //Encontrar cuantos digitos contiene
    for(j=0;j<100;j++){
      con = (int) A[i]/pow(10,j+1);
      if(con==0){
        break;
      }
    }
    //Algoritmo para crear el elemnto espejo de A[i]
    for(k=j; k>=0; k--){
      slice = (int) A[i]/pow(10, k);
      B[i] += (slice%10)*pow(10, j-k);
    }
  }

  printf("\n\n");
  printf("Vector A:      Vector B:");
  for(i=0; i<n; i++){
    printf("\n");
    printf("  %-12d   %d", A[i], B[i]);
  }
  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
