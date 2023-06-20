#ifndef FROTA_H
#define FROTA_H

#include <vector>
#include "suv.h"
#include "compacto.h"
#include "sedan.h"
#include "funcionario.h"

    class Frota {

        private:

        Funcionario funcionario;
        std::vector<Sedan*> sedans;
        std::vector<SUV*> suvs;
        std::vector<Compacto*> compactos;
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
};

#endif

