#include <iostream>

int main () {
	
	int numero1 = 0;
	int numero2 = 0;
	int operacao = 0;
		
		std::cout << "Digite um numero: ";
		std::cin >> numero1;
		
		std::cout << "Digite outro numero: ";
		std::cin >> numero2;
		
		std::cout << "Escolha qual operacao deseja realizar entre os dois numeros:\n 1.Adicao\n 2.subtracao\n 3.Divisao\n 4.Multiplicacao\n";
		std::cin >> operacao;
		
		if (operacao == 1) {
			std::cout << "O resultado da soma e: " << numero1 + numero2;
		}else if (operacao == 2) {
			std::cout << "O resultado da subtracao e: " << numero1 - numero2;
		}else if (operacao == 3) {
			std::cout << "O resultado da divisao e: " << numero1 / numero2;
		}else if (operacao == 4) {
			std::cout << "O resultado da multiplicacao e: " << numero1 * numero2;
	}
		
	return 0;
}