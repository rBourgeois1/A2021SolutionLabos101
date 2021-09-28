// But: Cr�er notre propre fonction qui calcule la racine carr�e d'un nombre
/*
1. Il faut cr�er notre biblioth�que
2. Dans la biblioth�que, il faut cr�er le prototype de la fonction : mode d'emploi, comment utiliser la fonction,
   savoir son nom et les param�tres dont elle a besoin.
3. Il faut cr�er la defintion de la fonction : dire les instructions que la fonction doit ex�cuter
4. Il faut appeler la fonction pour valider ou tester son fonctionnement
*/
// Auteur: Rapha�l
// Date: 2021-09-27

#include <iostream>
#include "Calculs.h"

using namespace std; 


int main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes


   // D�claration des variables
   double nb1;
   double nb2;
   double nb3;
   double resultat;

   cout << " -------- Test de la fonction calculerMax --------\n";
   // Demander � l'utilisateur 3 nombres et appeler la fonction calculerMax qui retourne le plus grand des 3 nombres
   // qui sont pass�s en param�tre � la fonction

   cout << "Veuillez entrer un premier nombre: ";
   cin >> nb1;
   cout << "Veuillez entrer un deuxi�me nombre: ";
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
   


   




