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

void saisie(const std::string& message,int& valeur, const int& MIN, const int& MAX) {
   bool saisieValide;

   do {
      cout << message << " [" << MIN << "-" << MAX << "] : ";

      // Vérifie que la valeur entrée est valide et comprise entre les bornes
      saisieValide = bool(cin >> valeur) and valeur >= MIN and valeur <= MAX;

      // Répare le cin en cas d'erreur
      if (cin.fail()) {
         cin.clear();
      }
      viderBuffer();
   } while(!saisieValide);
}

void saisie(const std::string& message,std::string& valeur) {
   cout << message << " : ";
   getline(cin, valeur);
}

void saisieVecteur(const string& message,vector<int>& listeValeur,int nbVariables) {
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