/**
  * @file Datum.h
  * @version 1.0
  * @date 06-06-2021
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
	  * @brief getDatum Devuelve el contenido del atributo datum
	  * @return Devuelve el atributo datum
	  */
   double getDatum(void);
   /**
	  * @brief setDatum Setea el contenido del atributo datum
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

protected:
private:
   double datum;


};

#endif