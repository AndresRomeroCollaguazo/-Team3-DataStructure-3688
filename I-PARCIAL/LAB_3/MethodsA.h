/***********************************************************************
/*Universidad de las Fuerzas Armadas "ESPE"
Software
Autores: Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de Operadores Sobrecargados
Fecha creación: 26/05/2021
Fecha modificación: 27/05/2021*/

#if !defined(__Class_Diagram_1_Metodos_h)
#define __Class_Diagram_1_Metodos_h
class Methods
{
public:
   double get_Value_B(void);
   void set_Value_B(double new_Value_B);
   int get_Value_A(void);
   void set_Value_A(int new_Value_A);
   float get_Value_C(void);
   void set_Value_C(int new_Value_C);
   Methods()= default;
   Methods(int new_Value_A, double new_Value_B,float new_Value_C);
   double multiplication(int value);
   double multiplication(double value_A, int value_B);
   double multiplication(float value_A, double value_B, int value_C);
protected:
private:
   int value_A;
   double value_B;
   float value_C;
};

#endif