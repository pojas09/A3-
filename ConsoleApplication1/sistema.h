#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
#include "cliente.h"
#include "funcionario.h"

    class Sistema {

        private:

        std::vector<Cliente*> clientes;
        std::vector<Funcionario*> funcionarios;
      
        public:

        Sistema();


        void cadastrarCliente();
        void cadastrarFuncionario();
        
        bool autenticarCliente(const string& login, const string& senha);
        bool autenticarFuncionario(const string& login, const string& senha);
        Cliente criarCliente();
        Funcionario criarFuncionario();
    };

#endif
