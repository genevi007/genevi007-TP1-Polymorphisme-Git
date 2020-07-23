#ifndef SYNDIQUEE_H
#define SYNDIQUEE_H

#include <iostream>
#include <string>
#include "employee.h"

class Syndiquee : public Employee
{
private:
double salaire;
double nbHeures;
public:
    Syndiquee(std::string le_nom, int le_matricule, double salaire, double nbHeures);
    void afficher();
    ~Syndiquee();

};

#endif // SYNDIQUEE_H