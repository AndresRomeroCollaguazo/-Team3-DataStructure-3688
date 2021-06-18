/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 27/05/2021
Fecha modificación: 27/05/2021*/


#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h

/**
*@file Data.h
*@version 2.0
*@date 17/06/2021
*@autor Grupo 3
*@title Plantillas
*/

template <typename Datum>
class Data
{
public:

    /**
     *@brief Data Constructor vacio de la clase(sobrecarga)
     *@param 
     *@return 
     */
    Data() = default;

    /**
     *@brief Data Constructor que inicializa todos los atributos
     *@param 
     *@return 
     */
    Data(Datum datum_A, Datum datum_B);

    /**
     *@brief get_Datum_A getter de datum_A
     *@param Datum Plantilla
     *@return Datum Plantilla
     */
    Datum get_Datum_A(void);

    /**
     *@brief set_Datum_A setter de datum_A
     *@param Datum Plantilla
     *@return void
     */
    void set_Datum_A(Datum datum_A);

    /**
     *@brief get_Datum_B getter de datum_B
     *@param Datum Plantilla
     *@return Datum Plantilla
     */
    Datum get_Datum_B(void);

    /**
     *@brief set_Datum_B setter de datum_B
     *@param Datum Plantilla
     *@return Datum Plantilla
     */
    void set_Datum_B(Datum datum_B);

    /**
     *@brief ~Data Destructor de la clase
     *@param 
     *@return
     */
    ~Data();
protected:
private:
    Datum datum_A;
    Datum datum_B;
};
#endif