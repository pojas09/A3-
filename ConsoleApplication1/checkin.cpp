#include "checkin.h"

Checkin::Checkin(const string& dataEntrada, const string& dataSaida, const int& dias, Carro* carro, Cliente* cliente)
: dataEntrada(dataEntrada), dataSaida(dataSaida), dias(dias), carro(carro), cliente(cliente)  {}

string Checkin::getDataEntrada() const
{
	return dataEntrada;
}

string Checkin::getDataSaida() const
{
	return dataSaida;
}

int Checkin::getDias() const
{
	return dias;
}

Carro* Checkin::getCarro() const
{
	return carro;
}

Cliente* Checkin::getCliente() const
{
	return cliente;
}

void Checkin::setDataEntrada(const string& checkin)
{
	dataEntrada = checkin;
}

void Checkin::setDataSaida(const string& checkout)
{
	dataSaida = checkout;
}

void Checkin::setDias(const int& diasAluguel)
{
	dias = diasAluguel;
}