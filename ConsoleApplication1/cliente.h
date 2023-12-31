#ifndef CLIENTE_H
#define CLIENTE_H

#include "usuario.h"

class Cliente : public Usuario {

	private:

	int id_cliente;

	public:
	
	// Construtores
	Cliente();
	Cliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_cliente);
	
	// Getters
	int getId_cliente() const;

	// Setters
	void setId_cliente(const int& novoId_cliente);
};
#endif
