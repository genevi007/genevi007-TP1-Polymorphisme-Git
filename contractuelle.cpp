#include "contractuelle.h"

Contractuelle::Contractuelle(std::string nom, int matricule, int duree_du_contrat, double montant_fixe_contrat) : Employee(nom,matricule){
  this->duree_contrat = duree_du_contrat;
  this->montant_fixe = montant_fixe_contrat;

  paie_brute = this->montant_fixe/this->duree_contrat;
  impots_CA = paie_brute*this->TAUX_IMPOTS_CA;
  impots_QC = paie_brute*this->TAUX_IMPOTS_QC;
  paie_nette = paie_brute-impots_CA-impots_QC;
}

double Contractuelle::getPaie(){
  std::cout << nom << " " << matricule << std::endl;
  std::cout << " Paie brute de " << paie_brute << " $"<< std::endl;
  std::cout << " Impots CA de " << impots_CA << " $"<< std::endl; 
  std::cout << " Impots QC de " << impots_QC << " $"<< std::endl; 
  std::cout << " Paie nette de " << paie_nette << " $"<< std::endl;

  return paie_brute;
}

double Contractuelle::getImpotsCA(){
  return impots_CA;
}

double Contractuelle::getImpotsQC(){
  return impots_QC;
}