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
#include <time.h>
#include <math.h>
#include "Labo05FonctionMath.h"

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes


   // D�claration des variables
   double nb;
   double nb1;
   double nb2;

   cout << "Veuillez entrer un nombre pour calculer son carr� : ";
   cin >> nb;

   cout << "Le carr� de " << nb << " est " << calculerCarre(nb) << endl;



   system("pause");
}

//Plan de tests
//
/*







*/
   


   




