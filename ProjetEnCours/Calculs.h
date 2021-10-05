#pragma once
#include <iostream>
#include <string>
using namespace std;
double calculerMax(double valeur1, double valeur2, double valeur3);

int calculerFactorielle(int valeur);

void afficherDateLongue(int valeurJ, int valeurM, int valeurA);

bool verifierParite(int valeur);

int determinerGroupeAge(int valeur);

bool validerAgeCat(int valeura, int valeurc);

bool validerAge(int valeur);

int retournerValeur(const int MIN, const int MAX, string texte);

int retournerValeur(const int MIN, bool inclueMIN, const int MAX, bool inclueMAX, string texte);