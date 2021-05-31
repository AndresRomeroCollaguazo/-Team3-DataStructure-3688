/***********************************************************************
 * Module:  Person.h
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 10:40:28
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Person_h)
#define __Class_Diagram_1_Person_h

class Person
{
public:
   std::string getName(void);
   void setName(std::string newName);
   std::string getLast_name(void);
   void setLast_name(std::string newLast_name);
   int getAge(void);
   void setAge(int newAge);
   int getDni(void);
   void setDni(int newDni);
   Person(std::string _name, std::string _last_name, int _age, int _dni);
   ~Person();
   Person();

protected:
private:
   std::string name;
   std::string last_name;
   int age;
   int dni;


};

#endif