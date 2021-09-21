// But: Demander à l'utilisateur deux nombres entiers, un pour la hauteur et un autre pour la longueur.
// Le programme dessine un rectangle aux dimensions fournies par l'utilisateur
/*
Par exemple : La hauteur est de 7
le programme dessine le rectangle suivant:
*
**
***
****
*****
******
*******
*/
// Auteur: Raphaël
// Date: 2021-09-20

#include <iostream>
#include <time.h>

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");
      
   // Déclaration des constantes


   // Déclaration des variables
   int hauteur;
   int variable;
   int longueur = 0;
   cout << "Veuillez entrer la hauteur du triangle : ";
   cin >> hauteur;

   for (int compteurH = 0; compteurH < hauteur; compteurH++)
   {
      ++longueur;
      for (int compteurL = 0; compteurL < longueur; compteurL++)
      {
         cout << "*";
      }
      cout << 
         endl;
   }


   system("pause");
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




