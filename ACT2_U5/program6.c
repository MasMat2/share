#include<stdio.h>

int main(){
  int i, j, k, n;
  int aux;
  int A[' '][' '];
  printf("Ingresa la dimension de la matriz cuadrada: ");
  scanf("%d", &n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Ingrese el valor de A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\nLa matriz original es");
  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-6d", A[i][j]);
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

  printf("\n\nLa matriz ordenada es");
  for(i=0;i<n;i++){
    printf("\n  ");
    for(j=0;j<n;j++){
      printf("%-6d", A[i][j]);
    }
  }


  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
