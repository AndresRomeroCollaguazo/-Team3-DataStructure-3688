/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Deber de Funciones Trigonometricas
Fecha creación: 04/06/2021
Fecha de modificación: 06/06/2021 */
/**
  * @file Operation.h
  * @version 1.0
  * @date 06-06-2021
  * @author Michelle Alexandra Cantuna
  * @brief funcion seno con recursividad
  * @title SenoRecursividad
  *
  */
#pragma once
  /**
	  * @brief Clase Datum que contiene el dato a calcular
	  */
class Datum {
private:
	double datum;

public:
	/**
	  * @brief getDatum Devuelve el contenido del atributo datum
	  * @return Devuelve el atributo datum
	  */
	double getDatum(void);
	/**
	  * @brief setDatum Recibe el contenido del atributo datum
	  * @param newDatum coloca un nuevo dato en el atributo
	  */
	void setDatum(double newDatum);
	/**
	  * @brief Constructor de la clase Datum
	  * @param _datum atributo nuevo del objeto
	  */
	Datum(double _datum);
	/**
	 * @brief Destructor de la clase Datum
	 */
	~Datum();
};