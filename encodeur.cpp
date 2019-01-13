/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : encodeur.cpp
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#include "encodeur.h"

using namespace std;

bool coder(string& message, const vector<int>& cle) {
    if(!cle.empty())
    {
        for(size_t i = 0; i < message.size();i++) {
            // Le i%cle.size() va permettre d'indiquer le bon itérateur du vecteur cle
            // pour ajouter sa valeur à message[i] ex. i=4 cle.size()=3 i%cle.size=1 donc 
            // ajoute la valeur en cle[1]
            message[i] += cle[i%cle.size()];
        }
    }
    return !cle.empty();//retourne vrai si le vecteur cle n'est pas vide
}

bool decoder(string& message, const vector<int>& cle) {
    if(!cle.empty())
    {
        for(size_t i = 0; i < message.size();i++) {
            // Même principe que la fonction coder mais avec une soustraction
            message[i] -= cle[i%cle.size()];
        }
    }
    return !cle.empty();
}