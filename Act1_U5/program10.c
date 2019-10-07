#include <stdio.h>

int main(){
  int n, i;
  int codigo[' '], edad[' '], zona[' '];
  int men_rur=0, men_urb=0;
  float matricula[' '];
  printf("Cuantos alumnos habra en la clase de programacion: ");
  scanf("%d", &n);
  for(i=0; i<n; i++){
    printf("\nIngresa el codigo del alumno: ");
    scanf("%d", &codigo[i]);
    printf("Ingresa la edad del alumno: ");
    scanf("%d", &edad[i]);
    do{
      printf("Ingresa la zona del alumno 0-Urbana/1-Rural: ");
      scanf("%d", &zona[i]);
    }while(zona[i]!=0 && zona[i]!=1);

    switch(zona[i]){
      case 0:
        matricula[i] = 1500;
        break;
      case 1:
        matricula[i] = 700;
        break;
    }

    if(edad[i]<18){
      matricula[i] *= 0.7;
      if(zona[i]==1){
        men_rur += 1;
      }else{
        men_urb += 1;
      }
    }
  }
  printf("\nEl numero de estudiantes menores de edad que residen en la zona rural es: %d", men_rur);
  printf("\nEl numero de estudiantes menores de edad que residen en la zona urbana es: %d", men_urb);

  printf("\n\n  Clave    Edad    Zona  Matricula");
  for(i=0; i<n; i++){
    printf("\n  %-8d %-8d%-6d%.2f", codigo[i], edad[i], zona[i], matricula[i]);
  }
  printf("\n\n\n\n");
  fflush(stdin);
  getchar();
  return 0;
}
