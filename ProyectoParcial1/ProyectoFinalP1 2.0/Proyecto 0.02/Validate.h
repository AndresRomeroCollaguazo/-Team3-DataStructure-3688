#pragma once
class Validate
{
public:
    /**
  * @brief select_Validate Se selecciona por medio de menu el tipo de valor numerico a ingresar
  * @param void
  * @return double
  */
    double select_Validate();

    /**
  * @brief validate_L Validacion de numeros enteros y parte decimal desde el punto a la derecha
  * @param void
  * @return double
  */
    double validate_L();

    /**
  * @brief validate_R  Validacion de numeros decimales desde el punto a la izquierda
  * @param void
  * @return double
  */
    double validate_R();

    friend class Control;
private:
};

