#pragma once
#include "Vaisseau.h"

class guerre :
	public Vaisseau
{
public:
	guerre();
	guerre(Faction* _faction);
	~guerre();
	virtual std::string to_string();
};

