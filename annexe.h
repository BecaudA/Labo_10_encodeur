/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : annexe.h
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : Gérer les fonctions d'entrées sorties ainsi que des
               fonctions particulières.

 Remarque(s) :

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#ifndef LABO_10_ENCODEUR_ANNEXE_H
#define LABO_10_ENCODEUR_ANNEXE_H
#include <string>
#include <vector>

/**
 * @brief Saisie d'une valeur (int) avec message personnalisable
 * @param message message de personnalisation de la saisie
 * @param msgErreur message d'erreur retourné lors d'une mauvaise saisie
 * @param MIN valeur minimale pouvant être rentrée (par défaut = 0)
 * @param MAX valeur maximale pouvant être rentrée (par défaut = 10)
 */
int saisie(const std::string& message,const std::string& msgErreur, const int MIN = 0, const int MAX = 10);

/**
 * @brief Saisie d'une liste de valeur (int) avec message personnalisable
 * @param message message de personnalisation de la saisie
 * @param listeValeur liste de valeurs saisies par l'utilisateur
 * @param nbVariables nombre de valeur à saisir
 */
void saisieVecteur(const std::string& message,std::vector<int>& listeValeur,const int nbVariables);

/**
 * @brief Vide le Buffer de cin jusqu'à un caractère
 * @param CAR caractère souhaité
 */
void viderBuffer(const char CAR = '\n');
#endif //LABO_10_ENCODEUR_ANNEXE_H
