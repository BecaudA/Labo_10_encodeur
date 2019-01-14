/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : annexe.h
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : Gérer les fonctions d'entrées sorties ainsi que des
               fonctions particulières.

 Remarque(s) : -

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
 * @param MIN valeur minimale pouvant être rentrée (par défaut = 1)
 * @param MAX valeur maximale pouvant être rentrée (par défaut = 10)
 * @return un entier contenant la valeur saisie par l'utilisateur
 */
int saisieEntier(const std::string& message,const std::string& msgErreur, const int MIN = 1, const int MAX = 10);

/**
 * @brief Saisie d'une valeur (string) avec message personnalisable
 * @param message message de personnalisation de la saisie
 * @param msgErreur message d'erreur retourné lors d'une mauvaise saisie
 * @return un string contenant la valeur saisie par l'utilisateur
 */
std::string saisieString(const std::string& message, const std::string& msgErreur);

/**
 * @brief Saisie d'une liste de valeur (int) avec message personnalisable
 * @param message message de personnalisation de la saisie
 * @param listeValeur futur liste de valeurs saisies par l'utilisateur
 * @param nbVariables nombre de valeurs à saisir
 */
std::vector<int> saisieVecteur(const std::string& message, const int nbVariables);

/**
 * @brief Vide le Buffer jusqu'à un caractère donné
 * @param CAR caractère jusqu'où le buffer doit être vidé (par défaut = '\n')
 */
void viderBuffer(const char CAR = '\n');

#endif //LABO_10_ENCODEUR_ANNEXE_H
