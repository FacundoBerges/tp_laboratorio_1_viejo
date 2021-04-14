/*
 * FuncionesUTN_1C_2021.h
 *
 *  Created on: 14 abr. 2021
 *      Author: Facundo
 */

#ifndef FUNCIONESUTN_1C_2021_H_
#define FUNCIONESUTN_1C_2021_H_


//============================Funciones de ingreso y modificacion de datos============================

/** \brief      Funcion para ingresar un numero flotante y retornar el mismo.
 *
 * \return float    devuelve el nro float ingresado.
 *
 */
float ingresarNumero();

/** \brief      Funcion para cambiar estado de una bandera de 0 a 1
 *
 * \param bandera int   recibe como parametro la bandera a modificar
 * \return int          retorna la bandera con valor 1
 *
 */
int flagUp(int bandera);

/** \brief      Funcion para cambiar estado de una bandera de 1 a 0
 *
 * \param bandera int   recibe como parametro la bandera a modificar
 * \return int          retorna la bandera con valor 0
 *
 */
int flagDown(int bandera);


//============================Funciones aritmeticas============================

/** \brief      Funcion que recibe 2 numeros flotantes y retorna la suma de ambos
 *
 * \param num1 float    1er numero flotante
 * \param num2 float    2do numero flotante, nro a a sumar
 * \return float        retorno del resultado de la suma
 *
 */
float sumarAmasB(float num1, float num2);

/** \brief      Funcion que recibe 2 numeros flotantes y retorna la resta entre el 1ro menos el 2do
 *
 * \param num1 float    1er numero flotante
 * \param num2 float    2do numero flotante, nro a restar al 1ro
 * \return float        retorna el resultado de la resta
 *
 */
float restarAmenosB(float num1, float num2);

/** \brief      Funcion que recibe 2 numeros flotantes y retorna el producto entre ambos
 *
 * \param num1 float    1er numero flotante
 * \param num2 float    2do numero flotante
 * \return float        retorno del resultado del producto
 *
 */
float multiplicarAporB(float num1, float num2);

/** \brief      Funcion que recibe 2 numeros flotantes y retorna la division del 1ro por el 2do
 *
 * \param num1 float    1er numero flotante, dividendo
 * \param num2 float    2do numero flotante, divisor
 * \return float        resultado de la division, o 0 si el divisor el 0 (no se puede dividir)
 *
 */
float dividirAdivididoB(float num1, float num2);

/** \brief      Funcion que recibe un numero y calcula su factorial, siempre y cuando sea posible y no provoque overflow
 *
 * \param num1 float    nro flotante a calcular su factorian (n!)
 * \return int          devolucion del resultado, 0 si no es posible calcularlo
 *
 */
int factorialNum(float num1);

#endif /* FUNCIONESUTN_1C_2021_H_ */
