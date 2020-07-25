#ifndef PONCTUELLE_H
#define PONCTUELLE_H

#include <iostream>
#include <string>
#include "employee.h"

class Ponctuelle : public Employee
{
private:
double paye;
public:
    Ponctuelle(std::string le_nom, int le_matricule, double paye);
    void afficher();
   
 ~Ponctuelle();

};

#endif // PONCTUELLE_H
