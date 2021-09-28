// But: Créer notre propre fonction qui calcule la racine carrée d'un nombre
/*
1. Il faut créer notre bibliothèque
2. Dans la bibliothèque, il faut créer le prototype de la fonction : mode d'emploi, comment utiliser la fonction,
   savoir son nom et les paramètres dont elle a besoin.
3. Il faut créer la defintion de la fonction : dire les instructions que la fonction doit exécuter
4. Il faut appeler la fonction pour valider ou tester son fonctionnement
*/
// Auteur: Raphaël
// Date: 2021-09-27

#include <iostream>
#include "Calculs.h"

using namespace std; 


int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes


   // Déclaration des variables
   double nb1;
   double nb2;
   double nb3;
   double resultat;

   cout << " -------- Test de la fonction calculerMax --------\n";
   // Demander à l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres
   // qui sont passés en paramètre à la fonction

   cout << "Veuillez entrer un premier nombre: ";
   cin >> nb1;
   cout << "Veuillez entrer un deuxième nombre: ";
   cin >> nb2;
   cout << "Veuillez entrer un dernier nombre: ";
   cin >> nb3;

   cout << "le plus grand nombre est: " << calculerMax(nb1, nb2, nb3) << endl;

   system("pause");
   return 0;
}
//Plan de tests
/* nb1   nb2   nb3   max
   8     7     4     8
   6     7     3     7
   4     2     6     6
   3     3     3     3
   5     5     3     5
   -2    -1    -5    -1
*/
   


   




