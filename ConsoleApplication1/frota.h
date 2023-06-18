#ifndef FROTA_H
#define FROTA_H

#include <vector>
#include "carro.h"

    class Frota {

        private:

        std::vector<Carro*> veiculos;
 

        public:

        Frota();


        void cadastrarCarro();
        Carro criarCarro();

};

#endif

