#include "employee.h"

Employee::Employee(std::string le_nom, int le_matricule)
{
    this->nom = le_nom;
    this->matricule = le_matricule;
}

Employee::~Employee(){
    }
    
std::string Employee::getNom() {
return this->nom;
}
std::string Employee::setNom() {
return this->nom;
}
int Employee::getMatricule() {
return this->matricule;
}
int Employee::setMatricule() {
    return this->matricule;
}
void Employee::afficher() {
std::cout << "ERREUR ! Il est impossible d'afficher une employee.";
std::cout << std::endl;
}