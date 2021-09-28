#include "Calculs.h"
#include <iostream>

using namespace std;


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
