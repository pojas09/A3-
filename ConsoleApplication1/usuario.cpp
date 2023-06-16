#include "usuario.h"

Usuario::Usuario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone)
: login(login), senha(senha), email(email), nome(nome), cpf(cpf), nascimento(nascimento), telefone(telefone) {}

void Usuario::setLogin(string _login) {
	login = _login;
}

void Usuario::setSenha(string _senha) {
	senha = _senha;
}

void Usuario::setNome(string _nome) {
	nome = _nome;
}

void Usuario::setTelefone(string _telefone) {
	telefone = _telefone;
}

void Usuario::setEmail(string _email) {
	email = _email;
}

void Usuario::setNascimento(string _nascimento) {
	nascimento = _nascimento;
}

void Usuario::setCpf(string _identificacao) {
	cpf = _identificacao;
}

string Usuario::getLogin() const {
	return login;
}

string Usuario::getSenha() const
{
	return senha;
}
