/*
 * FuncionesUTN_1C_2021.c
 *
 *  Created on: 14 abr. 2021
 *      Author: Facundo
 */

#include <stdio.h>
#include <stdlib.h>

//----------------------------FUNCIONES DE INGRESOS----------------------------

//Funcion de ingresar numero:
float ingresarNumero(){
	float numeroIngresado;

	printf("Ingrese un numero: ");
	scanf("%f", &numeroIngresado);

	return numeroIngresado;
}

//Funcion de levantar bandera:
int flagUp(int bandera){
	bandera = 1;
	return bandera;
}

//Funcion de bajar bandera:
int flagDown(int bandera){
	bandera = 0;
	return bandera;
}


//----------------------------FUNCIONES DE OPERACIONES MATEMATICAS----------------------------

//Funcion de suma de 2 numeros:
float sumarAmasB(float numSumando, float numSumando2){
	float totalSuma = numSumando+numSumando2;
	return totalSuma;
}

//Funcion de resta de 2 numeros:
float restarAmenosB(float numMinuendo, float numSustraendo){
	float totalResta = numMinuendo-numSustraendo;
	return totalResta;
}

//Funcion de division de 2 numeros:
float dividirAdivididoB(float numDividendo, float numDivisor){
	float totalDivision;

	if(numDivisor != 0){
		totalDivision = numDividendo / numDivisor;
	}
	else{
		totalDivision = 0;
	}
	return totalDivision;
}

//Funcion de multiplicacion de 2 numeros:
float multiplicarAporB(float numMultiplicando, float numMultiplicador){
	float totalMultiplicacion = numMultiplicando*numMultiplicador;
	return totalMultiplicacion;
}

//Funcion de calcular factorial de un numero:
int factorialNum(float nFactorial){
	int totalFactorial = nFactorial;
	int i;

	if (nFactorial == 0 || nFactorial == 1){
		totalFactorial = 1;
	}
	else{
		if ((totalFactorial>0) && (nFactorial<13) && (totalFactorial-nFactorial == 0)){
			for (i=nFactorial; i>1; i--){
				totalFactorial = totalFactorial*(i-1);
			}
		}
		else{
			totalFactorial = 0;
		}
	}

	return totalFactorial;
}
