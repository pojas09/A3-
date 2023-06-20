#ifndef PEDIDO_H
#define PEDIDO_H

#include "frota.h"
#include "cliente.h"
#include "funcionario.h"

class Pedido {

private:

	Frota frota;
	Carro carro;
	Cliente cliente;
	Funcionario funcionario;
	string dataCheckout, dataCheckin;
	int dias;
	float precoInicial;
	float precoFinal;
	float danoPreco;
	float gasolinaPreco;
	float multasPreco;


public:

	Pedido();
	void exibirCheckin(const string& dataCheckin, const string& dataCheckout);
	void exibirCheckout(const string& dataCheckout, const float& precoFinal);

	void setDanos(const float& danoFinanceiro);
	void setMultas(const float& precoMultas);
	void setGasolina(const float& gasolinaGasta);
	void setPreco(const float& dano, const float& multas, const float& gasolina, const float& precoInicial);
	void setCheckin(const string& dataEntrada);
	void setCheckout(const string& dataSaida);
	void setDias(const int& diasAluguel);

	string getCheckin() const;
	string getCheckout() const;
	int getDias() const;
	
	};
#endif