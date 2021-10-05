// But: Tester toutes les fonctions de notre bibliothèque
// Auteur: Raphaël
// Date: 2021-09-27

#include "Calculs.h"



double calculerMax(double valeur1, double valeur2, double valeur3)
{
   double resultat;

   if (valeur1 >= valeur2 && valeur1 >= valeur3)
   {
      resultat = valeur1;
   }
   else if (valeur2 >= valeur1 && valeur2 >= valeur3)
   {
      resultat = valeur2;
   }
   else
   {
      resultat = valeur3;
   }


   return resultat;
}

int calculerFactorielle(int valeur)
{
   int resultat = 1;


   for (int compteur = 1; compteur <= valeur; compteur++)
   {
      resultat *= compteur;


   }


   return resultat;
}

void afficherDateLongue(int valeurJ, int valeurM, int valeurA)
{
   if (valeurJ < 1 || valeurJ > 31 || valeurM < 1 || valeurM > 12 || valeurA < 1)
   {
      cout << "Veuillez entrer une date valide \n";
   }
   else
   switch (valeurM)
   {
   case 1:
      cout << valeurJ << " Janvier " << valeurA << endl;
      break;
   case 2:
      cout << valeurJ << " Fevrier " << valeurA << endl;
      break;
   case 3:
      cout << valeurJ << " Mars " << valeurA << endl;
      break;
   case 4:
      cout << valeurJ << " Avril " << valeurA << endl;
      break;
   case 5:
      cout << valeurJ << " Mai " << valeurA << endl;
      break;
   case 6:
      cout << valeurJ << " Juin " << valeurA << endl;
      break;
   case 7:
      cout << valeurJ << " Juillet " << valeurA << endl;
      break;
   case 8:
      cout << valeurJ << " Août " << valeurA << endl;
      break;
   case 9:
      cout << valeurJ << " Septembre " << valeurA << endl;
      break;
   case 10:
      cout << valeurJ << " Octobre " << valeurA << endl;
      break;
   case 11:
      cout << valeurJ << " Novembre " << valeurA << endl;
      break;
   case 12:
      cout << valeurJ << " Décembre " << valeurA << endl;
      break;
   }

}

bool verifierParite(int valeur)
{
   /*if (valeur % 2 == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
   */
   return valeur % 2 == 0;
}

int determinerGroupeAge(int valeur)
{
   if (valeur >= 0 && valeur <= 12)
   {
      return 1;
   }
   else if (valeur >= 13 && valeur <= 17)
   {
      return 2;
   }
   else if (valeur >= 18 && valeur <= 64)
   {
      return 3;
   }
   else
   {
      return 4;
   }
}

bool validerAgeCat(int valeura, int valeurc)
{
   while (validerAge(valeura))
   switch (valeurc)
   {
   case 1:
      return (valeura >= 0 && valeura <= 12);
      break;
   case 2:
      return (valeura >= 13 && valeura <= 17);
      break;
   case 3:
      return (valeura >= 18 && valeura <= 64);
      break;
   case 4:
      return (valeura >= 65);
      break;
   }
}

bool validerAge(int valeura)
{
   return (valeura > 0 && valeura <= 130);
}

int retournerValeur(const int MIN, const int MAX, string texte)
{
   int a;
   cout << "Indiquez votre " << texte << ": ";
   cin >> a;


   while (a >= MIN && a <= MAX)
   {
      cout << "Erreur! " << texte << " est invalide!" << endl;

      cout << "Indiquez votre " << texte << ": ";
      cin >> a;
   }
   return 0;
}

int retournerValeur(const int MIN, bool includeMIN, const int MAX, bool includeMAX, string texte)
{
   int a;
   cout << "Indiquez votre " << texte << ": ";
   cin >> a;

   if (includeMIN && includeMAX)
   {
      while (a >= MIN && a <= MAX)
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         cout << "Indiquez votre " << texte << ": ";
         cin >> a;
      }
   }

   else if (!(includeMIN && includeMAX))
   {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         cout << "Indiquez votre " << texte << ": ";
         cin >> a;
   }

   else if (!includeMIN && includeMAX)
   {
      while (a <= MAX)
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         cout << "Indiquez votre " << texte << ": ";
         cin >> a;
      }
   }

   else if (includeMIN && !includeMAX)
   {
      while (a >= MIN)
      {
         cout << "Erreur! " << texte << " est invalide!" << endl;

         cout << "Indiquez votre " << texte << ": ";
         cin >> a;
      }
   }

   return 0;
}

