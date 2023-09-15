#pragma once
using namespace std;
#include <iostream>
#include <string>

class Vaisseau;
class Faction;

class FactoryVaisseau
{
public :
	//Création d'un aventurier aléatoire
	static Vaisseau* getRandomVaisseau();

private:
	static Faction* getRandomFaction();
};

