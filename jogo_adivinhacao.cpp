#include <iostream>

int main () {
	
	int numeroCerto = 3;
	int numero = 0;
	std::cout << "Digite um numero de 1 a 10: ";
	std::cin >> numero;
	
	while (numero != numeroCerto){
	std::cout << "Errou! Digite outro numero de 1 a 10: ";
	std::cin >> numero;
	}
	
	if (numero == numeroCerto) {
		std::cout << "Parabens, voce acertou!";
	}
	
	return 0;
}