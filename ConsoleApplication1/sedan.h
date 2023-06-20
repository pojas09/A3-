#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
#include "carro.h"

using namespace std;

	enum ModeloSedan { Volkswagen_Virtus = 1, Hyundai_HB20S, BMW_Serie_5, Fiat_Cronos };

	class Sedan : public Carro {

		private:

		public:

			Sedan() {

			};


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
		};
	};
#endif
