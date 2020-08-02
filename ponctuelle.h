#ifndef __PONCTUELLE_H__
#define __PONCTUELLE_H__

#include <iostream>
#include <string>
#include "employee.h"

class Ponctuelle : public Employee{
  private:
    double paye;
  public:
    Ponctuelle(std::string le_nom, int le_matricule, double paye);
    ~Ponctuelle(){std::cout << " - Ponctuelle détruite!"<< std::endl;}
    
    double getPaie();
    double getImpotsCA();
    double getImpotsQC();
};

#endif