#pragma once
class guerreiro
{
public:
	guerreiro();
	~guerreiro();
		int getPoder(int x);
		int getVida(int y);
		int getArmadura(int z);
		int getMana(int m);

		int velocidade_atq();
		int ataque_basico();
		void morrer();
		bool andar();
		bool pular();
	};



