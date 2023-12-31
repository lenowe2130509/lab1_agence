#include "Vaisseau.h"

Vaisseau::Vaisseau() :attaque(5), defense(2), vie(3), capacite(1), nom("Vicent"), niveau(7), exp(0)
{
	valeurMarchande = 500;
}

Vaisseau::Vaisseau(int _attaque, int _defense, int _vie, int _capacite, Faction* _faction) : nom("Vincent"), niveau(7), exp(0)
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
	faction = _faction;
	
}

Vaisseau::Vaisseau(Faction* _faction)
{
	faction = _faction;
}

std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");


	return info;
}
Vaisseau::~Vaisseau()
{
	delete faction;
}
