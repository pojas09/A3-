#include "carro.h"

Carro::Carro()
{
}

Carro::Carro(const string& modelo, const string& tipoCarro, const string& cor, int ano, float preco, const string& placa, int potencia, int bagagem, float gasolina, bool gps)
: modelo(modelo), tipoCarro(tipoCarro), cor(cor), ano(ano), preco(preco), placa(placa), potencia(potencia), bagagem(bagagem), gasolina(gasolina), gps(gps){}


int Carro::getAno()
{
	return ano;
}


int Carro::getPotencia() 
{
	return potencia;
}

int Carro::getBagagem() 
{
	return bagagem;
}

float Carro::getGasolina() 
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

bool Carro::getGps()
{
	return gps;
}

float Carro::getPreco() 
{
	return preco;
}

void Carro::setCor(const string& novaCor) 
{
	cor = novaCor;
}

void Carro::setGps(bool novoGps)
{
	gps = novoGps;
}

void Carro::setPreco(float novoPreco)
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

void Carro::setAno(int novoAno)
{
	ano = novoAno;
}

void Carro::setPotencia(int novaPotencia)
{
	potencia = novaPotencia;
}

void Carro::setGasolina(float novaGasolina)
{
	gasolina = novaGasolina;
}

void Carro::setPlaca(const string& novaPlaca)
{
	placa = novaPlaca;
}

void Carro::setBagagem(int novaBagagem)
{
	bagagem = novaBagagem;
}




