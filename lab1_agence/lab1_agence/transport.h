#pragma once
#include <string>
#include "Vaisseau.h"
class transport : 
	public Vaisseau
{
public :
	transport();
	~transport();
	virtual std::string to_string();
};

