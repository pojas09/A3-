#ifndef FROTA_H
#define FROTA_H

#include <vector>
#include "suv.h"
#include "compacto.h"
#include "sedan.h"
using namespace std;

class Frota {

	private:

	vector<Sedan*> sedans;
    vector<SUV*> suvs;
    vector<Compacto*> compactos;
 
    public:

    // Construtores
    Frota();

    void cadastrarSuv();
    void cadastrarSedan();
    void cadastrarCompacto();

    void removerSuv();
    void removerSedan();
    void removerCompacto();

    void alterarSuv();
    void alterarSedan();
    void alterarCompacto();

    bool verificarPlaca(const string& placa); // Verifica se a placa já existe

    void exibirSedans();
    void exibirSUVs();
    void exibirCompactos();

    Carro criarCarro();
    Carro* obterCarro(const string& placa); // Retorna a instância de carro que possui a placa escolhida
};
#endif