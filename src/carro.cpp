/*
 * carro.cpp
 *
 *  Created on: 16 de mai de 2020
 *      Author: juliocesar
 */

#include "carro.h"

#include <string>
#include <iostream>

using namespace std;

void Carro::setMarca(string marca){
	this->marca = marca;
}

string Carro::getMarca(){
	return marca;
}

void Carro::setAno(int ano){
	if (ano > 1990){
		this->ano = ano;
	}
	else {
		this->ano = 1990;
	}

}

int Carro::getAno(){
	return ano;
}

Carro::Carro(){
	this->marca = "Toyota";
}

Carro::Carro(string marca, int ano){
	this->marca = marca;
	this->ano = ano;
}

Carro::Carro(int ano){
	this->ano = ano;
}

Carro::~Carro(){
	cout << "Carro foi destruido !!" <<endl;
}

int Carro::pneus = 4;
