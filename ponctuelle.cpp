#include "ponctuelle.h"

Ponctuelle::Ponctuelle(std::string le_nom, int le_matricule, double la_paye) : Employee(le_nom, le_matricule)
{
this->paye = la_paye;
}
void Ponctuelle::afficher() {
std::cout<<"Nom de l'employee ponctuelle : "<<nom << std::endl;
std::cout<<"Matricule : " << matricule << std::endl;
std::cout << "Elle est une employee ponctuelle au salaire de:  "<< this->paye << "$"<< std::endl; 
std::cout<<"****************************************"<< std::endl;
}


Ponctuelle::~Ponctuelle()
{
}

