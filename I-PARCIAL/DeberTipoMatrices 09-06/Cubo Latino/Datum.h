/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle
Deber de Cuadro Magico
Fecha creación : 04 / 06 / 2021
Fecha de modificación : 08 / 06 / 2021 */
/**
  * @file Datum.h
  * @version 1.0
  * @date 08-06-2021
  * @author Andres Gerardo Valarezo Correa
  * @brief Clase Datum
  * @title Objeto Datum
  *
  */

#if !defined(__Class_Diagram_1_Datum_h)
#define __Class_Diagram_1_Datum_h
  /**
	  * @brief Clase Datum que contiene el dato a calcular
	  */
class Datum
{
public:
	/**
	  * @brief getVector Devuelve el contenido del atributo vector
	  * @return Devuelve el atributo vector
	  */
   int* getVector(void);
   /**
	  * @brief setVector Setea el contenido del atributo vector
	  * @param newVector coloca un nuevo dato en el atributo
	  */
   void setVector(int* newVector);
   /**
	  * @brief Constructor de la clase Datum
	  * @param _datum atributo nuevo del objeto
	  */
   Datum(int* _vector);
   /**
	  * @brief Destructor de la clase Datum
	  */
   ~Datum();

protected:
private:
   int* vector;


};

#endif
