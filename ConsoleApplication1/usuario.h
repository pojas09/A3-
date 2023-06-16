#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>

using namespace std;

class Usuario {

private:

	string login;
	string senha;
	string nome;
	string telefone;
	string email;
	string nascimento;
	string cpf;

public:

	Usuario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone);
	void setLogin(string _login);
	void setSenha(string _senha);
	void setNome(string _nome);
	void setTelefone(string _telefone);
	void setEmail(string _email);
	void setNascimento(string _nascimento);
	void setCpf(string _identifcacao);

	string getLogin() const;
	string getSenha() const;


};

#endif