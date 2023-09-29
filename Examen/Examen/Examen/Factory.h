#pragma once
using namespace std;
#include <iostream>
#include <string>

class Quete;

class Factory
{
public :
	static Quete* getRandomQuete();
};

