//============================================================================
// Name        : cpp_basics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "carro.h"
using namespace std;

void printaNome(){
	cout << "To de saca chamando funcao" << endl;
}

int retornaConta(int x, int y){
	int soma;
	soma = x + y;
	return soma;
}

int main() {
	Carro carro1;
	carro1.setMarca("Volks");
	carro1.setAno(2018);
	Carro carro2;

	Carro carro3;
	carro3.setMarca("Lexus");
	carro3.setAno(2020);
	carro3.setOptional("Completo");

	int soma = 0;

	for (int i = 0; i < 5; i++) {
		soma += i;
	}
	cout << "Sominha de saca: " << soma << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	printaNome();
	cout << retornaConta(1,2) << endl;

	cout << carro1.getMarca() <<endl;
	cout << carro2.getMarca() << endl;

	cout << "Carro: " << carro3.getMarca() << ", Ano: " << carro3.getAno() << endl;
	cout << "E um carro: " << carro3.getOptional() << endl;
	return 0;
}
