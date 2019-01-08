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
#include "annexe.h"
#include <iostream>
#include <limits>

using namespace std;

bool saisie(const string& message,const int minimum,const int maximum)
{
   bool valeurOk;
   int  valeurEntrer;
   do {
      cout << message << " : ";
      //Vérification que la lecture de la valeur entrée soit valide
      //et comprise entre minimum et maximum
      valeurOk = (cin >> valeurEntrer) and valeurEntrer >= minimum and valeurEntrer <= maximum;
      if(!valeurOk)
      {
         cout << "Veuillez entrer une valeur entre " << minimum << " et " << maximum << endl;
         cin.clear();
      }
      viderBuffer();
   } while(!valeurOk);
   return valeurEntrer;
}
bool saisieVecteur(const string& message,vector<int>& listeValeur,int nbVariables)
{
    cout << message << endl;
    bool valeurOk;
    int  valeurEntrer;
    listeValeur.clear();
    for(size_t i = 0; i < nbVariables; i++)
    {
      cout << i+1 << " : ";
      valeurOk = (bool)(cin >> valeurEntrer);
      if(!valeurOk)
      {
         cout << "Veuillez entrer un entier" << endl;
         cin.clear();
      }
      else
      {          
          listeValeur.push_back(valeurEntrer);
      }
      viderBuffer();
    }
}

void viderBuffer()
{
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
}