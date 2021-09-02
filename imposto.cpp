#include <iostream>
#include <clocale>

int main (){
	setlocale (LC_ALL, "Portuguese");
	
	float salario = 0;
	std::cout << ("Digite o seu salario: ");
	std::cin >> salario;
	
	if (salario < 1900) {
		std::cout << ("De acordo com o seu salario você esta isento do pagamento de imposto");
	} else if (salario >= 1900 && salario < 2500) {
		std::cout << "De acordo com o seu salario, devera pagar: R$" << (salario * 0.02) << " de imposto";
		} else if (salario >= 2500 && salario < 3700) {
			std::cout << "De acordo com o seu salario, devera pagar: R$" << (salario * 0.03) << " de imposto";
		} else if (salario >= 3700 && salario < 5000) {
			std::cout << "De acordo com o seu salario, devera pagar: R$" << (salario * 0.045) << " de imposto";
		} else if (salario >= 5000) {
			std::cout << "De acordo com o seu salario, devera pagar: R$" << (salario * 0.06) << " de imposto";
		}
	
	
	return 0;
}
