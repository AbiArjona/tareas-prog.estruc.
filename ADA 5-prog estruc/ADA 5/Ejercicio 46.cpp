#include <stdio.h>

/*	Ejercicio: ADA 4, Ejercicio 46.
Descripci�n: E.P.  que  lea  200  n�meros  y  que  calcule  e  imprima  cuantos son
negativos, cuantos son positivos y cuantos fueron iguales a cero.
Fecha: 17 Febrero 2019
Versi�n: 1.0
*/

int main() {
	
	int cont,contp,contn,cont0;
	float num;
	
	contp=0;
	contn=0;
	cont0=0;
	
	for(cont=1;cont<=200;cont++){
		
		printf("\nIntroduzca un n�mero: ");
		scanf ("%f",&num);
		
		if(num > 0){
			contp++;
		}
		else if(num < 0){
			contn++;
		}
		else{
			cont0++;
		}
		
	}
	
	printf("\nLa cantidad de n�meros positivos es de %i",contp);
	printf("\nLa cantidad de n�meros posnegativos es de %i",contn);
	printf("\nLa cantidad de ceros es de %i",cont0);
	
	return 0;
}

