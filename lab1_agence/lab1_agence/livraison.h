#include "Vaisseau.h"
class livraison :
	public Vaisseau
{
public:
	livraison();
	~livraison();
	virtual std::string to_string();
};

