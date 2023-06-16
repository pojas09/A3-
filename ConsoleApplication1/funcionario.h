#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include "usuario.h"

using namespace std;

    class Funcionario : public Usuario {

        private:

        int id_funcionario;

        public:

        Funcionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_funcionario);

        void setId_funcionario(const int& novoId_funcionario);
        int getId_funcionario() const;
    
};

#endif