#include <iostream>
#include "funcionario.h"

using namespace std;

Funcionario::Funcionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_funcionario) : Usuario(login, senha, email, nome, cpf, nascimento, telefone) {}

void Funcionario::setId_funcionario(int _id_funcionario) {
	id_funcionario = _id_funcionario;
}

int Funcionario::getId_funcionario() {
	return id_funcionario;
}
