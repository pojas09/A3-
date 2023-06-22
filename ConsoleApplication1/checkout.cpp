#include "checkout.h"

Checkout::Checkout(const string& dataEntrada, const string& dataSaida, int dias, Cliente* cliente, Carro* carro, const float& precoFinal, const float& precoDano, const float& precoMulta, const float& precoGasolina)
: Checkin (dataEntrada, dataSaida, dias, carro, cliente), precoFinal(precoFinal), danoPreco(precoDano), multasPreco(precoMulta), gasolinaPreco(precoGasolina) {}

float Checkout::getDanos() const
{
	return danoPreco;
}

float Checkout::getMultas() const
{
	return multasPreco;
}

float Checkout::getGasolina() const
{
	return  gasolinaPreco;
}

float Checkout::getPrecoFinal() const
{
	return precoFinal;
}

void Checkout::setPrecoFinal(const float& novoPreco_final)
{
	precoFinal = novoPreco_final;
}

void Checkout::setDanos(const float& danoFinanceiro)
{
	danoPreco = danoFinanceiro;
}

void Checkout::setMultas(const float& precoMultas)
{
	multasPreco = precoMultas;
}

void Checkout::setGasolina(const float& gasolinaGasta)
{
	gasolinaPreco = gasolinaGasta;
}