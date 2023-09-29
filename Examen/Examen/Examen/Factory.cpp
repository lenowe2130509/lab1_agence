#include "Factory.h"
#include <string>
#include <iostream>
using namespace std;

inline int genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Quete* Factory::getRandomQuete()
{
	Quete* quete(0);

	int random = genererNb(1, 100);
	if (random <= 75)
	{
		quete = new Quete();
		quete->setDifficulte(Quete::Facile);
	}
	else if (random <= 90)
	{
		quete = new Quete();
		quete->setDifficulte(Quete::Moyen);
	}
	else
	{
		quete = new Quete();
		quete->setDifficulte(Quete::Difficile);

	}

	return quete;
}