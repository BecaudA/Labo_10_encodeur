/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : main.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : Coder et décoder un message selon une clé, les deux valeurs sont
               saisies par l'utilisateur.
               Les erreurs de saisie doivent être gérées.

 Remarque(s) : La clé entrée par l'utilisateur est mise sous-forme de vecteur
               d'entier.
               Le message est utilisé sous-forme de string.
               Utilisation des librairies annexe et encodeur.

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
 */
#include "annexe.h"
#include "encodeur.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   const string msgSaisie          = "Entre le mot a coder",
                msgErreurSaisie    = "Saisie incorrecte veuillez recommencer",
                msgSaisieTailleCle = "Entrez le nombre de valeur du vecteur",
                msgSaisieCle       = "Entrez les valeurs de la cle";

   string       message;
   unsigned     nbValeurCle;

   vector<int>  cle;

   cout << "Ce programme ..." << endl;

   // L'utilisateur saisi le message qui va être encodé et décodé
   message = saisieString(msgSaisie, msgErreurSaisie);
   
   do{
   // Demande de saisie du nombre de valeur de la clé
   nbValeurCle = saisieEntier(msgSaisieTailleCle,msgErreurSaisie);
   
   //Remplissage du vecteur avec la liste de valeur saisie par l'utilisateur
   cle = saisieVecteur(msgSaisieCle,nbValeurCle);
   }while(cle.empty());
   
   if(coder(message, cle))
   {
    cout << "Voici le message code : ";
    cout << message << endl;
   }

   if (decoder(message, cle)) {
      cout << "Voici le message decode : ";
      cout << message << endl;
   }

   return EXIT_SUCCESS;
}