#include "usuario.h"

Usuario::Usuario()
{
}

Usuario::Usuario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone)
: login(login), senha(senha), email(email), nome(nome), cpf(cpf), nascimento(nascimento), telefone(telefone) {}

void Usuario::setLogin(const string& novoLogin) {
	login = novoLogin;
}

void Usuario::setSenha(const string& novaSenha) {
	senha = novaSenha;
}

void Usuario::setNome(const string& novoNome) {
	nome = novoNome;
}

void Usuario::setTelefone(const string& novoTelefone) {
	telefone = novoTelefone;
}

void Usuario::setEmail(const string& novoEmail) {
	email = novoEmail;
}

void Usuario::setNascimento(const string& novoNascimento) {
	nascimento = novoNascimento;
}

void Usuario::setCpf(const string& novoCpf) {
	cpf = novoCpf;
}

string Usuario::getLogin() const {
	return login;
}

string Usuario::getSenha() const
{
	return senha;
}

string Usuario::getEmail() const
{
	return email;
}

string Usuario::getCpf() const
{
	return cpf;
}
