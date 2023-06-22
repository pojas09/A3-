#ifndef SUV_H
#define SUV_H

#include <iostream>
#include "carro.h"
using namespace std;
	
	enum ModeloSuv { BMWX1 = 1, Volkswagen_T_Cross };

class SUV : public Carro {

	public:

	// Construtores
	SUV() : Carro ("", "", "", 2023, 0, "", 0, 0, 0, false) {}
	SUV(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const float& gasolina, const bool& gps)
	: Carro(modelo, tipoCarro, cor, ano, preco, placa, potencia, bagagem, gasolina, gps) {}

	string getNomeModeloSUV(ModeloSuv modeloEscolhido) {

		switch (modeloEscolhido) {

		case ModeloSuv::Volkswagen_T_Cross:

			return "Volkswagen T-Cross";
			break;

		case ModeloSuv::BMWX1:

			return "BMW X1";
			break;

		default:

			return "";
			break;
		}
	};
};
#endif