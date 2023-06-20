#ifndef CHECKOUT_H
#define CHECKOUT_H
#include <iostream>
#include "checkin.h"


using namespace std;

class Checkout : public Checkin {

private:

	float precoFinal;
	float danoPreco;
	float gasolinaPreco;
	float multasPreco;

public:

	Checkout(const string& dataEntrada, const string& dataSaida, int dias, Cliente* cliente, Carro* carro, const float& precoFinal, const float& danoPreco, const float& gasolinaPreco, const float& multasPreco);
	void setDanos(const float& danoFinanceiro);
	void setMultas(const float& precoMultas);
	void setGasolina(const float& gasolinaGasta);
	void setPrecoFinal(const float& novoPreco_final);

	float getDanos() const;
	float getMultas() const;
	float getGasolina() const;
	float getPrecoFinal() const;

};
#endif
