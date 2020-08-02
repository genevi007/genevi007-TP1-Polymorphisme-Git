#ifndef __SYNDIQUEE_H__
#define __SYNDIQUEE_H__

#include <iostream>
#include <string>
#include "employee.h"

class Syndiquee : public Employee{
  private:
    double salaireH, nbHeures;
  public:
    Syndiquee(std::string le_nom, int le_matricule, double salaireH, double nbHeures);
    ~Syndiquee(){std::cout << " - Syndiquee détruite!"<< std::endl;}

    double getPaie();
    double getImpotsCA();
    double getImpotsQC();
};

#endif