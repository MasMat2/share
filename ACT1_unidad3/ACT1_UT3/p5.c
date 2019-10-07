


#include<stdio.h>
#include<stdlib.h>

int main(){
	int mc, numpin, numoya, numced;
	float pino, oyamel, cedro;
	

	
	printf("Ingrese el numero de metros cuadrados disponibles: ");
	scanf("%d",&mc);
	
	if(mc >= 1000000){
		pino=mc*0.70;
		oyamel=mc*0.20;
		cedro=mc*0.10;
	}
	else{
		pino=mc*0.50;
		oyamel=mc*0.30;
		cedro=mc*0.20;
	}
	
	numpin=pino/10*8;
	numoya=oyamel/15*15;
	numced=cedro/18*10;
	
	printf("Hay: %d metros cuadrados \n\t Hay: %d pinos sembrados \n\t Hay: %d oyameles sembrados \n\t Hay: %d cedros sembrados: ", mc, numpin, numoya, numced);
	system("pause");
	return 0;
	
}
