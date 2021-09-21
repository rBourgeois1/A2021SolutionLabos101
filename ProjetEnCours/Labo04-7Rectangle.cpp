// But: Demander à l'utilisateur deux nombres entiers, un pour la hauteur et un autre pour la longueur.
// Le programme dessine un rectangle aux dimensions fournies par l'utilisateur
/*
Par exemple : La hauteur est de 4 et la longueur est 7
le programme dessine le rectangle suivant:
*******
*******
*******
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
   int longueur;
   int variable;

   cout << "Veuillez entrer la hauteur du rectangle : ";
   cin >> hauteur;

   cout << "Veuillez indiquer la longueur du rectangle : ";
   cin >> longueur;

   // TODO : Le programme doit faire hauteur lignes et pour chaque lingne il doit afficher longueur
   // TODO : Le programme utilise deux boucles for
   
   // Le premier for sert a faire la hauteur. Sa seule commande est endl, ce qui permet de recommencer la loupe du deuxième for.
   for (int compteurH = 0; compteurH < hauteur; compteurH++)
   {
      // Le deuxième for sert a faire la longueur. 
      for (int compteurL = 0; compteurL < longueur; compteurL++)
      {
         // Si on est a la première ligne, écrire des "-" sur toute la longueur.

         // Si on est a la derniere ligne ou a la première ligne, écrire des "-" sur toute la longueur.
         if (compteurH == hauteur - 1 || compteurH == 0)
         {
            cout << "-";
         }
         // Si on est au autre ligne, on va regarder si on est au premier, au milieu ou dernier caractere
         else
         {
            // On va "reset" "variable" pour faire les commandes a chaque caractère
            variable = compteurL;
            // Si on est au premier caractère ou au dernier, on va écrire un "|"
            if (variable == 0 || variable == longueur - 1)
            {
               cout << "|";
            }
            // Si tout les autres commandes ne marche pas, on va écrire un "*"
            else
            {
               cout << "*";
            }
          
         }

      }
      cout << endl;
   }
  
   








   system("pause");
}

//Plan de tests         écran 
// 
   /*
    
   
   
   
   */
   


   




