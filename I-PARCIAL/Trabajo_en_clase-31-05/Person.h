/* Universidad de las Fuerzas Armadas "ESPE"
Software
Autores : Cantuña Michelle, Medina Martín, Pérez Hamilton, Romero Jorge y Valarezo Andrés
Taller de clases
Fecha creación : 31 / 05 / 2021
Fecha de modificación : 31 / 05 / 2021 */

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
