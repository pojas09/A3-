#include <iostream>
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario()
{
}

Funcionario::Funcionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_funcionario)
: Usuario(login, senha, email, nome, cpf, nascimento, telefone), id_funcionario(id_funcionario){}

void Funcionario::setId_funcionario(const int& novoId_funcionario) {
	id_funcionario = novoId_funcionario;
}

int Funcionario::getId_funcionario() const{
	return id_funcionario;
}
