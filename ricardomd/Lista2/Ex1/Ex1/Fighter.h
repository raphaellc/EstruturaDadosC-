
#include "Character.h"
class Fighter :
	public Character
{
public:
	bool isDefending;

	Fighter();
	~Fighter();

	void meleeAttack();
	void defend();
	bool getDefending();
};
