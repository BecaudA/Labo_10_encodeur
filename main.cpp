/*
 -----------------------------------------------------------------------------------
 Laboratoire : 10_encodeur
 Fichier     : <nom du fichier>.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
 */
#include "annexe.h"
#include "encodeur.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void afficher(const string& vecteur);

int main() {
   const string msgSaisie          = "Entre le mot a coder : ",
                msgErreurSaisie    = "Saisie incorrecte veuilliez recommencer",
                msgSaisieTailleCle = "Entrez le nombre de valeur du vecteur : ",
                msgSaisieCle       = "Entrez les valeurs de la cle : ";

   string   message;
   unsigned nbValeurCle;
   
   vector<int> cle;
   
   cout << "ce programme ..." << endl;
   //L'utlisateur saisi le message qui va être encodé et décodé
   cout << msgSaisie << endl;
   getline(cin, message);
   
   //Demande de saise du nombre de valeur de la clé
   nbValeurCle = saisie(msgSaisieTailleCle,msgErreurSaisie, 1 , 10);
   cle.resize(nbValeurCle);
   
   saisieVecteur(msgSaisieCle,cle,nbValeurCle);
   
   coder(message, cle);
   cout << "Voici le message code : " << endl;
   afficher(message);
   
   decoder(message, cle);
   cout << "Voici le message decode : " << endl;
   afficher(message);

   return EXIT_SUCCESS;
}

void afficher(const string& message){
    for(size_t i = 0; i < message.size(); ++i)
    {
        cout << message[i];
    }
    cout << endl;
}