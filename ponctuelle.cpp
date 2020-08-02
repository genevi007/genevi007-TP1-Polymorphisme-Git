#include "ponctuelle.h"

Ponctuelle::Ponctuelle(std::string nom, int matricule, double la_paye) : Employee(nom, matricule){
  this->paye = la_paye;
  
  paie_brute = this->paye;
  impots_CA = paie_brute*this->TAUX_IMPOTS_CA;
  impots_QC = paie_brute*this->TAUX_IMPOTS_QC;
  paie_nette = paie_brute-impots_CA-impots_QC;
}

double Ponctuelle::getPaie(){
  std::cout << nom << " " << matricule << std::endl;
  std::cout << " Paie brute de " << paie_brute << " $"<< std::endl;
  std::cout << " Impots CA de " << impots_CA << " $"<< std::endl; 
  std::cout << " Impots QC de " << impots_QC << " $"<< std::endl; 
  std::cout << " Paie nette de " << paie_nette << " $"<< std::endl; 

  return paie_brute;
}

double Ponctuelle::getImpotsCA(){
  return impots_CA;
}

double Ponctuelle::getImpotsQC(){  
  return impots_QC;
}