#ifndef CARRO_H
#define CARRO_H

#include <iostream>
using namespace std;

class Carro {

	private:

	string placa;
	string cor;
	string modelo;
	string tipoCarro;
	int potencia;
	int bagagem; // Capacidade do bagageiro
	int ano;
	float gasolina; // Capacidade do tanque
	float preco;
	bool gps;

	public:

	// Construtores
	Carro();
	Carro(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const float& gasolina, const bool& gps);
	
	// Getters
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

	// Setters
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
};
#endif
