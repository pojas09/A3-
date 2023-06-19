#include "carro.h"

Carro::Carro()
{
	modelo = "";
	ano = 0;
	cor = "";
	tipoCarro = "";
	preco = 0;
	placa = "";
	potencia = 0;
	bagagem = 0;
	gasolina = 0;
	gps = false;
}

Carro::Carro(const string& modelo, const string& tipoCarro, const string& cor, const int& ano, const float& preco, const string& placa, const int& potencia, const int& bagagem, const int& gasolina, const bool& gps)
: modelo(modelo), tipoCarro(tipoCarro), cor(cor), ano(ano), preco(preco), placa(placa), potencia(potencia), bagagem(bagagem), gasolina(gasolina), gps(gps){}


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

void Carro::setCor(const string& novaCor) 
{
	cor = novaCor;
}

void Carro::setGps(const bool& novoGps)
{
	gps = novoGps;
}

void Carro::setPreco(const float& novoPreco)
{
	preco = novoPreco;
}

void Carro::setModelo(const string& novoModelo)
{
	modelo = novoModelo;
}

void Carro::setTipo_carro(const string& novoTipo)
{
	tipoCarro = novoTipo;
}

void Carro::setAno(const int& novoAno)
{
	ano = novoAno;
}

void Carro::setPotencia(const int& novaPotencia)
{
	potencia = novaPotencia;
}

void Carro::setGasolina(const float& novaGasolina)
{
	gasolina = novaGasolina;
}

void Carro::setPlaca(const string& novaPlaca)
{
	placa = novaPlaca;
}

void Carro::setBagagem(const int& novaBagagem)
{
	bagagem = novaBagagem;
}




