#ifndef CONTRACTUELLE_H
#define CONTRACTUELLE_H

#include <iostream>
#include <string>
#include "employee.h"


class Contractuelle : public Employee
{
private:
int duree_contrat;
double montant_fixe;
public:
    Contractuelle(std::string le_nom, int le_matricule, int duree_du_contrat, double montant_fixe);

    void afficher();

~Contractuelle();

};

#endif // CONTRACTUELLE_H
