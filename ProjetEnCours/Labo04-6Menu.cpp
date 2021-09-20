// But: Afficher à l'écran le menu suivant
/*
a. Addition
b. Soustraction
c. Multiplication
d. Division
e. Quitter le programme

Le programme demande à l'utilisateur et s'assure que le choix est bien compris entre a et e.

Le programe confirme le choix de l'utilisateur en écrivant en toute lettre l'opérateur choisi et réaffiche 
le menu tant que l'utilisateur ne choisit pas de quitter.
*/
// Auteur: Raphaël
// Date: 2021-09-20

#include <iostream>
#include <time.h>

using namespace std; 


void main()
{
   // Déclaration des constantes
  

   // Déclaration des variables
   char choix;

      // On veut afficher le menu toujours en haut de l'écran
      system("cls");

   // On affiche les choix a l'utilisateur
   cout << "a. Addition \n";
   cout << "b. Soustraction \n";
   cout << "c. Multipication \n";
   cout << "d. Division \n";
   cout << "e. Quitter \n";
   cout << "Veuillez entrer votre choix: ";
   cin >> choix;


   while (choix != 'e')

   {
      if (choix != 'a' && choix != 'b' && choix != 'c' && choix != 'd' && choix != 'e')
      {
         cout << "\nErreur, veuiller entrer une lettre entre a et e \n";
         system("pause");
         system("cls");
      }
      else
      {
         if (choix == 'a')
         {
            cout << "\nVous avez choisi Addition \n \n";
            system("pause");
            system("cls");
         }

         else
         {
            if (choix == 'b')
            {
               cout << "\nVous avez choisi Soustraction \n \n";
               system("pause");
               system("cls");
            }

            else
            {
               if (choix == 'c')
               {
                  cout << "\nVous avez choisi Multiplication \n \n";
                  system("pause");
                  system("cls");
               }

               else
               {
                  if (choix == 'd')
                  {
                     cout << "\nVous avez choisi Division \n \n";
                     system("pause");
                     system("cls");
                  }
               }
            }
         }
      }
     
      cout << "a. Addition \n";
      cout << "b. Soustraction \n";
      cout << "c. Multipication \n";
      cout << "d. Division \n";
      cout << "e. Quitter \n";
      cout << "Veuillez entrer votre choix: ";
      cin >> choix;
   }
   
   cout << "\nVous avez quitter le programme \n \n";

   system("pause");
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




