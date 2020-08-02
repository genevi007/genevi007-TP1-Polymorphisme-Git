#include "syndiquee.h"

Syndiquee::Syndiquee(std::string nom, int matricule, double salaire, double nbHeures) : Employee(nom, matricule){
  this->salaireH = salaire;
  this->nbHeures = nbHeures;

  paie_brute = salaire*nbHeures;
  impots_CA = paie_brute*TAUX_IMPOTS_CA;
  impots_QC = paie_brute*TAUX_IMPOTS_QC;
  paie_nette = paie_brute-impots_CA-impots_QC;
}

double Syndiquee::getPaie(){
  std::cout << nom << " " << matricule << std::endl;
  std::cout << " Paie brute de " << paie_brute << " $"<< std::endl;
  std::cout << " Impots CA de " << impots_CA << " $"<< std::endl; 
  std::cout << " Impots QC de " << impots_QC << " $"<< std::endl; 
  std::cout << " Paie nette de " << paie_nette << " $"<< std::endl; 

  return paie_brute;
}

double Syndiquee::getImpotsCA(){
  return impots_CA;
}

double Syndiquee::getImpotsQC(){
  return impots_QC;
}