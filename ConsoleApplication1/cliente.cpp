#include "cliente.h"

Cliente::Cliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_cliente) : Usuario (login, senha, email, nome, cpf, nascimento, telefone){}


int Cliente::getId_cliente() {
	return id_cliente;
}

void Cliente::setId_cliente(int _id_cliente) {
	id_cliente = _id_cliente;
}


