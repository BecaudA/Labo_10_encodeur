//
// Created by Arthur on 08.01.2019.
//

#ifndef LABO_10_ENCODEUR_ENCODEUR_H
#define LABO_10_ENCODEUR_ENCODEUR_H
#include <string>
#include <vector>
/**
 * 
 * @param message
 * @param cle
 * @return 
 */
std::string coder(const std::string& message, const std::vector<int>& cle);
/**
 * @param message
 * @param cle
 * @return 
 */
std::string decoder(const std::string& message, const std::vector<int>& cle);

#endif //LABO_10_ENCODEUR_ENCODEUR_H
