// But: Utiliser le type string et ses m�thodes
// Auteur: Rapha�l Bourgeois
// Date: 2021-10-18


#include <iostream>
#include <string>
#include "Labo06Fonctions.h"

using namespace std;


int main()
{
   setlocale(LC_ALL, "");

   // D�claration des constantes


   // D�claration des variables
   string prenom;                   // On cr�e un objet qui va stocker une s�rie de caract�res: chaine de caract�res : string
   string adresse;                  // cette variable est automatiquement initialis�e � chaine vide: "" par le constructeur
   string paragraphe;
   string clavier;
   int nombre;

   // But: Toutes les informations demand�es � l'utilisateur doivnt �tre saisies dans une variable de type string pour s'assurer que toute la m�moire du clavier soit lue
   cout << "Veuillez entrer un nombre entier: ";
   //cin >> nombre;
   getline(cin, clavier, '\n');

   // Il faut convertir l'information dans clavier et la mettre dans nombre
   // Ici si clavier est vide, �a plante
   // Si clavier commenc par des lettre, �a plante
   // On ne peut pas envoyer � stoi n'importe quelle chaine de caract�res. Elle ne doit as �tre vide et elle doit commencer par un chiffre ou le signe - suivi d'un chiffre
   while (!etreNombreEntier(clavier))
   {
      cout << "Erreur: Le nombre doit commencer par un chiffre ou le signe - suivi d'un chiffre" << endl;
      cout << "Veuillez entrer un nombre entier: ";
      getline(cin, clavier, '\n');
   }

   nombre = stoi(clavier);
   cout << nombre << endl;


   /*
   cout << prenom << endl;

   cout << "la taille de prenom: " << prenom.size() << endl;
   cout << "la capacit� de prenom: " << prenom.capacity() << endl;
   cout << "la max_size de prenom: " << prenom.max_size() << endl;
   cout << "la longueur de prenom: " << prenom.length() << endl;

   string chaine1("Bonjour");       // On appelle le constructeur et on lui passe un param�tre pour initialiser la variable avec le texte de notre choix

   cout << endl << chaine1 << endl;
   cout << "la taille de chaine1: " << chaine1.size() << endl;
   cout << "la capacit� de chaine1: " << chaine1.capacity() << endl;
   cout << "la longueur de chaine1: " << chaine1.length() << endl;

   string chaine2("� tous!");

   cout << endl << chaine2 << endl;
   cout << "la taille de chaine2: " << chaine2.size() << endl;
   cout << "la capacit� de chaine2: " << chaine2.capacity() << endl;
   cout << "la longueur de chaine2: " << chaine2.length() << endl;

   // Op�rateur d'affecttion avec les strings permet de copier une chaine chaine dans une autre
   prenom = "Karine";

   cout << "Veuillez indiquer votre pr�nom: ";         // Ici on tape Karine suivi de enter
                                                       // cin >> lit tous les caract�res avant le enter ou l'espace ou tabulation et les copie dans la variable pr�nom
                                                       // cin >> ne retire pas son d�limiteur de la m�moire du clavier
   /*cin >> prenom;
   // Vider la m�moire du clavier
   //cin.ignore();              // par d�faut ignore 1 caract�re ou le \n
   //cin.ignore(4);             // va ignorer au maximum 4 caract�res ou le \n
   //cin.ignore(5, '\n');       // va ignorer au maximum 5 caract�res ou *
   cin.ignore(1, '\n');

   cout << "Vous vous appelez " << prenom << endl;

   //cout << "Veuillez entrer votre adresse: ";
   //cin >> adresse;                   // On constate que le cin >> s�prare les valeurs avec une enter, un espace ou une tabulation.
                                       // Il arr�te de lire le clavier d�s qu'il rencontre l'un de ces trois caract�re
   // Probl�me ici avec l'adresse, on ne peut pas mettre d'espace
   //cout << "Vous habitez au " << adresse << endl;

   // Donc, on utilise getline
   //getline(cin, adresse, '\n');                           // Ici le cin >> a laiss� le \n dans la m�moire du clavier, le getline rencontre le \n et se termine en lisant rien
                                                          // Le probl�me apparait toujours si dans le m�me programme on utilise � la fois des cin >> et des getline().
                                                          // Apr�s l'utilisation de cin >>, il va falloir vider la m�moire du clavier car il reste toujours le \n.
   //cout << "Vous habitez au " << adresse << endl;

   //cout << "Veuillez vous pr�senter: ";
   //getline(cin, paragraphe, '*');
   //cout << "Voici votre pr�sentation: " << paragraphe << endl;

   if (prenom == "Karine")
   {
      cout << prenom << " est votre amie!" << endl;
   }
   else
   {
      cout << prenom << " n'est pas votre amie!" << endl;
   }
   if (prenom >= "Arthur")
   {
      cout << prenom << " vient apr�s Arthur." << endl;
   }
   if (prenom <= "Zoe")
   {
      cout << prenom << " vient avant Zoe" << endl;
   }

   // On veut Concat�ner deux chaines ensemble on utilise l'op�rateur +

   chaine1 = chaine1 + " " + chaine2 + "\n";
   cout << chaine1;

   getline(cin, prenom, '\n');

   while (prenom.empty())
   {
      cout << "Erreur: vous devez entrer un pr�nom: ";
      getline(cin, prenom, '\n');
   }

   cout << "Votre initiale est " << prenom[0] << endl;
   cout << "Votre initiale est " << prenom.at(0) << endl;
   cout << "Votre initiale est " << prenom.front() << endl;

   cout << "La derni�re lettre de votre pr�nom est " << prenom.back() << endl;
   cout << "La derni�re lettre de votre pr�nom est " << prenom.at(prenom.size()-1) << endl;
   cout << "La derni�re lettre de votre pr�nom est " << prenom[prenom.size()-1] << endl;

   // Effacer le pr�nom
   prenom = "";
   cout << "votre pr�nom effac� : " << prenom << endl;

   prenom = "Karine";
   prenom.clear();        // Efface toute la chaine
   cout << "votre pr�nom effac� : " << prenom << endl;

   prenom = "Karine";
   prenom.erase(0,2);       // Efface un �l�ment pr�cis dans la chaine : erase(la position o� on efface, le nombre de charact�re qu'on efface)
   cout << "votre pr�nom effac� : " << prenom << endl;
   */




   system("pause");
   return 0;
}