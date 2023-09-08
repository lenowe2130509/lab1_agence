#pragma once
#include <string>
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

public :
	Vaisseau();
	Vaisseau(int attaque, int defense, int vie, int capacite);
	inline int getValeurMarchande() { return valeurMarchande; }

	int getAtt();
	int getDeff();
	int getVie();

	virtual std::string to_string();
	~Vaisseau();
};


