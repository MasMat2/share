/*Desarrollar un programa en C el cual, almacene en un arreglo de tipo real las
calificaciones de n alumnos que presentaron en un examen de admisión a la
universidad, calcular:
a) El promedio general de los n alumnos.
b) El porcentaje de alumnos aprobados, todos aquellos alumnos cuyo puntaje
supere los 1300 puntos.
c) El número de alumnos cuya calificación sea mayor o igual a 1500 puntos.
Imprimir el resultado de cada inciso.*/
#include<stdio.h>
#include<stdlib.h>
int n,i,cont1=0,cont2=0;
float calif[' '],promG,porcent,sum=0;
int main(){
	do{
		system("cls");
		printf("Introduzca el numero de alumnos \n");
	    scanf("%d",&n);
	}while(n<=0);
	for(i=0;i<n;i++){
		printf("Introduzca la calificacion del alumno %d \n",i+1);
		scanf("%f",&calif[i]);
	}
	for(i=0;i<n;i++){
		sum+=calif[i];
		if(calif[i]>=1500)
			cont1=cont1+1;
		if(calif[i]>1300)
			cont2=cont2+1;
	}
	promG=sum/n;
	porcent=((float)cont2/n)*100;
	printf("\n\nREPORTE\n\n");
	printf("El promedio general es de: %.2f \nEl porcentaje de alumnos aprobados es de: %.2f \nEl numero de alumnos con puntos mayor o igual a 1500 es de: %d",promG,porcent,cont1);
	return 0;
}
