#include <iostream>
#include <string>
#include "employee.h"
#include "contractuelle.h"
#include "ponctuelle.h"
#include "syndiquee.h"

int main() {
int choix = 0;
int matricule = 0;
std::string nom = "";
Employee* employee[250];
int nb_employee=0;

std::cout << "Bienvenu dans le logiciel de Gestion de paie! " << std::endl;
do {
// Menu employee
std::cout << "Choisissez une option parmis les suivantes : " << std::endl;
std::cout << " 1. Ajouter une employee syndiquee" << std::endl;
std::cout << " 2. Ajouter une employee contractuelle" << std::endl;
std::cout << " 3. Ajouter une employee ponctuelle" << std::endl;
std::cout << " 4. Afficher le resultat de la paie de la semaine pour les employees entrees" << std::endl;
std::cout << " 0. Quitter"<< std::endl;
std::cout << "Votre choix : ";
std::cin >> choix;
// Informations sur les employees.
if (choix !=0 && choix !=4) {
std::cout << "Quelle est le nom de famille de l'employee : ";
std::cin >> nom;
std::cout << "Quelle est le numero de matricule de l'employee : ";
std::cin >> matricule;
}
switch(choix) {
case 1:
{
double salaire=0.0;
double nbHeures=0.0;
// créer une employée syndiquée
std::cout << "Quelle est le salaire (/h) de cette employee : ";
std::cin >> salaire;
std::cout << "Quelle est le nombre d'heures travaillee par cette employee durant la semaine : ";
std::cin >> nbHeures;

employee[nb_employee] = new Syndiquee(nom,matricule,salaire,nbHeures);
nb_employee++;
break;
}
case 2:
{
double montant_fixe=0.0;
int duree_contrat=0;
// créer une employée contractuelle
std::cout << "Quelle est le montant du contrat de cette employee : ";
std::cin >> montant_fixe;
std::cout << "Quelle est le nombre de semaines du contrat : ";
std::cin >> duree_contrat;

employee[nb_employee] = new Contractuelle(nom,matricule,duree_contrat,montant_fixe);
nb_employee++;
break;
}
case 3:
{
double paye=0;
    // créer une employée ponctuelle
std::cout << "Quelle est le montant de la paye de cette employee ponctuelle : ";
std::cin >> paye;

employee[nb_employee] = new Ponctuelle(nom,matricule,paye);
nb_employee++;
break;
}
case 4:
{
// Afficher les employées
for (int i=0 ; i<nb_employee ; i++) {
employee[i]->afficher();
}
// Effacer les formes créées dynamiquement
for (int i=0 ; i<nb_employee ; i++) {
delete employee[i];
}
break;
}
}
} while(choix !=0);
// TODO quitter
}