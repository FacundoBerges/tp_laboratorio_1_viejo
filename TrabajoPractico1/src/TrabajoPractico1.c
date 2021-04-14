/*
 ============================================================================
 Name        : TrabajoPractico1.c
 Author      : Facundo Hector Berges
 Version     : 1.00
 Copyright   : -
 Description : Trabajo practico 1 de la materia Laboratorio 1 - UTN - tecnicatura en programacion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "FuncionesUTN_1C_2021.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcionIngresada;
	// Valores A y B
	float valorA;
	float valorB;
	// Banderas
	int banderaIngresoA = 0;
	int banderaIngresoB = 0;
	int banderaIngresoOpc3 = 0;
	// Resultados de operaciones
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	int factorialA;
	int factorialB;

	do{
		system("cls");
		fflush(stdin);
		printf("             ***   Calculadora - menu de opciones   ***\n\n");
		if(!banderaIngresoA){
			printf("1. Ingresar 1er operando.\n");
		}
		else{
			printf("1. Modificar 1er operando. (A = %.2f)\n", valorA);
		}
		if(!banderaIngresoB){
			printf("2. Ingresar 2do operando.\n");
		}
		else{
			printf("2. Modificar 2do operando. (B = %.2f)\n", valorB);
		}
		if(!banderaIngresoOpc3){
			printf("3. Calcular operaciones (suma, resta, division, multiplicacion y factorial).\n");
		}
		else{
			printf("3. Calcular operaciones (suma, resta, division, multiplicacion y factorial).  -Calculos realizados-\n");
		}
		printf("4. Informar resultados.\n");
		printf("5. Salir.\n\n");
		printf("Ingrese opcion: ");
		scanf("%d", &opcionIngresada);
		printf("\n");
		switch(opcionIngresada){
			case 1:
				valorA = ingresarNumero();
				banderaIngresoA = flagUp(banderaIngresoA);
				banderaIngresoOpc3 = flagDown(banderaIngresoOpc3);
				break;
			case 2:
				valorB = ingresarNumero();
				banderaIngresoB = flagUp(banderaIngresoB);
				banderaIngresoOpc3 = flagDown(banderaIngresoOpc3);
				break;
			case 3:
				if (banderaIngresoA && banderaIngresoB){
					printf("\nCalculando...\n");
					system("pause");
					resultadoSuma = sumarAmasB(valorA, valorB);
					resultadoResta = restarAmenosB(valorA, valorB);
					resultadoMultiplicacion = multiplicarAporB(valorA, valorB);
					if(valorB == 0){
						resultadoDivision = 0;
					}
					else{
						resultadoDivision = dividirAdivididoB(valorA, valorB);
					}
					factorialA = factorialNum(valorA);
					factorialB = factorialNum(valorB);
					banderaIngresoOpc3 = flagUp(banderaIngresoOpc3);
				}
				else{
					printf("Antes de continuar, debe ingresar 1er y 2do operando.\n");
					system("pause");
				}
				break;
			case 4:
				if(banderaIngresoOpc3){
					system("cls");
					printf("		===================== resultados =====================\n\n");
					printf("El resultado de %.2f + %.2f es %.2f.\n", valorA, valorB, resultadoSuma);
					printf("El resultado de %.2f - %.2f es %.2f.\n", valorA, valorB, resultadoResta);
					if (valorB == 0){
						printf("No se puede dividir por 0.\n");
					}
					else{
						printf("El resultado de %.2f / %.2f es %.2f.\n", valorA, valorB, resultadoDivision);
					}
					printf("El resultado de %.2f * %.2f es %.2f.\n", valorA, valorB, resultadoMultiplicacion);
					if ((factorialB > 0) && (factorialA > 0)){
						printf("El factorial de %.2f es %d, y el factorial de %.2f es %d.\n", valorA, factorialA, valorB, factorialB);
					}
					else{
						if (factorialA > 0){
							printf("El factorial de %.2f es %d. No se pudo calcular el factorial de %.2f.\n", valorA, factorialA, valorB);
						}
						else{
							if(factorialB > 0){
								printf("No se pudo calcular el factorial de %.2f. El factorial de %.2f es %d.\n", valorA, valorB, factorialB);
							}
							else{
								printf("No se pudo calcular el factorial de los numeros %.2f y %.2f.", valorA, valorB);
							}
						}
					}
					printf("\n\n");
				}
				else{
					if (!banderaIngresoA || !banderaIngresoB ){
						printf("Antes de mostrar los resultados, debe ingresar 1er y 2do operandos, y luego hacer los calculos (ingrese a las opciones 1 y 2, y luego a la opcion 3).\n");
					}
					else{
						printf("Antes de mostrar los resultados, debe realizar los calculos (ingrese a la opcion 3).\n");
					}
				}
				system("pause");
				break;
			case 5:
				break;
			default:
				printf("Opción ingresada invalida. Ingrese opcion (numeros del 1 al 5).\n");
				system("pause");
				break;
		}
	}while (opcionIngresada != 5);
	printf("Cerrando la calculadora. ");
	system("pause");
	return EXIT_SUCCESS;
} //Fin del main.
