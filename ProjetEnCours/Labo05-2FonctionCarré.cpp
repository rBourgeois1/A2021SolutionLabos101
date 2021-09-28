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
#include <time.h>
#include <math.h>
#include "Labo05FonctionMath.h"

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes


   // Déclaration des variables
   double nb;
   double nb1;
   double nb2;

   cout << "Veuillez entrer un nombre pour calculer son carré : ";
   cin >> nb;

   cout << "Le carré de " << nb << " est " << calculerCarre(nb) << endl;



   system("pause");
}

//Plan de tests
//
/*







*/
   


   




