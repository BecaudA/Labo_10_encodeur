/*
 -----------------------------------------------------------------------------------
 Laboratoire : <nn>
 Fichier     : <nom du fichier>.cpp
 Auteur(s)   : <prénom> <nom>
 Date        : <jj.mm.aaaa>

 But         : <à compléter>

 Remarque(s) : <à compléter>

 Compilateur : MinGW-g++ <x.y.z>
 -----------------------------------------------------------------------------------
 */

#include "encodeur.h"

using namespace std;

void coder(string& message, const vector<int>& cle)
{
   for(size_t i = 0; i < message.size();i++)
   {
       message[i] += cle[i%cle.size()];
   }
}

void decoder(string& message, const vector<int>& cle)
{
   for(size_t i = 0; i < message.size();i++)
   {
       message[i] -= cle[i%cle.size()];
   }
}