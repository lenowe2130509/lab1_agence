#pragma once
#include <string>
#include "Faction.h"
class Vaisseau
{
protected : 
	int valeurMarchande;
	int attaque;
	int defense;
	int vie; 
	int capacite;
	std::string nom;
	int niveau; 
	int exp;
	Faction* faction;

public :
	Vaisseau();
	Vaisseau(Faction* _faction);
	Vaisseau(int attaque, int defense, int vie, int capacite, Faction* _faction);
	inline int getValeurMarchande() { return valeurMarchande; }

	int getAtt();
	int getDeff();
	int getVie();

	virtual std::string to_string();
	~Vaisseau();
};


