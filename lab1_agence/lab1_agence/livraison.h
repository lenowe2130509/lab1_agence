#include "Vaisseau.h"
class livraison :
	public Vaisseau
{
public:
	livraison();
	livraison(Faction* _faction);
	~livraison();
	virtual std::string to_string();
};

