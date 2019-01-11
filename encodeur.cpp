/*
 -----------------------------------------------------------------------------------
 Laboratoire : 10_encodeur
 Fichier     : encodeur.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
 */

#include "encodeur.h"

using namespace std;

void coder(string& message, const vector<int>& cle) {
   for(size_t i = 0; i < message.size();i++) {
       message[i] += cle[i%cle.size()];
   }
}

void decoder(string& message, const vector<int>& cle) {
   for(size_t i = 0; i < message.size();i++) {
       message[i] -= cle[i%cle.size()];
   }
}