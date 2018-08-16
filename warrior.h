#pragma once
#include <string>

class warrior
{
	
	private:
		int life = 1000;
		int stamina = 100;
		int strikecount = 0;
		int combo = strikecount * 10;
		int resistance = 50;
		int damage;
		std::string name = "Korne";
	
	public:
		warrior();
		~warrior();
		void run();
		void strike();
		void whirl();
		void endure();
		void block();
};

