#include "warrior.h"
#include <iostream>


	warrior::warrior()
	{
	}


	warrior::~warrior()
	{
	}

	void warrior::run()
	{
		if (stamina > 0)
		{
			std::cout << "Here I go again...\n";
		}
	}

	void warrior::strike()
	{
		strikecount += 1;
		std::cout << "Someone's getting axed tonight.\n";
	}

	void warrior::whirl()
	{
		if (combo > 50)
		{
			std::cout << "When I spin, you're a has-been!";
		}
		else
		{
			std::cout << "Nothing I can do right now... besides being awesome!";
		}
	}

	void warrior::endure()
	{
		if (life < 300)
		{
			damage = damage - resistance;
			std::cout << "Just a flesh wound...";
		}
	}

	void warrior::block()
	{
		if (strikecount > 15 && stamina > 60 && life > 900)
		{
			std::cout << "Oops... It seems my axe is blocking your way...";
		}
	}