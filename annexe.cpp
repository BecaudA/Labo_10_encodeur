/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : annexe.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#include "annexe.h"
#include <iostream>
#include <limits>

using namespace std;

int saisie(const string& message, const string& msgErreur, const int MIN, const int MAX) {
   bool saisieValide;
   int valeurSaisie;

   do {
      cout << message << " [" << MIN << "-" << MAX << "] : ";

      // Vérifie que la valeur entrée est valide et comprise entre les bornes
      saisieValide = bool(cin >> valeurSaisie) and valeurSaisie >= MIN and valeurSaisie <= MAX;

      // Répare le cin en cas d'erreur
      if (!saisieValide) {
         cout << msgErreur << endl;
         cin.clear();
      }
      viderBuffer();
   } while (!saisieValide);

   return valeurSaisie;
}

string saisie(const string& message) {
   string valeurSaisie;
   cout << message << " : ";
   getline(cin, valeurSaisie);
   return valeurSaisie;
}

vector<int> saisieVecteur(const string& message, const int nbVariables) {
   bool saisieValide;
   int valeurSaisie;
   vector<int> listeValeur;

   if (nbVariables > 0) {
      cout << message << " : " << endl;

      for (size_t i = 0; i < (unsigned) nbVariables; ++i) {
         do {
            // Indice des saisies
            cout << "  #" << i + 1 << " : ";

            // Vérifie que la valeur entrée est valide
            saisieValide = bool(cin >> valeurSaisie);

            // Répare le cin en cas d'erreur ou ajoute la valeur saisie à la liste
            if (cin.fail()) {
               cin.clear();
            } else {
               listeValeur.push_back(valeurSaisie);
            }
            viderBuffer();
         } while (!saisieValide);
      }
   } else {
      cout << "Le nombre de valeur souhaite est insuffisant pour executer le sous-programme (>0)" << endl;
   }
   return listeValeur;
}

void viderBuffer(const char CAR) {
   cin.ignore(numeric_limits<streamsize>::max(), CAR);
}