// But:
/*

*/
// Auteur: Rapha�l
// Date: 2021-09-23

#include <iostream>
#include <time.h>

using namespace std;


void main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes
   const double ARGENTPARHEURE = 14.5;
   const double ARGENTAJOUTE = 1.5;
   const double ARGENTPARHEUREDEMI = ARGENTPARHEURE * ARGENTAJOUTE;
   const double POURCENTAGECOMMISSION = 0.057;
   const double VENTECOMMISSION = 10000;
   const double ARGENTD�BUTCOMMISSION = 250;
   // D�claration des variables
   int nbHeure;
   int choix;
   int argent;
   int nbcommission;

// TODO : Afficher un menu pour choisir le type de travailleur
   cout << "Veuillez choisir le type de travailleur : \n1: Employ� Cadre\n2: Employ� Horaire\n3: Employ� Commission\n4: Employ� Pi�ce\n";

// TODO : Lire le choix de l'utilisateur
   cin >> choix;


// TODO : S'assurer que le choix de l'utilisateur est correct
   while
   switch (choix)
   {
   case 1: 
      cout << "Vous avez choisi Employ� Cadre. Veuillez entrer le nombre d'heures: ";
      cin >> nbHeure;
      argent = nbHeure* ARGENTPARHEURE; 
      cout << "Vous avez gagn�: " << 
      break;
   case 2: 
      cout << "Vous avez choisi Employ� Horaire. Veuillez entrer le nombre d'heures: ";
      cin >> nbHeure;
      if (nbHeure > 40)
      {
         cin >> nbHeure;
         argent = nbHeure * ARGENTPARHEUREDEMI;
      }
      else
      {
         argent = nbHeure * ARGENTPARHEURE;
      } 
      cout << "Vous avez gagn�: " << nbHeure;
      break;
   case 3: 
      cout << "Vous avez choisi Employ� Commission. Veuillez entrer le nombre de commissions: ";
      cin >> nbcommission;
      argent = nbcommission * VENTECOMMISSION + ARGENTD�BUTCOMMISSION;
      cout << "Vous avez gagn�: " << argent;

      cout << "Vous avez gagn�: " << nbHeure;
      break;
   case 4:
      cout << "Vous avez choisi Employ� Pi�ce. Veuillez entrer le nombre d'heures: ";
      cin >> nbHeure;

      cout << "Vous avez gagn�: " << nbHeure;
      break;
   }
// TODO : Tant que l'utilisateur ne veut pas quitter le programme



// TODO : Selon le type de travailleur, demander les infos suppl�mentaires et calculer le salaire



// TODO : Offrir de nouveau le menu, lire le choix et le valider




// TODO : Fin du programme
   
   system("pause");
}

//Plan de tests         �cran 
// 
   /*




   */








