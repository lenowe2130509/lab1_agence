#include "Faction.h"

Faction::Faction() : attaque(5), defense(2), vie(3), capacite(1)
{
	
}

Faction::Faction(int _attaque, int _defense, int _vie, int _capacite) : nom("Vincent2")
{
	attaque = _attaque;
	defense = _defense;
	vie = _vie;
	capacite = _capacite;
}

std::string Faction::getNom()
{
	std::string info;
	info.append("Nom : " + nom + "\n");


	return info;
}
Faction::~Faction()
{}