/*Desarrollar un programa en C y diagrama de flujo, que calcule el total que hay que pagar
a un empleado de la empresa ACME sabiendo que la empresa exige a sus trabajadores
laborar 40 horas semanales. Para pagar el salario semanal se tiene en cuenta las
siguientes condiciones: el salario base para las mujeres es de $500.00 semanales y para
los hombres es de $700.00 semanales, si el empleado es mujer es necesario hacerle
una bonificación de $20.00 por cada hijo que tenga, si el empleado es hombre la
bonificación depende solo de la edad así: entre 18 y 30 años 10% del salario base, entre
31 y 40 años 20% del salario base y más de 40 años tendrá una bonificación del 25%
del salario base. A todos los empleados sin importar si es hombre o mujer se le
descuenta $50.00 por cada hora que deje de laborar de las 40 horas que se exigen.
Imprimir el total a pagar a un empleado.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int hortra, hntra, sexo, desue=-50, hijos, hmen;
	float sueldo, edad, aumento, sueldof;
	char cad[30];
	
	/*hortra = Horas trabajadas
	hntra = Horas no trabajadas
	desue =Descuento de sueldo
	hmen = Horas Menos */
	
	setlocale(LC_CTYPE, "Spanish");
	
	printf("Ingrese el nombre del empleado: ");
	gets(cad);	
	printf("Ingrese las horas trabajadas por semana: ");
	scanf("%d",&hortra);
	
	hntra= 40-hortra; 
	
	printf(" \n\t 1 es para Mujer \n\t 2 es para Hombre ");
	printf("\n\n\t Ingrese el sexo de la persona: ");
	scanf("%d",&sexo);


	if(sexo == 1){
		sueldo=500;
		printf("Ingrese el numero de hijos que tiene: ");
		scanf("%d",&hijos);
		if(hortra < 40){
			hmen=40-hortra;
		}
		sueldof=sueldo-hmen*desue+hijos*20;
		printf("\n\n La mujer");
	}
	
	else{
		sueldo=700;
		printf("Ingrese la edad del trabajador");
		scanf("%d",&edad);
		if(edad >= 18 && edad < 30){
			aumento=(float)sueldo*0.10;
		}
		else if(edad <= 31 && edad >= 40){
			aumento=(float)sueldo*0.20;			
		}
		else{
			aumento=(float)sueldo*0.25;
		}
		if(hortra < 40){
			hmen=40-hortra;
		}
		sueldof=sueldo-hmen*desue;
		printf("\n\n El hombre");
		}
	printf("Tendra un sueldo final de: %.2f ", sueldof);
		
	}



