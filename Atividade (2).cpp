#include <iostream>
#include <clocale>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int opcao = 0;
	std::cout << "Escolha uma das op��es que voc� deseja \nPara Emagrecer digite: 1 \nPara Manter o peso digite: 2 \nPara Engordar digite: 3 \n";
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
		std::cout << "Para emagrecer, Voc� deve ingerir no m�ximo " << emagrecerMax << " calorias " << "e no m�nimo " << emagrecerMin << " calorias por dia";
		 } else if (opcao == 2) {
		std::cout << "Para manter, voc� deve ingerir no m�ximo " << manterPesoMax << " calorias " << "e no m�nimo " << manterPesoMin << " calorias por dia";
	} else if (opcao == 3) {
	  std::cout << "Para engordar, voc� deve ingerir no m�ximo " << engordarMax << " calorias " << "e no m�nimo " << engordarMin << " calorias por dia"; 
}

	}
	
	

