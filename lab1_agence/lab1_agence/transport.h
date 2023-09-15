#pragma once
#include <string>
#include "Vaisseau.h"
class transport : 
	public Vaisseau
{
public :
	transport();
	transport(Faction* _faction);
	~transport();
	virtual std::string to_string();
};

