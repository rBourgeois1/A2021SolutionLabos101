// But: Utiliser le type string et ses méthodes
// Auteur: Raphaël Bourgeois
// Date: 2021-10-18


#include <iostream>
#include <string>

using namespace std;


int main()
{
   setlocale(LC_ALL, "");

   // Déclaration des constantes
   

   // Déclaration des variables
   string prenom;                   // On crée un objet qui va stocker une série de caractères: chaine de caractères : string
   string adresse;                  // cette variable est automatiquement initialisée à chaine vide: "" par le constructeur
   string paragraphe;

   cout << prenom << endl;
   
   cout << "la taille de prenom: " << prenom.size() << endl;
   cout << "la capacité de prenom: " << prenom.capacity() << endl;
   cout << "la max_size de prenom: " << prenom.max_size() << endl;
   cout << "la longueur de prenom: " << prenom.length() << endl;

   string chaine1("Bonjour");       // On appelle le constructeur et on lui passe un paramètre pour initialiser la variable avec le texte de notre choix

   cout << endl << chaine1 << endl;
   cout << "la taille de chaine1: " << chaine1.size() << endl;
   cout << "la capacité de chaine1: " << chaine1.capacity() << endl;
   cout << "la longueur de chaine1: " << chaine1.length() << endl;

   string chaine2("Bonjour à tous! Bienvenue dans le cours de programmation!");

   cout << endl << chaine2 << endl;
   cout << "la taille de chaine2: " << chaine2.size() << endl;
   cout << "la capacité de chaine2: " << chaine2.capacity() << endl;
   cout << "la longueur de chaine2: " << chaine2.length() << endl;

   // Opérateur d'affecttion avec les strings permet de copier une chaine chaine dans une autre
   prenom = "Karine";

   cout << "Veuillez indiquer votre prénom:";         // Ici on tape Karine suivi de enter
                                                       // cin >> lit tous les caractères avant le enter ou l'espace ou tabulation et les copie dans la variable prénom
                                                       // cin >> ne retire pas son délimiteur de la mémoire du clavier
   cin >> prenom;
   // Vider la mémoire du clavier
   //cin.ignore();              // par défaut ignore 1 caractère ou le \n
   //cin.ignore(4);             // va ignorer au maximum 4 caractères ou le \n
   //cin.ignore(5, '\n');       // va ignorer au maximum 5 caractères ou *
   cin.ignore(1, '\n');

   cout << "Vous vous appelez " << prenom << endl;

   cout << "Veuillez entrer votre adresse: ";
   //cin >> adresse;                   // On constate que le cin >> séprare les valeurs avec une enter, un espace ou une tabulation.
                                       // Il arrête de lire le clavier dès qu'il rencontre l'un de ces trois caractère
   // Problème ici avec l'adresse, on ne peut pas mettre d'espace
   //cout << "Vous habitez au " << adresse << endl;

   // Donc, on utilise getline
   getline(cin, adresse, '\n');                           // Ici le cin >> a laissé le \n dans la mémoire du clavier, le getline rencontre le \n et se termine en lisant rien
                                                          // Le problème apparait toujours si dans le même programme on utilise à la fois des cin >> et des getline().
                                                          // Après l'utilisation de cin >>, il va falloir vider la mémoire du clavier car il reste toujours le \n.
   cout << "Vous habitez au " << adresse << endl;
   
   cout << "Veuillez vous présenter: ";
   getline(cin, paragraphe, '*');
   cout << "Voici votre présentation: " << paragraphe << endl;

   if (prenom == "Karine")
   {
      cout << prenom << " est votre amie!" << endl;
   }
   else
   {
      cout << prenom << " n'est pas votre amie!" << endl;
   }

   system("pause");
   return 0;
}