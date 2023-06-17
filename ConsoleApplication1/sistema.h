#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
#include "Usuario.h"
#include "cliente.h"
#include "funcionario.h"

    class Sistema {

        private:

        std::vector<Cliente*> clientes;
        std::vector<Funcionario*> funcionarios;
      
        public:

        Sistema();


        void cadastrarCliente();
        void cadastrarFuncionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone);
        
        bool autenticarCliente(const string& login, const string& senha);
        bool autenticarFuncionario(const string& login, const string& senha);
        Cliente criarCliente();
        Funcionario criarFuncionario();
    };

#endif
