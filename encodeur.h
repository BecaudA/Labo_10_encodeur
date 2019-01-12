/*
 -----------------------------------------------------------------------------------
 Laboratoire : Labo_10_encodeur
 Fichier     : encodeur.h
 Auteur(s)   : Arthur Bécaud & Stéphane Teixeira Carvalho
 Date        : 14.01.2019

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#ifndef LABO_10_ENCODEUR_ENCODEUR_H
#define LABO_10_ENCODEUR_ENCODEUR_H
#include <string>
#include <vector>

/**
 * @brief code un message selon une clé
 * @param message message à coder
 * @param cle clé de valeur pour coder
 */
void coder(const std::string& message, const std::vector<int>& cle);

/**
 * @brief décode un message selon une clé
 * @param message message à décoder
 * @param cle clé de valeur pour décoder
 */
void decoder(const std::string& message, const std::vector<int>& cle);

#endif //LABO_10_ENCODEUR_ENCODEUR_H
