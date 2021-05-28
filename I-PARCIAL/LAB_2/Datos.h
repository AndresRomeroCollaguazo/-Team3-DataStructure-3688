/***********************************************************************
 * Module:  Datos.h
 * Author:  avand
 * Modified: miércoles, 26 de mayo de 2021 15:38:43
 * Purpose: Declaration of the class Datos
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
template <typename Dato>
class Datos
{
public:
	Datos() = default;

	Datos(Dato datoA, Dato datoB);
	Dato getDatoA(void);
	 void setDatoA(Dato datoA);
   Dato getDatoB(void);
   void setDatoB(Dato datoB);
   
   
   ~Datos();

protected:
private:
   Dato datoA;
   Dato datoB;
};



#endif
