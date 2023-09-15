#include "FactoryVaisseau.h"
#include <string>
#include <iostream>
#include "guerre.h"
#include "livraison.h"
#include "transport.h"
#include "bleu.h"
#include "rouge.h"
using namespace std;

inline int genererNb(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}

Vaisseau* FactoryVaisseau::getRandomVaisseau()
{
	Vaisseau* vaisseau(0);
	//Généré une race aléatoire
	Faction* maFaction = getRandomFaction();

	//Générer un type aléatoire
	int random = genererNb(1, 3);
	if (random == 1)
	{
		vaisseau = new guerre(maFaction);
	}
	else if (random == 2)
	{
		vaisseau = new livraison(maFaction);
	}
	else
	{
		vaisseau = new transport(maFaction);
	}

	return vaisseau;

}

Faction* FactoryVaisseau::getRandomFaction()
{
	Faction* faction(0);

	int random = genererNb(1, 2);
	if (random == 1)
	{
		faction = new bleu();
	}
	else 
	{
		faction = new rouge();
	}


	return faction;
}