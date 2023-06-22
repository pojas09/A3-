#ifndef COMPACTO_H
#define COMPACTO_H

#include <iostream>
#include "carro.h"

using namespace std;

	enum ModeloCompacto { Fiat_Mobi = 1, Hyundai_HB20 };

class Compacto : public Carro {

	public:

	// Construtores
	Compacto() : Carro("", "", "", 2023, 0, "", 0, 0, 0, false) {}
	Compacto(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const float& gasolina, const bool& gps)
	: Carro(modelo, tipoCarro, cor, ano, preco, placa, potencia, bagagem, gasolina, gps) {}

	string getNomeModeloCompacto(ModeloCompacto modeloEscolhido) {

		switch (modeloEscolhido) {

		case ModeloCompacto::Fiat_Mobi:

			return "Fiat Mobi";
			break;

		case ModeloCompacto::Hyundai_HB20:

			return "Hyundai HB20";
			break;

		default:

			return "";
			break;
		}
	};
};
#endif