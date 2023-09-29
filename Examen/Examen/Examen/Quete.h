#pragma once
#include <string>


class Quete
{
protected :
	std::string nom;
	enum class nivDifficulte { Facile, Moyen, Difficile };
	int nivMin;
	int recompenseOr;
	int expRecu;

public :
	Quete();

	nivDifficulte getDifficulte() const {return difficulte;	}
	int getNivMin;
	int getRecompense;
	int getExp;
	virtual std::string to_string();

	~Quete();

private :
	nivDifficulte difficulte;
};

