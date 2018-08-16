#pragma once
class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	int getArma();
	int getEstLuta();
    int getEscLuta();
    float ataque(int gA, int estL, int escL, int for, int dex);
    float defesa(int gA, int estL, int escL, int vit, int dex);
	bool andar();
    bool correr();
protected:
	int forca, vitalidade, dextreza, sabedoria;
    int escola_luta;
    int estilo_luta;
};