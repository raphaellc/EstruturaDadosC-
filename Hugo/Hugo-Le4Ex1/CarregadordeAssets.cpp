#include "CarregadordeAssets.h"
#include<Global.h>


CarregadordeAssets::CarregadordeAssets()
{
}


CarregadordeAssets::~CarregadordeAssets()
{
}

bool CarregadordeAssets::CarregarAssets(fstream & arq_recursos){
	string tipo_asset;
	string nome_asset;
	string caminho_asset;
	string num_anim_asset;
	string num_max_frames_asset;
	string::size_type sz;
	if (arq_recursos) {
		char c_num_assets = arq_recursos.get();
		this->i_num_assets = c_num_assets - '0';
		while (!arq_recursos.eof()) {
			arq_recursos >> tipo_asset >> nome_asset >> caminho_asset >> num_anim_asset >> num_max_frames_asset;
			if (!arq_recursos.fail()) {
				gDebug.depurar("erro_leitura", arq_recursos.fail());
				gDebug.depurar("tipo_asset", tipo_asset);
				gDebug.depurar("nome_asset", nome_asset);
				gDebug.depurar("caminho_asset", caminho_asset);
				gDebug.depurar("numAnim", num_anim_asset);
				gDebug.depurar("numMaxFrames", num_max_frames_asset);
				if (tipo_asset == "sprite_sheet") {
					gRecursos.carregarSpriteSheet(nome_asset, caminho_asset, stoi(num_anim_asset, &sz), stoi(num_max_frames_asset, &sz), QUALIDADE_ESCALA_BAIXA);
				}
				if (!gRecursos.carregouSpriteSheet(nome_asset)) {
					gDebug.erro("Não carregou recurso");
					return false;
				}
			}
		}
		return true;
	}
}
