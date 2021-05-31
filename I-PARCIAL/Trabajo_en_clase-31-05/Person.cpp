/***********************************************************************
 * Module:  Person.cpp
 * Author:  avand
 * Modified: lunes, 31 de mayo de 2021 10:40:28
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"

////////////////////////////////////////////////////////////////////////
// Name:       Person::getName()
// Purpose:    Implementation of Person::getName()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::getName(void)
{
   return name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setName(std::string newName)
// Purpose:    Implementation of Person::setName()
// Parameters:
// - newName
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setName(std::string newName)
{
   name = newName;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getLast_name()
// Purpose:    Implementation of Person::getLast_name()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Person::getLast_name(void)
{
   return last_name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setLast_name(std::string newLast_name)
// Purpose:    Implementation of Person::setLast_name()
// Parameters:
// - newLast_name
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setLast_name(std::string newLast_name)
{
   last_name = newLast_name;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getAge()
// Purpose:    Implementation of Person::getAge()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Person::getAge(void)
{
   return age;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setAge(int newAge)
// Purpose:    Implementation of Person::setAge()
// Parameters:
// - newAge
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setAge(int newAge)
{
   age = newAge;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::getDni()
// Purpose:    Implementation of Person::getDni()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Person::getDni(void)
{
   return dni;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::setDni(int newDni)
// Purpose:    Implementation of Person::setDni()
// Parameters:
// - newDni
// Return:     void
////////////////////////////////////////////////////////////////////////

void Person::setDni(int newDni)
{
   dni = newDni;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person(std::string _name, std::string _last_name, int _age, int _dni)
// Purpose:    Implementation of Person::Person()
// Parameters:
// - _name
// - _last_name
// - _age
// - _dni
// Return:     
////////////////////////////////////////////////////////////////////////

Person::Person(std::string _name, std::string _last_name, int _age, int _dni)
{
   this->name=_name;
   this->last_name=_last_name;
   this->age=_age;
   this->dni=_dni;
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::~Person()
// Purpose:    Implementation of Person::~Person()
// Return:     
////////////////////////////////////////////////////////////////////////

Person::~Person()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Person::Person()
// Purpose:    Implementation of Person::Person()
// Return:     
////////////////////////////////////////////////////////////////////////

Person::Person()
{
}