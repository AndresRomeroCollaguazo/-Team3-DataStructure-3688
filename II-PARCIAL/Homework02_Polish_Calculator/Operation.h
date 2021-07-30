//                  *Universidad de las Fuerzas Armadas "ESPE"
//  Software
//  Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
//  Deber de Calculadora
//  Fecha creación : 18 / 07 / 2021
//  Fecha de modificación : 23 / 07 / 2021  */
/**
*@file Operation.h
*@version 1.0
*@date 29/07/2021
*@author Grupo 3
*@title Operaciones de la calculadora
*@brief Operaciones
*/
#pragma once
#include "Operators.h"
#include "Apilation.h"
class Operation
{
public:
	/**
	 * @brief infix a prefix
	 *
	 * @return string
	 */
	string infix_to_prefix(string);

	/**
	 * @brief infix a prefix
	 *
	 * @return Stack<string>
	 */
	Apilation<string> infix_to_prefix1(Apilation<string>);

	/**
	 * @brief infix a postfix
	 *
	 * @return string
	 */
	string infix_to_postfix(string);

	/**
	 * @brief infix a postfix
	 *
	 * @return Stack<string>
	 */
	Apilation<string> infix_to_postfix1(Apilation<string>);

	/**
	 * @brief infix a funcional
	 *
	 * @return string
	 */
	string infix_to_funtional(string);

	/**
	 * @brief prefix a infix
	 *
	 * @return string
	 */
	string prefix_to_infix(string);

	/**
	 * @brief prefix a postfix
	 *
	 * @return string
	 */
	string prefix_to_postfix(string);

	/**
	 * @brief prefix a funcional
	 *
	 * @return string
	 */
	string prefix_to_funtional(string);

	/**
	 * @brief postfix a infix
	 *
	 * @return string
	 */
	string postfix_to_infix(string);

	/**
	 * @brief postfix a prefix
	 *
	 * @return string
	 */
	string postfix_to_prefix(string);

	/**
	 * @brief postfix a funcional
	 *
	 * @return string
	 */
	string postfix_to_funtional(string);

	/**
	 * @brief comprobar operador
	 *
	 * @return true
	 * @return false
	 */
	bool is_operator(char);

	/**
	 * @brief comprobar operador
	 *
	 * @return true
	 * @return false
	 */
	bool is_operator1(string);

	/**
	 * @brief comprobar char trigonometrica
	 *
	 * @return true
	 * @return false
	 */
	bool is_trig_fun(char);

	/**
	 * @brief comprobar trigonometrica
	 *
	 * @return true
	 * @return false
	 */
	bool is_trig_fun1(string);

	/**
	 * @brief comprobar operando
	 *
	 * @return true
	 * @return false
	 */
	bool is_operand(char);

	/**
	 * @brief char precedente
	 *
	 * @return int
	 */
	int precedence(char);

	/**
	 * @brief elemento precedente
	 *
	 * @return int
	 */
	int precedence1(string);

	/**
	 * @brief calcular
	 *
	 * @return double
	 */
	double calculate(Apilation<string>);

	/**
	 * @brief ingresar datos
	 *
	 * @return Stack<string>
	 */
	Apilation<string> ingresar_datos();

	/**
	 * @brief invertir pila
	 *
	 * @return Stack<string>
	 */
	Apilation<string> invertir_pila(Apilation<string>);

	/**
	 * @brief copiar pila
	 *
	 * @return Stack<string>
	 */
	Apilation<string> copiar_pila(Apilation<string>);
};