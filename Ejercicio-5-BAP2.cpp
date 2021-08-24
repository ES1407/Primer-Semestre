//Objetivo: Implementar un programa que lea por teclado dos números, luego se visualice un menú de operaciones a realizar (suma, resta, multiplicación y división) 
//Fecha: 22/08/2021
//Autor: E.S

#include <conio.h>
#include <iostream>

int yearFunc (int year, int year_actual){
	int total_year;
	total_year = year_actual - year;
	return (total_year);
}

int monthFunc (int month, int month_actual, int total_year){
	int total_month;
	total_month = total_year * 12 + month_actual - month;
	return (total_month);
}

int dayFunc (int day, int day_actual, int total_year, int month_actual){
	int total_day;
	total_day = total_year * 365 + month_actual * 30 + day_actual - day ;
	return (total_day);
}

main(){
	int year, day, month, year_actual, day_actual, month_actual, total_day, total_month, total_year;
	year_actual = 2021, day_actual = 25, month_actual = 8;
	
	printf("Digite en numeros el dia de su nacimiento: ");
	scanf("%d", &day);
	printf("\n");
	
	printf("Digite en numeros el mes de su nacimiento: ");
	scanf("%d", &month);
	printf("\n");
	
	printf("Digite en numeros el año de su nacimiento: ");
	scanf("%d", &year);
	printf("\n");
	
	total_year = yearFunc(year, year_actual);
	printf("Usted ha vivido durante %d anios ", total_year);
	printf("\n");
	
	total_month = monthFunc(month, month_actual, total_year);
	printf("Usted ha vivido durante %d meses ", total_month);
	printf("\n");
	
	total_day = dayFunc(day, day_actual, total_year, month_actual);
	printf("Usted ha vivido durante %d dias ", total_day);
	printf("\n");
}
