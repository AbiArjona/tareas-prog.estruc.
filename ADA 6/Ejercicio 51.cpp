#include <stdio.h>

/*	Ejercicio: ADA 6, Ejercicio 51.
Descripci�n: E.P. que lea un vector de n elementos y que calcule e imprima susumatoria
Versi�n: 1.0
*/

int n,i=0;
float suma=0;

int main() {
	
	printf("Introduzca la cantidad de n�meros a sumar: ");
	scanf("%i",&n);
	
	float v[n];
	
	do{
		
		printf("\nIntroduzca el %i� n�mero. ",i+1);
		scanf("%f",&v[i]);
		
		i++;
		
	} while(i < n);
	
	i=0;
	
	do{
		
		suma+=v[i];
		
		i++;
		
	} while(i < n);
	
	printf("\nLa sumatoria de todos los n�meros es: %.2f",suma);
	
	return 0;
}

