#include "Labo06Fonctions.h"

bool etreNombreEntier(string chaine)
{
   // Premier cas: est-ce que la chaine est vide
	if (chaine.empty())
	{
		return false;
	}
	else
	{
		// Deuxi�me cas: le premier caract�re n'est pas un chiffre
		if (chaine.front() < '0' || chaine.front() > '9')
		{
			return false;
		}
		else
		{

		// Troisi�me cas: est-ce que le nombre est n�gatif
		if (chaine.size() <= 1)
		{
			// Cas d'erreur car pour un nombre n�gatif, la chaine doit �tre au moins de longueur 2 pour le - suivi d'un chiffre
			return false;
		}
		else
		{
			if (chaine.front() != '-')
			{
				return false;
			}
			else
			{
				if (chaine.at(1) < '0' || chaine.at(1) > '9')
				{
					return false;
				}
				else
				{
					// La taille de la chaine est au moins 2, le premier caract�re est le signe -, et le deuxi�me caract�re est un chiffre
					return true;
				}
			}
		}

	}
}
