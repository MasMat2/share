#include<stdio.h>

int main(){
  int A[' '][' '];
  printf("Ingresa la dimension de la matriz cuadrada: ");
  scnaf("%d", n);
  for(i=0;i<n;i++){
    for(j=0;i<n;i++){
      printf("Ingrese el valor de A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-4d", A[i][j]);
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      for(k=j+1;k<n;k++){
        if(A[i][j]>A[i][k]){
          aux = A[i][j];
          A[i][j] = A[i][k];
          A[i][k] = aux;
        }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-4d", A[i][j]);
    }
  }


  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
