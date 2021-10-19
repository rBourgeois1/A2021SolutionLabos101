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
		// Deuxième cas: le premier caractère n'est pas un chiffre
		if (chaine.front() < '0' || chaine.front() > '9')
		{
			return false;
		}
		else
		{

		// Troisième cas: est-ce que le nombre est négatif
		if (chaine.size() <= 1)
		{
			// Cas d'erreur car pour un nombre négatif, la chaine doit être au moins de longueur 2 pour le - suivi d'un chiffre
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
					// La taille de la chaine est au moins 2, le premier caractère est le signe -, et le deuxième caractère est un chiffre
					return true;
				}
			}
		}

	}
}
