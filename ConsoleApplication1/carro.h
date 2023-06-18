#ifndef CARRO_H
#define CARRO_H
#include <iostream>

using namespace std;

	class Carro {

		private:

		int id_carro;
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


		public:

		Carro(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const int& gasolina, const bool& gps, const int& id_carro);
	
		int getId_carro() const;
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


	};

#endif
