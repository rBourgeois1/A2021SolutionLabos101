// But: Afficher � l'�cran le menu suivant
/*
a. Addition
b. Soustraction
c. Multiplication
d. Division
e. Quitter le programme

Le programme demande � l'utilisateur et s'assure que le choix est bien compris entre a et e.

Le programe confirme le choix de l'utilisateur en �crivant en toute lettre l'op�rateur choisi et r�affiche 
le menu tant que l'utilisateur ne choisit pas de quitter.
*/
// Auteur: Rapha�l
// Date: 2021-09-20

#include <iostream>
#include <time.h>

using namespace std; 


void main()
{
   // D�claration des constantes
  

   // D�claration des variables
   char choix;

      // On veut afficher le menu toujours en haut de l'�cran
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

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




