// But: Tester toutes les fonctions de notre biblioth�que
// Auteur: Rapha�l
// Date: 2021-09-27

#include <iostream>
#include "Calculs.h"

using namespace std; 


int main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes
   const int MAXAGE = 130;
   const int MINAGE = 0;
   const int MAXDIM = 100;
   const int MINDIM = 0;
  
   // D�claration des variables
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
   // Demander � l'utilisateur l'age et la cat�gorie et voir si les deux valeurs sont exactes
   cout << "Veuillez entrer votre �ge: ";
   cin >> nb;
   cout << validerAge(nb) << endl;
   */

   nb = retournerValeur(MINAGE, MAXAGE, "�ge");

   nb = retournerValeur(MINDIM, MAXDIM, "dimension");

   // Demander � l'utilisateur l'age et la cat�gorie et voir si les deux valeurs sont exactes
   /*cout << "Veuillez entrer votre age: ";
   cin >> nb1;
   cout << "Veuillez entrer la cat�gorie: ";
   cin >> nb2;
   cout << validerAgeCat(nb1, nb2) << endl;
   */

   /*
   // Demander � l'utilisateur l'age et rentre la valeur dans une variable
   cout << "Quel est votre age: ";
   cin >> nb;

   // Utiliser une fonction pour determiner l'�ge
   cout << "Votre cat�gorie d'age: " << determinerGroupeAge(nb);
   */

   /*
   cout << " ======== Test de la fonctin qui dit oui ou non le nombre pass� en param�tre est pair ========\n";
   
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
   
   
   
   
   //Demander a l'utitlisateur trois informations sur la date : jour, mois et ann�e
   /*
   cout << "Veuillez entrer un num�ron de jour(1-31) : ";
   cin >> jour;

   cout << "Veuillez entrer un num�ro de mois (1-12) : ";
   cin >> mois;

   cout << "Veuillez entrer un num�ro d'ann�e : ";
   cin >> annee;
   
   afficherDateLongue(jour, mois, annee);
   */

   // appel de la fonction afficher date en toute lettre: 30, 9, 2021 ==> 30 septembre 2021
   
   
   // Demander � l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres
   // qui sont pass�s en param�tre � la fonction

   /*
   cout << "Veuillez entrer un premier nombre: ";
   cin >> nb1;
   cout << "Veuillez entrer un deuxi�me nombre: ";
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

   


   




