#include <iostream>
#include <clocale>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int opcao = 0;
	std::cout << "Escolha uma das opções que você deseja \nPara Emagrecer digite: 1 \nPara Manter o peso digite: 2 \nPara Engordar digite: 3 \n";
	std::cin  >> opcao;

	int peso = 0;
	std::cout << "Digite seu peso (KG) aqui: ";
	std::cin  >> peso;
	
	int emagrecerMin = (20 * peso);
	int emagrecerMax = (25 * peso);
	int manterPesoMin = (25 * peso);
	int manterPesoMax = (30 * peso);
	int engordarMin = (30 * peso);
	int engordarMax = (35 * peso);
	
	if (opcao == 1 ) {
		std::cout << "Para emagrecer, Você deve ingerir no máximo " << emagrecerMax << " calorias " << "e no mínimo " << emagrecerMin << " calorias por dia";
		 } else if (opcao == 2) {
		std::cout << "Para manter, você deve ingerir no máximo " << manterPesoMax << " calorias " << "e no mínimo " << manterPesoMin << " calorias por dia";
	} else if (opcao == 3) {
	  std::cout << "Para engordar, você deve ingerir no máximo " << engordarMax << " calorias " << "e no mínimo " << engordarMin << " calorias por dia"; 
}

	}
	
	

