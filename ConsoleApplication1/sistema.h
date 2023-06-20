#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
#include "cliente.h"
#include "funcionario.h"

using namespace std;

    class Sistema {

        private:

         vector<Cliente*> clientes;
         vector<Funcionario*> funcionarios;
      
        public:

        Sistema();

        void cadastrarCliente();
        void cadastrarFuncionario();
        void removerFuncionario(const string& login, const string& senha);

        bool autenticarCliente(const string& login, const string& senha);
        bool autenticarFuncionario(const string& login, const string& senha);
        Cliente* obterCliente(const string& login);
        Cliente criarCliente();
        Funcionario criarFuncionario();
    };

#endif
