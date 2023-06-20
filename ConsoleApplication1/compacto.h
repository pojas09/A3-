#ifndef COMPACTO_H
#define COMPACTO_H
#include <iostream>
#include "carro.h"

using namespace std;

	enum ModeloCompacto { Fiat_Mobi = 1, Hyundai_HB20 };

	class Compacto : public Carro {

		private:

		public:

			Compacto() {

			};

		static string getNomeModelo(ModeloCompacto modeloEscolhido) {

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
