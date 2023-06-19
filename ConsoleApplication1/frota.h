#ifndef FROTA_H
#define FROTA_H

#include <vector>
#include "suv.h"
#include "compacto.h"
#include "sedan.h"

    class Frota {

        private:

        std::vector<Sedan*> sedans;
        std::vector<SUV*> suvs;
        std::vector<Compacto*> compactos;
 

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
        Carro criarCarro();
};

#endif

