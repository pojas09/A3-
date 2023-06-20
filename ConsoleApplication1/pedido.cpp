#include "pedido.h"


void Pedido::exibirCheckin(const string& dataCheckin, const string& dataCheckout)
{
    cout << "----- Check-in -----" << endl;
    cout << "Data de Check-in: " << dataCheckin << endl;
    cout << "Data de Check-out: " << dataCheckout << endl;
    cout << "Preço Inicial: " << (carro.getPreco() * dias) << endl;
    cout << "Placa do Carro: " << carro.getPlaca() << endl;
    cout << "Modelo do Carro: " << carro.getModelo() << endl;
    cout << "Endereço do Cliente: " << frota.getEndereco() << endl;
    cout << "CPF do Cliente: " << cliente.getCpf() << endl;
}

void Pedido::exibirCheckout(const string& dataCheckout, const float& precoFinal)
{
    cout << "----- Check-out -----" << endl;
    cout << "Data de Check-out: " << dataCheckout << endl;
    cout << "Preço Final: " << precoFinal << endl;
    cout << "Placa do Carro: " << carro.getPlaca() << endl;
    cout << "Modelo do Carro: " << carro.getModelo() << endl;
    cout << "Endereço do Cliente: " << frota.getEndereco() << endl;
    cout << "CPF do Cliente: " << cliente.getCpf() << endl;
}

void Pedido::setDanos(const float& danoFinanceiro)
{
	danoPreco = danoFinanceiro;
}

void Pedido::setMultas(const float& multas)
{
	multasPreco = multas;
}

void Pedido::setGasolina(const float& gasolinaGasta)
{
	gasolinaPreco = gasolinaGasta;
}

void Pedido::setPreco(const float& dano, const float& multas, const float& gasolina, const float& precoInicial)
{
	precoFinal = dano + multas + gasolina + precoInicial;
}

void Pedido::setCheckin(const string& dataEntrada)
{
    dataCheckin = dataEntrada;
}

void Pedido::setCheckout(const string& dataSaida)
{
    dataCheckout = dataSaida;
}

void Pedido::setDias(const int& diasAluguel)
{
    dias = diasAluguel;
}

string Pedido::getCheckin() const
{
    return dataCheckin;
}

string Pedido::getCheckout() const
{
    return dataCheckout;
}

int Pedido::getDias() const
{
    return dias;
}

