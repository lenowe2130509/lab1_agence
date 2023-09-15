#pragma once
using namespace std;
#include <iostream>
#include <string>

class Vaisseau;
class Faction;

class FactoryVaisseau
{
public :
	//Cr�ation d'un aventurier al�atoire
	static Vaisseau* getRandomVaisseau();

private:
	static Faction* getRandomFaction();
};

