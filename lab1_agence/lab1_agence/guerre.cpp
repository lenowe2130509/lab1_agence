#include "guerre.h"
guerre::guerre() : Vaisseau(10, 4, 8, 2)
{

}

std::string guerre::to_string()
{
	std::string message = Vaisseau::to_string();
	message.append("Je suis un vaisseau de guerre \n");
	return message;
}
guerre::~guerre(){}

