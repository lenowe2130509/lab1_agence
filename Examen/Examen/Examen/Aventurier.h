#pragma once
#include <string>
#include "Quete.h"
#include <vector>
class Aventurier
{
protected:
	int niveau;
	std::vector<Quete*>tabQuete;

public :
	Aventurier(int niveau);

	void afficherQuete();
	void ajouterQuete(Quete* quete);
	int getNiv();

	~Aventurier();
};

