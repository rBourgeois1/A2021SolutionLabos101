// But: Demander � l'utilisateur deux nombres entiers, un pour la hauteur et un autre pour la longueur.
// Le programme dessine un rectangle aux dimensions fournies par l'utilisateur
/*
Par exemple : La hauteur est de 4 et la longueur est 7
le programme dessine le rectangle suivant:
*******
*******
*******
*******
*/
// Auteur: Rapha�l
// Date: 2021-09-20

#include <iostream>
#include <time.h>

using namespace std; 


void main()
{
   setlocale(LC_ALL, "");
      
   // D�claration des constantes


   // D�claration des variables
   int hauteur;
   int longueur;
   int variable;

   cout << "Veuillez entrer la hauteur du rectangle : ";
   cin >> hauteur;

   cout << "Veuillez indiquer la longueur du rectangle : ";
   cin >> longueur;

   // TODO : Le programme doit faire hauteur lignes et pour chaque lingne il doit afficher longueur
   // TODO : Le programme utilise deux boucles for
   
   // Le premier for sert a faire la hauteur. Sa seule commande est endl, ce qui permet de recommencer la loupe du deuxi�me for.
   for (int compteurH = 0; compteurH < hauteur; compteurH++)
   {
      // Le deuxi�me for sert a faire la longueur. 
      for (int compteurL = 0; compteurL < longueur; compteurL++)
      {
         // Si on est a la premi�re ligne, �crire des "-" sur toute la longueur.

         // Si on est a la derniere ligne ou a la premi�re ligne, �crire des "-" sur toute la longueur.
         if (compteurH == hauteur - 1 || compteurH == 0)
         {
            cout << "-";
         }
         // Si on est au autre ligne, on va regarder si on est au premier, au milieu ou dernier caractere
         else
         {
            // On va "reset" "variable" pour faire les commandes a chaque caract�re
            variable = compteurL;
            // Si on est au premier caract�re ou au dernier, on va �crire un "|"
            if (variable == 0 || variable == longueur - 1)
            {
               cout << "|";
            }
            // Si tout les autres commandes ne marche pas, on va �crire un "*"
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

//Plan de tests         �cran 
// 
   /*
    
   
   
   
   */
   


   




