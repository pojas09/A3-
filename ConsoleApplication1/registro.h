#ifndef REGISTRO_H
#define REGISTRO_H
#include <vector>
#include "checkout.h"
#include "frota.h"

using namespace std;

class Registro {

private:

	std::vector<Checkin*> entradas;
	std::vector<Checkout*> saidas;
	Frota frota;

public:

	Registro();
	void cadastrarCheckin(Carro* carro, Cliente* cliente);
	void cadastrarCheckout(const string& placa);

	void exibirCheckins();
	void exibirCheckouts();

	void removerCheckins(const string& placa);
	void removerCheckouts(const string& placa);

	void exibirCheckinsCliente(const string& login);
	void exibirCheckoutsCliente(const string& login);

};
#endif
