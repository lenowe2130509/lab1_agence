#include "transport.h"

transport::transport() : Vaisseau(0,4,8,50)
{

}


std::string transport::to_string()
{
	std::string message = Vaisseau::to_string();
	message.append("Je suis un vaisseau de transport \n");
	return message;
}
transport::~transport(){}
