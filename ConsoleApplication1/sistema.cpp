#include "sistema.h"
#include "cliente.h"
#include "funcionario.h"

Sistema::Sistema()
{
	Funcionario* novoFuncionario = new Funcionario("admin", "0000", "locadora@gmail.com", "administrador", "", "", "", ultimoId_funcionario);
	funcionarios.push_back(novoFuncionario);
}

int Sistema::ultimoId_cliente = 0;
int Sistema::ultimoId_funcionario = 0;

void Sistema::cadastrarCliente(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone)
{
	for (const auto& cliente : clientes) {

		if(cliente->getLogin() == login) {
			cout << "Já existe um cliente com esse login";
			return;
		}
		if(cliente->getEmail() == email) {
			cout << "Já existe um cliente com esse email";
			return;
		}
		if(cliente->getCpf() == cpf) {
			cout << "Já existe um cliente com esse cpf";
			return;
		}
	}

	int novoId_cliente = ultimoId_cliente + 1;
	Cliente* novoCliente = new Cliente(login, senha, email, nome, cpf, nascimento, telefone, novoId_cliente);
	clientes.push_back(novoCliente);
	cout << "Cliente cadastrado com sucesso!!!" << endl;
	ultimoId_cliente = novoId_cliente;
}

void Sistema::cadastrarFuncionario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone)
{
	for (const auto& funcionario : funcionarios) {

		if (funcionario->getLogin() == login) {
			cout << "Já existe um funcionario com esse login";
			return;
		}
		if (funcionario->getEmail() == email) {
			cout << "Já existe um funcionario com esse email";
			return;
		}
		if (funcionario->getCpf() == cpf) {
			cout << "Já existe um funcionario com esse cpf";
			return;
		}
	}

	int novoId_funcionario = ultimoId_funcionario + 1;
	Funcionario* novoFuncionario = new Funcionario(login, senha, email, nome, cpf, nascimento, telefone, novoId_funcionario);
	funcionarios.push_back(novoFuncionario);
	cout << "Funcionario cadastrado com sucesso!!!" << endl;
	ultimoId_funcionario = novoId_funcionario;
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

