//============================================================================
// Name        : cpp_basics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	printaNome();
	cout << retornaConta(1,2) << endl;
	return 0;
}
