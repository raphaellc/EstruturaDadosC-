#pragma once
#include <libUnicornio.h>
#include <Sprite.h>

class Personagem
{
	private:

		int velocidade;
		int abates = 1;
		bool movendo;
		float interpolador;

		
		ObjetoTileMap* objeto;
		Sprite spr;
		Vetor2D destino, inicio;
		
		virtual void atualizarAnimacao();
		virtual void atualizarMovimento();

	public:

		Personagem();
		~Personagem();
		
		virtual void inicializar(string sheet, ObjetoTileMap* objeto);
		virtual void atualizar();
		virtual void ataquebasico();	
		virtual void setDestino(float x, float y);
		virtual void setSpriteSheet(string spritesheet);
		
		float getX(), getY();
		bool estaMovendo();


};

enum Anima
{
	ANIMACAO_BAIXO,
	ANIMACAO_ESQ,
	ANIMACAO_DIR,
	ANIMACAO_CIMA
};

