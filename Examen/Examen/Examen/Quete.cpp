#include "Quete.h"

Quete::Quete() : nom("JF"), difficulte(), nivMin(1), recompenseOr(2), expRecu(10)
{

}

std::string Quete::to_string()
{
	std::string info;
	info.append("Nom : " + nom + "\n");
	return info;
}

Quete::~Quete()
{
	delete faction;
}