/*El Seguro Social requiere clasificar a las personas que se jubilar�n en el a�o 2015, para
este programa el Seguro Social plantea las siguientes reglas; existen tres tipos de
jubilaciones: por edad, por antig�edad joven y por antig�edad adulta. Las personas
adscritas a la jubilaci�n por edad deben tener 60 a�os o m�s y una antig�edad en su
empleo de menos de 25 a�os, las personas adscritas a la jubilaci�n por antig�edad joven
deben tener menos de 60 a�os y una antig�edad en su empleo de 25 a�os o m�s, las
personas adscritas a la jubilaci�n por antig�edad adulta deben tener 60 a�os o m�s y
una antig�edad en su empleo de 25 a�os o m�s, desarrollar un programa en C y
diagrama de flujo que determine e imprima en qu� tipo de jubilaci�n quedara adscrita
una persona conociendo su nombre, su clave, su edad y tiempo de trabajo.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int edad,antiguedad,nombre;
int main(){
printf("ingresar edad :");
scanf("%d",&edad);
printf("ingresar antiguedad :");
scanf("%d",&antiguedad);

    if((edad>=60)&&(antiguedad>=25))
       printf("jubilado por antiguedad adulta");
    else    
        if((edad<60)&&(antiguedad>=25))
           printf("jubilado por antiguedad joven");
        else 
            if((edad>60)&&(antiguedad>=0))
                printf("jubilado por edad");
            else 
                printf("no cuenta con jubilacion");
   system("pause");
   return 0;              
}
