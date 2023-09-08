#pragma once
#include "Vaisseau.h"
class guerre :
	public Vaisseau
{
public:
	guerre();
	~guerre();
	virtual std::string to_string();
};

