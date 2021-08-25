/*********************************************************************************************
** Universidad de las Fuerzas Armadas "ESPE"
** Ing. de Software
** Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
** Proyecto Reinas
** Fecha creación : 21 / 07 / 2021
** Fecha de modificación : 24 / 07 / 2021
*********************************************************************************************/
#pragma once

class Reinas{
    public:
    /**
      * @brief Comprobar valida para que las reinas no se esten apuntando
      * @return int retorna el argumento de verdad de dicha comprobacion
      */
    bool comprobar(int);
    /**
      * @brief mostrarTablero genera un tablero que muestra las posiciones el espacio.
      * @return int retorna tablero matriz
      */
    void mostrarTablero( int);
    /**
      * @brief colocarReina ubica una reina en una posicion y acomoda a las demas.
      * @return int 
      */
    void colocarReina(int);
    /**
      * @brief validateInt valida para que solo se pueda ingresar numeros validas
      * @return retorna el argumento de verdad de dicha validacion
      */
    int validateInt();
    /**
      * @brief Reinas() genera un constructor con int & int*
      * @return constructor
      */
    Reinas(int* , int);
    /**
      * @brief mostrarSolucionFinal genra en texto lo desarrollado en el tablero
      * @return void
      */
    void mostrarSolucionFinal();

    private:
    int* reinas;
    int n;
    int cont = 0;

};