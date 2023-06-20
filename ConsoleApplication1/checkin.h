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

    Checkin();
    Checkin(const string& dataEntrada, const string& dataSaida, int dias, Carro* carro, Cliente* cliente);
    void setDataEntrada(const string& checkin);
    void setDataSaida(const string& checkout);
    void setDias(const int& diasAluguel);

    string getDataEntrada() const;
    string getDataSaida() const;
    int getDias() const;
    Carro* getCarro() const;
    Cliente* getCliente() const;
};

#endif
