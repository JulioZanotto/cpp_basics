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

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	printaNome();
	cout << retornaConta(1,2) << endl;

	cout << carro1.getMarca() <<endl;
	cout << carro2.getMarca() << endl;
	return 0;
}
