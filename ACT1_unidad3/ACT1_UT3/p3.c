/*El Seguro Social requiere clasificar a las personas que se jubilarán en el año 2015, para
este programa el Seguro Social plantea las siguientes reglas; existen tres tipos de
jubilaciones: por edad, por antigüedad joven y por antigüedad adulta. Las personas
adscritas a la jubilación por edad deben tener 60 años o más y una antigüedad en su
empleo de menos de 25 años, las personas adscritas a la jubilación por antigüedad joven
deben tener menos de 60 años y una antigüedad en su empleo de 25 años o más, las
personas adscritas a la jubilación por antigüedad adulta deben tener 60 años o más y
una antigüedad en su empleo de 25 años o más, desarrollar un programa en C y
diagrama de flujo que determine e imprima en qué tipo de jubilación quedara adscrita
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
