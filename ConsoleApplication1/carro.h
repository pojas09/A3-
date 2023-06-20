#ifndef CARRO_H
#define CARRO_H
#include <iostream>
#include "frota.h"

using namespace std;

	class Carro {

		private:

		int potencia;
		int bagagem;
		int ano;
		float gasolina;
		string placa;
		string cor;
		string modelo;
		string tipoCarro;
		bool gps;
		float preco;
		Frota* frota;


		public:

		Carro();
		Carro(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const int& gasolina, const bool& gps);
	
		int getAno() const;
		int getPotencia() const;
		int getBagagem() const;
		float getGasolina() const;
		string getPlaca() const;
		string getCor() const;
		string getModelo() const;
		string getTipo_carro() const;
		bool getGps() const;
		float getPreco() const;
		Frota* getFrota();

		void setCor(const string& novaCor);
		void setGps(const bool& novoGps);
		void setPreco(const float& novoPreco);
		void setModelo(const string& novoModelo);
		void setTipo_carro(const string& novoTipo);
		void setAno(const int& novoAno);
		void setPotencia(const int& novaPotencia);
		void setGasolina(const float& novaGasolina);
		void setPlaca(const string& novaPlaca);
		void setBagagem(const int& novaBagagem);
		void setFrota(Frota* novaFrota);

	};

#endif
