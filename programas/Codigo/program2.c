#include <stdio.h>
int main(){
  char nombre[30], matricula[20], materia[20];
  int parciales[3];

  printf("\nEste programa calculara el promedio de un alumno basandose en sus 3 calificaciones parciales");
  printf("\n\n\tPor favor ingresar la siguiente informacion:");
  printf("\n\tNombre del alumno:");
  fflush(stdin);
  gets(nombre);
  printf("\n\tMatricula:");
  fflush(stdin);
  gets(matricula);
  printf("\n\tMateria:");
  fflush(stdin);
  gets(materia);
  printf("\n\n\tA continuacion ingrese las 3 calificaciones parciales del alumno:");
  printf("\n\tParcial 1:");
  scanf("%d", &parciales[0]);
  printf("\n\tParcial 2:");
  scanf("%d", &parciales[1]);
  printf("\n\tParcial 3:");
  scanf("%d", &parciales[2]);
  printf("\n\n\tLa calificacion promedio de %s(%s) en la materia de %s es de %d", nombre, matricula, materia, (parciales[0]+parciales[1]+parciales[2])/3);
  printf("\n\n\n\n");

}
