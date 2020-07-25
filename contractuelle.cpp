#include "contractuelle.h"

Contractuelle::Contractuelle(std::string le_nom, int le_matricule, int duree_du_contrat, double montant_fixe_contrat): Employee(le_nom, le_matricule)
{
    this->duree_contrat = duree_du_contrat;
    this->montant_fixe = montant_fixe_contrat;
}

void Contractuelle::afficher() {
std::cout << "Contractuelle pour ";
std::cout << this->duree_contrat;
std::cout << " semaines" << std::endl;

std::cout<<"Nom de l'employee contractuelle : "<<nom  <<" Matricule : " << matricule << std::endl;
std::cout << "Elle est Contractuelle pour "<< this->duree_contrat << " semaines."<< std::endl; 
std::cout << "Le montant total de son contrat est de "<< this->montant_fixe<<"$." << std::endl;
std::cout << "Son salaire total brute pour la semaine est de : "<< montant_fixe/duree_contrat <<"$."<< std::endl;
std::cout<<"****************************************"<< std::endl;
}

Contractuelle::~Contractuelle()
{
       std::cout << "Employee contractuelle detruite."<< std::endl; 
}

