/*En una tienda efectúan un descuento a los clientes dependiendo del monto de la compra.
El descuento se efectúa con base en el siguiente criterio:
Si el monto es menor que $500, no hay descuento.
Si el monto está comprendido entre $500 y $1000 inclusive, el descuento es del 5%.
Si el monto es mayor a $1000 o menor o igual a $7000, el descuento es del 11%.
Si el monto es mayor a $7000 o menor o igual a $15000, el descuento es del 18%.
Si el monto es mayor a $15000, el descuento es del 25%.
Desarrollar un programa en C, y diagrama de flujo tal que dado el nombre del cliente y
el monto de la compra determine lo que el mismo debe pagar. Se imprimirá el nombre
del cliente, el monto y lo que debe pagar. */

#include<stdio.h> 
#include<stdio.h> 
#include<math.h>
float nombre;
float monto,total;
int main(){
    printf("introduzca el nombre del cliente:");
	scanf("%s",&nombre);
	printf("introduzca el monto:");
	scanf("%f",&monto);
	
	if((monto<500)){
	total=0;	
	printf("no hay descuento: %.2f",total);
	}else 
	    if((monto>500)||(monto<=1000)){
		total=monto-(monto*.05);
        printf("total a pagar: %.2f",total);
	} else 
        if((monto>1000)||(monto<=7000)){
		total=monto-(monto*.11);
        printf("total a pagar: %.2f",total);
   }else 
        if((monto>7000)||(monto<=15000)){
	    total=monto-(monto*.18);
        printf("total a pagar: %.2f",total);	
	}else
	    if((monto>=15000)){
		total=monto-(monto*.25);
        printf("total a pagar: %.2f",total);
	}
system("pause");
return 0;
         
}
