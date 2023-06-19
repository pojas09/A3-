#ifndef SUV_H
#define SUV_H
#include <iostream>
#include "carro.h"

using namespace std;

	enum ModeloSuv { BMWX1 = 1, Volkswagen_T_Cross };

	class SUV : public Carro {

		private:

		public:

		static string getNomeModelo(ModeloSuv modeloEscolhido) {

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
		}
	};

#endif
