// But: Tester toutes les fonctions de notre bibliothèque
// Auteur: Raphaël
// Date: 2021-09-27

#include <iostream>
#include "Calculs.h"

using namespace std; 


int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes
   const int MAXAGE = 130;
   const int MINAGE = 0;
   const int MAXDIM = 100;
   const int MINDIM = 0;
  
   // Déclaration des variables
   int nb;
   /*
   int jour;
   int mois;
   int annee;
   */
   double nb1;
   double nb2;
   /*
   double nb3;
   double resultat;
   */

   /*
   // Demander à l'utilisateur l'age et la catégorie et voir si les deux valeurs sont exactes
   cout << "Veuillez entrer votre âge: ";
   cin >> nb;
   cout << validerAge(nb) << endl;
   */

   nb = retournerValeur(MINAGE, MAXAGE, "âge");

   nb = retournerValeur(MINDIM, MAXDIM, "dimension");

   // Demander à l'utilisateur l'age et la catégorie et voir si les deux valeurs sont exactes
   /*cout << "Veuillez entrer votre age: ";
   cin >> nb1;
   cout << "Veuillez entrer la catégorie: ";
   cin >> nb2;
   cout << validerAgeCat(nb1, nb2) << endl;
   */

   /*
   // Demander à l'utilisateur l'age et rentre la valeur dans une variable
   cout << "Quel est votre age: ";
   cin >> nb;

   // Utiliser une fonction pour determiner l'âge
   cout << "Votre catégorie d'age: " << determinerGroupeAge(nb);
   */

   /*
   cout << " ======== Test de la fonctin qui dit oui ou non le nombre passé en paramètre est pair ========\n";
   
   cout << "Veuillez entrer un nombre entier: ";
   cin >> nb;
   if (verifierParite(nb))
   {
      cout << nb << " est pair\n";
   }
   else
   {
      cout << nb << " est impair\n";
   }
   */
   
   
   
   
   //Demander a l'utitlisateur trois informations sur la date : jour, mois et année
   /*
   cout << "Veuillez entrer un numéron de jour(1-31) : ";
   cin >> jour;

   cout << "Veuillez entrer un numéro de mois (1-12) : ";
   cin >> mois;

   cout << "Veuillez entrer un numéro d'année : ";
   cin >> annee;
   
   afficherDateLongue(jour, mois, annee);
   */

   // appel de la fonction afficher date en toute lettre: 30, 9, 2021 ==> 30 septembre 2021
   
   
   // Demander à l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres
   // qui sont passés en paramètre à la fonction

   /*
   cout << "Veuillez entrer un premier nombre: ";
   cin >> nb1;
   cout << "Veuillez entrer un deuxième nombre: ";
   cin >> nb2;
   cout << "Veuillez entrer un dernier nombre: ";
   cin >> nb3;

   cout << "le plus grand nombre est: " << calculerMax(nb1, nb2, nb3) << endl;
   */

   /*cout << "Veuillez entrer un nombre: ";
   cin >> nb;
   cout << calculerFactorielle(nb) << endl;
   */

   system("pause");
   return 0;
}
//Plan de tests

   


   




