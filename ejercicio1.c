#include <stdio.h>
#define PI 3.14



void main(){
	
	printf("Introduce el radio\n");
	float r;
	scanf("%f", &r);
	float resultado = r*r*PI;
	printf("AREA = %f",resultado);
	
}