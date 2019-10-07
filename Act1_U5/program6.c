#include <stdio.h>

int main(){
  int i;
  int n=20;
  float A[n], B[n], C[n];
  for(i=0;i<n;i++){
    printf("\n");
    printf("Ingresa el %d elemento de A: ", i+1);
    scanf("%f", &A[i]);
    printf("Ingresa el %d elemento de B: ", i+1);
    scanf("%f", &B[i]);
  }
  for(i=0;i<n;i++){
    C[i]=A[i]*B[19-i];
  }


  printf("\nElementos de A");
  for(i=0; i<n; i++){
    if(i%5==0){
      printf("\n");
    }
    printf("\t%.2f", A[i]);
  }

  printf("\nElementos de B");
  for(i=0; i<n; i++){
    if(i%5==0){
      printf("\n");
    }
    printf("\t%.2f", B[i]);
  }

  printf("\nElementos de C");
  for(i=0; i<n; i++){
    if(i%5==0){
      printf("\n");
    }
    printf("\t%.2f", C[i]);
  }
  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
