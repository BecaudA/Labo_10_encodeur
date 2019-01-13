/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : encodeur.h
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : Permet d'encoder et décoder un message

 Remarque(s) : La clé permettant de coder et decoder est donnée sous fprme de vecteur d'entier

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