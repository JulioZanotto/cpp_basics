/*
 * carro.h
 *
 *  Created on: 16 de mai de 2020
 *      Author: juliocesar
 */

#ifndef CARRO_H_
#define CARRO_H_

#include <string>
using namespace std;

class Carro{
public:
	static int pneus;
	Carro();
	Carro(string marca, int ano);
	Carro(int ano);
	~Carro();
	void setMarca(string marca);
	string getMarca();
	void setAno(int ano);
	int getAno();
private:
	string marca;
	int ano;
};





#endif /* CARRO_H_ */
