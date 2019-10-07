/* Desarrollar un programa en C y diagrama de flujo que lea tres longitudes y determine si
forman o no un triángulo. Si es un triángulo determine de qué tipo de triangulo se trata
entre: equilátero (si tiene tres lados iguales), isósceles (si tiene dos lados iguales), o
escaleno (si tiene tres lados desiguales). Considere que para formar un triángulo se
requiere que: “el lado mayor sea menor que la suma de los otros dos lados”. Imprimir si
es un triángulo (equilátero, isósceles o escaleno), o no es un triángulo.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int l1,l2,l3;

int main(){
printf("ingresar longitud 1:");
scanf("%d",&l1);
printf("ingresar longitud 2:");
scanf("%d",&l2);
printf("ingresar longitud 3:");
scanf("%d",&l3);

    if((l1==l2)&&(l1==l3)&&(l3==l1))
        printf("es un triangulo equilatero");
   else 
       if((l1<l2+l3)||(l2<l1+l3)||(l3<l1+l2))
            if ((l1==l2)||(l1==l3)||(l2==l3))
                printf("es un triangulo isosceles");
            else    
                printf("es un triangulo escaleno");
            else 
			    printf(" no es un triangulo");    
	system("pause");
	return 0;		    
			    
			    

}
