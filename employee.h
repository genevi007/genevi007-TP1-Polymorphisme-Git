#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
protected:
std::string nom;
int matricule;

public:
Employee(std::string le_nom, int le_matricule);

//Employee(int le_matricule);

std::string getNom();
std::string setNom();
int getMatricule();
int setMatricule();

virtual void afficher()= 0;

virtual ~Employee();
};

#endif // EMPLOYEE_H
