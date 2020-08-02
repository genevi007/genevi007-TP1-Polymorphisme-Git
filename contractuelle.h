#ifndef __CONTRACTUELLE_H__
#define __CONTRACTUELLE_H__

#include <iostream>
#include <string>
#include "employee.h"

class Contractuelle : public Employee{
  private:
    int duree_contrat;
    double montant_fixe;
  public:
    Contractuelle(std::string le_nom, int le_matricule, int duree_du_contrat, double montant_fixe);
    ~Contractuelle(){std::cout << " - Contractuelle détruite!" << std::endl;}

    double getPaie();
    double getImpotsCA();
    double getImpotsQC();

};

#endif