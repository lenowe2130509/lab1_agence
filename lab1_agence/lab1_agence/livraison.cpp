#include "livraison.h"

livraison::livraison() : Vaisseau(0, 4, 8, 50)
{

}

std::string livraison::to_string()
{
	std::string message = Vaisseau::to_string();
	message.append("Je suis un vaisseau de livraison \n");
	return message;
}
livraison::~livraison(){}