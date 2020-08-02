#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <iostream>
#include <string>

class Employee{
  protected:
  std::string nom;
  int matricule;
  double paie_brute, impots_CA, impots_QC, paie_nette;
  const double TAUX_IMPOTS_CA = 0.15;   //Taux CA de 15%
  const double TAUX_IMPOTS_QC = 0.15;   //Taux QCde 15%
  public:
  Employee(std::string le_nom, int le_matricule);
  virtual ~Employee(){std::cout << " - Employee détruite!" << std::endl;};

  //std::string getNom();
  //int getMatricule();
  //std::string setNom();
  //int setMatricule();
  virtual double getPaie()=0;
  virtual double getImpotsCA()=0;
  virtual double getImpotsQC()=0;
};

#endif