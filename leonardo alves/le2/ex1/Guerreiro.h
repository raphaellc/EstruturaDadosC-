#pragma once
class Guerreiro
{
public:
	Guerreiro(int arma, int estilo_luta, int escola_luta
		      int forc, int vit, int dex, int sab);
	~Guerreiro();
	int getArma();
	int getEstLuta();
    int getEscLuta();
    float ataque(int arma, int estilo_luta, int escola_luta, int forc, int dex);
    float defesa(int arma, int estilo_luta, int escola_luta, int vit, int dex);
	bool andar();
    bool correr();
protected:
	int forca, vitalidade, dextreza, sabedoria;
    int escola_luta;
    int estilo_luta;
};