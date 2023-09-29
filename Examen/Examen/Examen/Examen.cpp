// Examen.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Factory.h"
#include "Quete.h"
#include "Aventurier.h"

int main()
{
    srand(time(NULL));
    std::cout << "Creation de la quete" << std::endl;
    Quete* quete = Factory::getRandomQuete();
    std::cout << quete->to_string();

    delete quete;

    Aventurier aventurier(10);
    for (int i = 0; i < 12; i++)
    {
        Quete* nouvelleQuete = getRandomQuete();

        if nouvelleQuete->getNivMin() <= aventurier.getNiv())
        {
            aventurier.ajouterQuete(nouvelleQuete);
            std::cout << "Quête ajouter : " << nouvelleQuete->to_string() << std::endl;
        }
        else
        {
            delete nouvelleQuete;
            std::cout << "Quete supprimer : niveau insuffisant" << std::endl;
        }

    }
}
