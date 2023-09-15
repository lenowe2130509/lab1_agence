// lab1_agence.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Faction.h"
#include "Vaisseau.h"
#include "rouge.h"
#include "bleu.h"
#include "guerre.h"
#include "livraison.h"
#include "transport.h"
#include "FactoryVaisseau.h"
using namespace std;

int main()
{
    srand(time(NULL));
    std::cout << "... production d'un vaisseau" << std::endl;
    Vaisseau* monVaisseau = FactoryVaisseau::getRandomVaisseau();
    std::cout << monVaisseau->to_string();
    
    
    /*transport* vaisseau1 = new transport();
    cout << vaisseau1->to_string() <<endl;
    guerre vaisseau2;
    cout << vaisseau2.to_string() << endl;
    livraison vL;
    cout << vL.to_string() << endl;
    rouge rouge;
    cout << rouge.getNom() << endl;
    bleu bleu;
    cout << bleu.getNom() << endl;*/
}
