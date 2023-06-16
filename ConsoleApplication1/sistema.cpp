#include "sistema.h"
#include "cliente.h"
#include "funcionario.h"

Sistema::Sistema()
{
	Funcionario* novoFuncionario = new Funcionario("admin", "0000", "locadora@gmail.com", "administrador", "", "", "", 1);
	funcionarios.push_back(novoFuncionario);
}

void Sistema::cadastrarCliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_cliente)
{
	Cliente* novoCliente = new Cliente(login, senha, email, nome, cpf, nascimento, telefone, id_cliente);
	clientes.push_back(novoCliente);
	cout << "Cliente cadastrado com sucesso!!!" << endl;
}

void Sistema::cadastrarFuncionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone, const int& id_funcionario)
{
	Funcionario* novoFuncionario = new Funcionario(login, senha, email, nome, cpf, nascimento, telefone, id_funcionario);
	funcionarios.push_back(novoFuncionario);
	cout << "Funcionario cadastrado com sucesso!!!" << endl;
}

bool Sistema::autenticarCliente(const string& login, const string& senha)
{
	for (const auto& cliente : clientes) {
		if (cliente->getLogin() == login && cliente->getSenha() == senha) {

			return true;
		}
	}
	return false;
}

bool Sistema::autenticarFuncionario(const string& login, const string& senha)
{
	for (const auto& funcionario : funcionarios) {
		if (funcionario->getLogin() == login && funcionario->getSenha() == senha) {

			return true;
		}
	}
	return false;
}

