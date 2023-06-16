#ifndef CLIENTE_H
#define CLIENTE_H
#include "usuario.h"

class Cliente : public Usuario {

private:

	int id_cliente;


public:

	Cliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_cliente);

	void setId_cliente(int _id_cliente);
	int getId_cliente();

};

#endif
