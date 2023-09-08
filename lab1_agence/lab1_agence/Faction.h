#pragma once
#include <string>
class Faction
{
protected: 
	int attaque;
	int defense;
	int vie;
	int capacite;
	std::string nom;

public :
	Faction();
	Faction(int attaque, int defense, int vie, int capacite);
	std::string getNom();
	~Faction();
};

