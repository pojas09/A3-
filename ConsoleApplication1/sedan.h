#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
#include "carro.h"

using namespace std;

	enum ModeloSedan { Volkswagen_Virtus = 1, Hyundai_HB20S, BMW_Serie_5, Fiat_Cronos };

	class Sedan : public Carro {


		private:

		public:

		Sedan();

		Sedan(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const int& gasolina, const bool& gps)
		: Carro(modelo, tipoCarro, cor, ano, preco, placa, potencia, bagagem, gasolina, gps) {}


		static string getNomeModelo(ModeloSedan modeloEscolhido) {

			switch (modeloEscolhido) {

			case ModeloSedan::Volkswagen_Virtus:

			return "Volkswagen Virtus";
			break;

			case ModeloSedan::Hyundai_HB20S:

			return "Hyundai HB20S";
			break;

			case ModeloSedan::BMW_Serie_5:

			return "BMW Serie 5";
			break;

			case ModeloSedan::Fiat_Cronos:

			return "Fiat Cronos";
			break;

			default:

			return "";
			break;	
			}
		}
	};

#endif
