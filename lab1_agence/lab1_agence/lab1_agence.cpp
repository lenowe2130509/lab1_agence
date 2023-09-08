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
using namespace std;

int main()
{
    transport* vaisseau1 = new transport();
    cout << vaisseau1->to_string() <<endl;
    guerre vaisseau2;
    cout << vaisseau2.to_string() << endl;
    livraison vL;
    cout << vL.to_string() << endl;
    rouge rouge;
    cout << rouge.getNom() << endl;
    bleu bleu;
    cout << bleu.getNom() << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
