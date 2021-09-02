#include <iostream>

int main () {
	
	float metros = 0;
	std::cout << "Digite um numero em metros: ";
	std::cin  >> metros;
	
	float po = (metros * 39.37);
	std::cout << "\nPolegadas: " << po;
	
	float pe = (metros * 3.281);
	std::cout << "\nPes: " << pe;
	
	float ja = (metros * 1.094);
	std::cout << "\nJardas: " << ja;
	
	float mi = (metros / 1.609);
	std::cout << "\nMilhas: " << mi;
	
	float cm = (metros * 100);
	std::cout << "\nCentrimetros: " << cm;
	
	float km = (metros / 1000);
	std::cout << "\nQuilometros: " << km;
	
	return 0;
	
}