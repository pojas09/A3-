#ifndef REGISTRO_H
#define REGISTRO_H

#include <vector>
#include "checkout.h"
using namespace std;

class Registro {

	private:

	vector<Checkin*> entradas;
	vector<Checkout*> saidas;

	public:

	// Construtores
	Registro();
#
	void cadastrarCheckin(Carro* carro, Cliente* cliente);
	void cadastrarCheckout(const string& placa);

	// Exibe todos os registros
	void exibirCheckins();
	void exibirCheckouts();
	
	void removerCheckin(const string& placa);
	void removerCheckout(const string& placa);

	// Exibe os registros associados a um cliente
	void exibirCheckinsCliente(const string& login);
	void exibirCheckoutsCliente(const string& login);

};
#endif
