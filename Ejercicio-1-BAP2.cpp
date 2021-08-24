//Objetivo: Implementar un programa que lea por teclado dos números, luego se visualice un menú de operaciones a realizar (suma, resta, multiplicación y división) 
//Fecha: 22/08/2021
//Autor: E.S

#include <conio.h>
#include <iostream>


float sumaFunc (float valor1, float valor2){
	float suma;
	suma = valor1 + valor2;
	return(suma);
}

float restaFunc (float valor1, float valor2){
	float resta;
	resta = valor1 - valor2;
	return(resta);
}

float multiplicacionFunc (float valor1, float valor2){
	float multiplicacion;
	multiplicacion = valor1 * valor2;
	return(multiplicacion);
}

float divisionFunc (float valor1, float valor2){
	float division;
	division = valor1 / valor2;
	return(division);
}
	


main(){
	
	float valor1, valor2, o;
	float suma, resta, multiplicacion, division;
	
	printf("--------------------------------------------------------MENU--------------------------------------------------------");
	printf("\n");
	
	printf("Ingrese el valor 1: ");
	scanf("%f", &valor1);
	
	printf("Ingrese el valor 2: ");
	scanf("%f", &valor2);
	printf("\n");
	
	printf("1. Suma: ");
	printf("\n");
	printf("2. Resta: ");
	printf("\n");
	printf("3. Multiplicacion: ");
	printf("\n");
	printf("4. Division: ");
	printf("\n");

	printf("\n");
	printf("Seleccione que operacion desea realizar: ");
	scanf("%f", &o);
	printf("\n");
	
	if (o == 1){
		suma = sumaFunc(valor1, valor2);
		printf("El resultado de la suma es: %f", suma);
	}
	
	if (o == 2){
		resta = restaFunc(valor1, valor2);
		printf("El resultado de la resta es: %f", resta);
	}
	
	if (o == 3){
		multiplicacion = multiplicacionFunc(valor1, valor2);
		printf("El resultado de la multiplicacion es: %f", multiplicacion);
	}
	
	if (o == 4){
		division = divisionFunc(valor1, valor2);
		printf("El resultado de la division es: %f", division);
	}
}

