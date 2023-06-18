#include "carro.h"

Carro::Carro(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const int& gasolina, const bool& gps, const int& id_carro)
: modelo(modelo), tipoCarro(tipoCarro), cor(cor), ano(ano), preco(preco), placa(placa), potencia(potencia), bagagem(bagagem), gasolina(gasolina), gps(gps), id_carro(id_carro) {}

int Carro::getId_carro() const
{
	return id_carro;
}

int Carro::getAno() const
{
	return ano;
}


int Carro::getPotencia() const
{
	return potencia;
}

int Carro::getBagagem() const
{
	return bagagem;
}

float Carro::getGasolina() const
{
	return gasolina;
}

string Carro::getPlaca() const
{
	return placa;
}


string Carro::getCor() const
{
	return cor;
}

string Carro::getModelo() const
{
	return modelo;
}

string Carro::getTipo_carro() const
{
	return tipoCarro;
}

bool Carro::getGps() const
{
	return gps;
}

float Carro::getPreco() const
{
	return preco;
}




