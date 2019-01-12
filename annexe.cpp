/*
 -----------------------------------------------------------------------------------
 Laboratoire : 10_encodeur
 Fichier     : annexe.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
 */
#include "annexe.h"
#include <iostream>
#include <limits>

using namespace std;

int saisie(const string& message,const string& msgErreur, const int MIN, const int MAX) {
   bool saisieValide;
   int valeurSaisie;
   do {
      cout << message << " [" << MIN << "-" << MAX << "] : ";

      // Vérifie que la valeur entrée est valide et comprise entre les bornes
      saisieValide = bool(cin >> valeurSaisie) and valeurSaisie >= MIN and valeurSaisie <= MAX;

      // Répare le cin en cas d'erreur
      if (cin.fail()) {
          cout << msgErreur << endl;
         cin.clear();
      }
      viderBuffer();
   } while(!saisieValide);
   
   return valeurSaisie;
}

/*void saisie(const string& message,string& valeur) {
   cout << message << " : ";
   getline(cin, valeur);
}*/

void saisieVecteur(const string& message,vector<int>& listeValeur,int nbVariables) {//remplirVecteur
   bool saisieValide;
   int  saisie;

   cout << message << " : ";

   for(size_t i = 0; i < nbVariables; ++i) {
      do {
         // Indice des saisies
         cout << "  #" << i + 1 << " : ";

         // Vérifie que la valeur entrée est valide
         saisieValide = bool(cin >> saisie);

         // Répare le cin en cas d'erreur ou ajoute la saisie à la liste
         if (cin.fail()) {
            cin.clear();
         } else {
            listeValeur.push_back(saisie);
         }
         viderBuffer();
      } while(!saisieValide);
   }
}

void viderBuffer(const char CAR) {
   cin.ignore(numeric_limits<streamsize>::max(), CAR);
}