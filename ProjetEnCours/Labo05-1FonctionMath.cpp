// But: Utiliser des fonctions existantes et se familiariser avec le vocabulaire des fonctions.
// Demander deux nombres a l'utilisateur : Le premier sera la base et le deuxième la puissance. Le programme appelle une fonction mathématique
// pour calculer la puissance de la base.
// Auteur: Raphaël
// Date: 2021-09-27

#include <iostream>
#include <time.h>
#include <math.h>

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes


   // Déclaration des variables
   double base;
   double puissance;
   double resultat;
   char caractere;

   // Afficher un message pour que l'utilisateur entre les valeurs utilisées
   cout << "Veuillez entrer la valeur de la base: ";
   cin >> base;
   cout << "Veuillez entrer la valeur de la puissance: ";
   cin >> puissance;

   // On calcule le résultat de la base à la puissance en faisant appel à une fonction de la bibliothèque math.h
   // Appel signifie utilisation de la fonction, exécution de la fonction déja existante
   // Arrondi à l'inférieur la baase et arrondir au supérieur la puissance et en faire le calcul
   resultat = pow(base = ceil(base) , puissance = floor(puissance));     //Appel de la fonction


   cout << base << " à la puissance de " << puissance << " donne " << resultat << endl;
   
   cout << base << " à la puissance de " << puissance << " donne " << pow(base, puissance) << endl; //Appel de la fonction pow
   
   // Demander a l'utilisateur un caractère
   cout << "Veuillez entrer un caractère : ";
   cin >> caractere;

   // Le programme indique si le caractère est un chiffre ou une lettre en utilisant des fonctions prédéfinies
   if (isdigit(caractere))
   {
      cout << caractere << " est un chiffre. \n";
   }

   else if (isalpha(caractere))
   {
      cout << caractere << " est une lettre. \n";
   }

   else
   {
      cout << caractere << " n'est ni une lettre ni un chiffre. \n";
   }
   system("pause");


}

//Plan de tests
//
/*







*/
   


   




