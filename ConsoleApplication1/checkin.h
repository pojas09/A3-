#ifndef CHECKIN_H
#define CHECKIN_H

#include <iostream>
#include "carro.h"
#include "cliente.h"
using namespace std;

class Checkin {

    private:

    string dataEntrada;
    string dataSaida;
    int dias;
    Carro* carro;
    Cliente* cliente;

    public:

    // Construtores
    Checkin(const string& dataEntrada, const string& dataSaida, const int& dias, Carro* carro, Cliente* cliente);

    // Getters
    string getDataEntrada() const;
    string getDataSaida() const;
    int getDias() const;
    Carro* getCarro() const;
    Cliente* getCliente() const;

    // Setters
    void setDataEntrada(const string& checkin);
    void setDataSaida(const string& checkout);
    void setDias(const int& diasAluguel);
};
#endif
