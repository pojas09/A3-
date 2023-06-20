#include "cliente.h"

Cliente::Cliente()
{
}

Cliente::Cliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_cliente)
: Usuario (login, senha, email, nome, cpf, nascimento, telefone), id_cliente(id_cliente){}


int Cliente::getId_cliente() const{
	return id_cliente;
}

void Cliente::setId_cliente(const int& novoId_cliente) {
	id_cliente = novoId_cliente;
}


