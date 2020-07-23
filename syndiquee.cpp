#include "syndiquee.h"

Syndiquee::Syndiquee(std::string le_nom, int le_matricule, double salaire, double nbHeures): Employee(le_nom, le_matricule)
{
this->salaire = salaire;
this->nbHeures = nbHeures;
}
void Syndiquee::afficher() {
std::cout<<"Nom de l'employee syndiquee : "<<nom << std::endl;
std::cout<<"Matricule : " << matricule << std::endl;
std::cout << "Elle est syndiquee au taux de "<< this->salaire << "$/h."<< std::endl; 
std::cout << "Elle est travaillee "<< this->nbHeures<<" heures durant la semaine." << std::endl;
std::cout << "Son salaire total ppour la semaine est de : "<< salaire*nbHeures <<"$"<< std::endl;
std::cout<<"****************************************"<< std::endl;
}

Syndiquee::~Syndiquee()
{
}
