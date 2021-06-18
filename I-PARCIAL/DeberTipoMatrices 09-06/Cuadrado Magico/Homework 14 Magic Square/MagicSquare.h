#pragma once
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle
Deber de Cuadro Magico
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 * /
/ **
*@file Operation.h
* @version 1.0
* @ fecha 08 - 06 - 2021
* @autor Michelle Alexandra Cantuña Chicay
* @brief Cuadrado Magico
* @ título CuboMagico
*
*/
#pragma once

#include<iostream>
/**
   * @brief Clase MagicSquare contiene la funcion de Cuadrado Magico
   */
class MagicSquare {
private:
	int row;
	int column;
public:
	/**
	  * @brief Constructor de la clase MagicSquare
	  */
	MagicSquare() = default;
	/**
	  * @brief get_row Devuelve el contenido del atributo row
	  * @return Devuelve el atributo row
	  */
	int get_row(void);
	/**
	  * @brief set_row Setea el contenido del atributo row
	  * @param new_s1 coloca un nuevo dato en el atributo
	  */
	void set_row(int row);
	/**
	  * @brief get_row Devuelve el contenido del atributo column
	  * @return Devuelve el atributo column
	  */
	int get_column(void);
	/**
	  * @brief set_column Setea el contenido del atributo column
	  * @param new_s2 coloca un nuevo dato en el atributo
	  */
	void set_column(int s2);
	/**
	  * @brief Destructor de la clase MagicSquare
	  */
	~MagicSquare();
	/**
	  * @brief calculateSquareMagic Devuelve el cuadrado magico
	  * @return Devuelve el cuadrado magico
	  */
	void calculateSquareMagic();
	
};