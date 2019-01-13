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
#ifndef LABO_10_ENCODEUR_ENCODEUR_H
#define LABO_10_ENCODEUR_ENCODEUR_H
#include <string>
#include <vector>

/**
 * @brief code un message selon une clé donnée
 * @param message message à coder
 * @param cle vecteur d'entier contenant les valeurs pour coder le message
 */
void coder(std::string& message, const std::vector<int>& cle);

/**
 * @brief décode un message selon une clé
 * @param message message à décoder
 * @param cle cle vecteur d'entier contenant les valeurs pour decoder le message
 */
void decoder(std::string& message, const std::vector<int>& cle);

#endif //LABO_10_ENCODEUR_ENCODEUR_H
