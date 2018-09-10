#include "CarregadorDeAssets.h"
#include "libUnicornio.h"


CarregadorDeAssets::CarregadorDeAssets()
{
}


CarregadorDeAssets::~CarregadorDeAssets()
{
}

bool CarregadorDeAssets::carregarRecursos(std::fstream & ArquivoRecursos)
{
	bool statusCarregamento = true;
	 std::string tipoAsset;
	  std::string nomeAsset;
	   std::string caminhoAsset;
	    std::string numAnimAsset;
	     std::string numMaxFramesAsset;
	      std::string::size_type size;

	if (ArquivoRecursos) 
	{
		char numAss = ArquivoRecursos.get();
		this->numAssets = numAss - '0';
		
		while (!ArquivoRecursos.eof())
		{
			ArquivoRecursos >> tipoAsset >> nomeAsset >> caminhoAsset >> numAnimAsset >> numMaxFramesAsset;

			if (!ArquivoRecursos.fail())
			{
				gDebug.depurar("erro_leitura", ArquivoRecursos.fail());
				gDebug.depurar("tipo_asset", tipoAsset);
				gDebug.depurar("nome_asset", nomeAsset);
				gDebug.depurar("caminho_asset", caminhoAsset);
				gDebug.depurar("numAnim", numAnimAsset);
				gDebug.depurar("numMaxFrames", numMaxFramesAsset);
				if (tipoAsset == "sprite_sheet")
				{
					gRecursos.carregarSpriteSheet(nomeAsset, caminhoAsset, std::stoi(numAnimAsset, &size),
						std::stoi(numMaxFramesAsset, &size), QUALIDADE_ESCALA_BAIXA);

				}
				if (!gRecursos.carregouSpriteSheet(nomeAsset))
				{
					gDebug.erro("Não carregou recurso");
					return false;
				}
			}


		}
	}
	return true;
}
