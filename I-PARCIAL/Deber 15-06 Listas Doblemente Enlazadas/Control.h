/***********************************************************************
 * Module:  Control.h
 * Author:  Jorge
 * Modified: martes, 15 de junio de 2021 16:33:57
 * Purpose: Declaration of the class Control
 ***********************************************************************/

#if !defined(__UML_Class_Diagram_2_Control_h)
#define __UML_Class_Diagram_2_Control_h

class Control
{
public:
   void view(void);
   int gotoxy(USHORT x, USHORT y);
   int use_Menu(const char title[], const char* opciones[], int n);
   char* only_Int_Control(const char* value);
   char only_Char_Control(void);

protected:
private:

};

#endif