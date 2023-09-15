#include "transport.h"
#include "Faction.h"
transport::transport() : Vaisseau(0,4,8,50, faction)
{

}

transport::transport(Faction* _faction)
{
	faction = _faction;
}


std::string transport::to_string()
{
	std::string message = Vaisseau::to_string();
	message.append("Je suis un vaisseau de transport \n");
	return message;
}
transport::~transport(){}
