//
// Created by Arthur on 08.01.2019.
//

#ifndef LABO_10_ENCODEUR_ANNEXE_H
#define LABO_10_ENCODEUR_ANNEXE_H
#include <string>
#include <vector>

bool saisie(const std::string& message,std::vector<int>& listeValeur);

bool saisieVecteur(const std::string& message,std::vector<int>& listeValeur,int nbVariables);

void viderBuffer();
#endif //LABO_10_ENCODEUR_ANNEXE_H
