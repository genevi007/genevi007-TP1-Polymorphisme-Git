#include <iostream>
#include <string>

#include "employee.h"
#include "contractuelle.h"
#include "ponctuelle.h"
#include "syndiquee.h"

int main() {
  int choix = 0, matricule = 0;
  std::string nom = "";
  Employee* employee[250];
  int nb_employee=0;
  double totaux_paies=0, totaux_impotsCA=0, totaux_impotsQC=0;

  std::cout << "GESTION DE PAIE - ABC INC." << std::endl;
  std::cout << "**************************";
  do {// Menu employee
    std::cout << std::endl << "Faites votre choix : " << std::endl;
    std::cout << " 1 - Ajouter unE employéE syndiquéE" << std::endl;
    std::cout << " 2 - Ajouter unE employéE contractuelLE" << std::endl;
    std::cout << " 3 - Ajouter unE employéE ponctuelLE" << std::endl;
    std::cout << " 4 - Afficher le résultat de la paie d'employéEs entréEs" << std::endl;
    std::cout << " 0 - Quitter"<< std::endl;
    std::cout << std::endl << "Votre choix : ";
    std::cin >> choix;

    if (choix==1 || choix==2 || choix==3)  {       // Informations sur les employéEs.
      std::cout << " Nom de l'employéE : ";
      std::cin >> nom;
      do{
        std::cout << " Numéro matricule de l'employéE : ";
        std::cin >> matricule;
        if(matricule<10000 || matricule>99999)
        std::cout << "Erreur! Le numéro de matricule doit-être entre 10000 et 99999." << std::endl;
      }while (matricule<10000 || matricule>99999); 
    }else if(choix==4 && nb_employee==0)
      std::cout << std::endl << " *ERREUR! Au moins unE employéE doit exister" << std::endl;
    else if (choix==0) 
      std::cout << std::endl << " Bye! Bye!" << std::endl;
    else if (choix <0 && choix>4)
      std::cout << std::endl << " *ERREUR! Faites un choix entre 0 et 4." << std::endl;
      
    switch(choix){
      case 1:{                // EmployéE SyndiquéE
        double salaire=0;
        double nbHeures=0;
        std::cout << " Salaire horaire de l'employéE syndiquéE : ";
        std::cin >> salaire;
        std::cout << " Nombre d'heures travaillées : ";
        std::cin >> nbHeures;
        employee[nb_employee] = new Syndiquee(nom,matricule,salaire,nbHeures);
        nb_employee++;
        break;
      }

      case 2:{      // EmployéE ContractuelLE
        double montant_fixe=0;
        int duree_contrat=0;
        std::cout << " Montant du contrat de l'employéE contractuelLE : ";
        std::cin >> montant_fixe;
        std::cout << " Nombre de semaines travaillées : ";
        std::cin >> duree_contrat;
        employee[nb_employee] = new Contractuelle(nom,matricule,duree_contrat,montant_fixe);
        nb_employee++;
        break;
      }

      case 3:{        // EmployéE PonctuelLE
        double paye=0;
        std::cout << " Montant payé à l'employéE ponctuelLE : ";
        std::cin >> paye;
        employee[nb_employee] = new Ponctuelle(nom,matricule,paye);
        nb_employee++;
        break;
      }

      case 4:{        // Afficher les employéEs
        std::cout << std::endl;
        for (int i=0 ; i<nb_employee ; i++) {
          totaux_paies = totaux_paies + employee[i]->getPaie();
          totaux_impotsCA = totaux_impotsCA + employee[i]->getImpotsCA();
          totaux_impotsQC = totaux_impotsQC + employee[i]->getImpotsQC();
        }
        if(nb_employee>0){
          std::cout << std::endl;
          std::cout << "Totaux" << std::endl;
          std::cout << " Montants totaux versés de " << totaux_paies << " $" << std::endl;
          std::cout << " Impots à transferer CA de " << totaux_impotsCA << " $" << std::endl;
          std::cout << " Impots à transferer QC de " << totaux_impotsQC << " $" << std::endl;
        }
        break;
      }
    }
  }while(choix !=0);

  for (int i=0 ; i<nb_employee ; i++) {  // Supprimer employées créées dynamiquement
    delete employee[i];
  }
}