// But: Utiliser des fonctions existantes et se familiariser avec le vocabulaire des fonctions.
// Demander deux nombres a l'utilisateur : Le premier sera la base et le deuxi�me la puissance. Le programme appelle une fonction math�matique
// pour calculer la puissance de la base.
// Auteur: Rapha�l
// Date: 2021-09-27

#include <iostream>
#include <time.h>
#include <math.h>

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes


   // D�claration des variables
   double base;
   double puissance;
   double resultat;
   char caractere;

   // Afficher un message pour que l'utilisateur entre les valeurs utilis�es
   cout << "Veuillez entrer la valeur de la base: ";
   cin >> base;
   cout << "Veuillez entrer la valeur de la puissance: ";
   cin >> puissance;

   // On calcule le r�sultat de la base � la puissance en faisant appel � une fonction de la biblioth�que math.h
   // Appel signifie utilisation de la fonction, ex�cution de la fonction d�ja existante
   // Arrondi � l'inf�rieur la baase et arrondir au sup�rieur la puissance et en faire le calcul
   resultat = pow(base = ceil(base) , puissance = floor(puissance));     //Appel de la fonction


   cout << base << " � la puissance de " << puissance << " donne " << resultat << endl;
   
   cout << base << " � la puissance de " << puissance << " donne " << pow(base, puissance) << endl; //Appel de la fonction pow
   
   // Demander a l'utilisateur un caract�re
   cout << "Veuillez entrer un caract�re : ";
   cin >> caractere;

   // Le programme indique si le caract�re est un chiffre ou une lettre en utilisant des fonctions pr�d�finies
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
   


   




