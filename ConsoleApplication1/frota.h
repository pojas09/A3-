#ifndef FROTA_H
#define FROTA_H

#include <vector>
#include "suv.h"
#include "compacto.h"
#include "sedan.h"
#include "funcionario.h"

using namespace std;

    class Frota {

        private:

        vector<Sedan*> sedans;
        vector<SUV*> suvs;
        vector<Compacto*> compactos;
        string endereco;
 

        public:

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

        bool verificarPlaca(const string& placa);
        void exibirSedans();
        void exibirSUVs();
        void exibirCompactos();

        void setEndereco(const string& novoEndereco);
        string getEndereco() const;
        Carro criarCarro();

        string obterModeloCarro(const string& placa);
        string obterTipoCarro(const string& placa);
        float obterPrecoCarro(const string& placa);
        Carro* obterCarro(const string& placa);


};

#endif

