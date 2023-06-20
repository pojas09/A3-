#ifndef CARRO_H
#define CARRO_H
#include <iostream>


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



public:

	Carro();
	Carro(const string& modelo, const string& tipoCarro, const string& cor, int ano, float preco, const string& placa, int potencia, int bagagem, float gasolina, bool gps);

	int getAno();
	int getPotencia();
	int getBagagem();
	float getGasolina();
	string getPlaca() const;
	string getCor() const;
	string getModelo() const;
	string getTipo_carro() const;
	bool getGps();
	float getPreco();

	void setCor(const string& novaCor);
	void setGps(bool novoGps);
	void setPreco(float novoPreco);
	void setModelo(const string& novoModelo);
	void setTipo_carro(const string& novoTipo);
	void setAno(int novoAno);
	void setPotencia(int novaPotencia);
	void setGasolina(float novaGasolina);
	void setPlaca(const string& novaPlaca);
	void setBagagem(int novaBagagem);

};
#endif
