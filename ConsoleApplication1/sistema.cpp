#include "sistema.h"
#include "cliente.h"
#include "funcionario.h"

Sistema::Sistema()
{
	Funcionario* novoFuncionario = new Funcionario("admin", "00000", "locadora@gmail.com", "administrador", "", "", "", (clientes.size() + 1));
	funcionarios.push_back(novoFuncionario);
}

Cliente Sistema::criarCliente() {

	string login, senha, email, nome, cpf, nascimento, telefone;

	do {
		cout << "\nLogin: "; cin >> login;

		if (login.size() < 5 || login.size() > 18)
			cout << "Login precisa ter de 5 há 18 caracteres!" << endl;
	} while (login.size() < 5 || login.size() > 18);

	do {
		cout << "\nSenha: "; cin >> senha;

		if (senha.size() < 4 || senha.size() > 14)
			cout << "Senha precisa ter de 4 há 14 caracteres!" << endl;
	} while (senha.size() < 4 || senha.size() > 14);

	do {
		cout << "\nEmail: "; cin >> email;

		if (email.size() < 11 || email.size() > 25)
			cout << "Email precisa ter de 11 há 25 caracteres!" << endl;
	} while (email.size() < 11 || email.size() > 25);

	do {
		cout << "\nNome: "; cin >> nome;

		if (nome.size() < 3 || nome.size() > 20)
			cout << "Nome precisa ter de 3 há 20 caracteres!" << endl;
	} while (nome.size() < 3 || nome.size() > 20);

	do {
		cout << "\nCPF: "; cin >> cpf;

		if (cpf.size() != 14)
			cout << "CPF inválido! Formato Requirido: 999.999.999-99" << endl;
	} while (cpf.size() != 14);

	do {
		cout << "\nTelefone: "; cin >> telefone;

		if (telefone.size() < 14 || telefone.size() > 16)
			cout << "Telefone inválido! Formato Requirido: (99)9-9999-9999" << endl;
	} while (telefone.size() < 14 || telefone.size() > 16);

	do {
		cout << "\nData de Nascimento: "; cin >> nascimento;

		if (nascimento.size() != 10)
			cout << "Data inválida! Formato Requirido: DD/MM/AAAA" << endl;
	} while (nascimento.size() != 10);

	int id_cliente = clientes.size() + 1;

	Cliente novoCliente(login, senha, email, nome, cpf, nascimento, telefone, id_cliente);

	return novoCliente;
}

Funcionario Sistema::criarFuncionario() {

	string login, senha, email, nome, cpf, nascimento, telefone;

	do { 
		cout << "\nLogin: "; cin >> login;

		if (login.size() < 5 || login.size() > 18)
			cout << "Login precisa ter de 5 há 18 caracteres!" << endl;
	} while (login.size() < 5 || login.size() > 18);

	do {
		cout << "\nSenha: "; cin >> senha;

		if(senha.size() < 4 || senha.size() > 14)
			cout << "Senha precisa ter de 4 há 14 caracteres!" << endl;
	} while (senha.size() < 4 || senha.size() > 14);

	do {
		cout << "\nEmail: "; cin >> email;

		if (email.size() < 11 || email.size() > 25)
			cout << "Email precisa ter de 11 há 25 caracteres!" << endl;
	} while (email.size() < 11 || email.size() > 25);

	do { 
		cout << "\nNome: "; cin >> nome;

		if (nome.size() < 3 || nome.size() > 20)
			cout << "Nome precisa ter de 3 há 20 caracteres!" << endl;
	} while (nome.size() < 3 || nome.size() > 20);

	do {
		cout << "\nCPF: "; cin >> cpf;

		if (cpf.size() != 14)
			cout << "CPF inválido! Formato Requirido: 999.999.999-99" << endl;
	} while (cpf.size() != 14);

	do {
		cout << "\nTelefone: "; cin >> telefone;

		if (telefone.size() < 14 || telefone.size() > 16)
			cout << "Telefone inválido! Formato Requirido: (99) 9-9999-9999" << endl;
	} while (telefone.size() <  14 || telefone.size() > 16);
	
	do { 
		cout << "\nData de Nascimento: "; cin >> nascimento;
		
		if (nascimento.size() != 10)
			cout << "Data inválida! Formato Requirido: DD/MM/AAAA" << endl;
	} while (nascimento.size() != 10);

	int id_funcionario = funcionarios.size() + 1;

	Funcionario novoFuncionario(login, senha, email, nome, cpf, nascimento, telefone, id_funcionario);

	return novoFuncionario;
}


void Sistema::cadastrarCliente()
{

	Cliente novoCliente = criarCliente();

	for (const auto& cliente : clientes) {

		if(cliente->getLogin() == novoCliente.getLogin()) {
			cout << "Já existe um cliente com esse login" << endl;
			return;
		}
		if(cliente->getEmail() == novoCliente.getEmail()) {
			cout << "Já existe um cliente com esse email" << endl;
			return;
		}
		if(cliente->getCpf() == novoCliente.getCpf()) {
			cout << "Já existe um cliente com esse cpf" << endl;
			return;
		}
	}

	clientes.push_back(new Cliente(novoCliente));
	cout << "Cliente cadastrado com sucesso!!!" << endl;
}

void Sistema::cadastrarFuncionario()
{

	Funcionario novoFuncionario = criarFuncionario();

	for (const auto& funcionario : funcionarios) {

		if (funcionario->getLogin() == novoFuncionario.getLogin()) {
			cout << "Já existe um funcionario com esse login" << endl;
			return;
		}
		if (funcionario->getEmail() == novoFuncionario.getEmail()) {
			cout << "Já existe um funcionario com esse email" << endl;
			return;
		}
		if (funcionario->getCpf() == novoFuncionario.getCpf()) {
			cout << "Já existe um funcionario com esse cpf" << endl;
			return;
		}
	}

	funcionarios.push_back(new Funcionario(novoFuncionario));
	cout << "Funcionario cadastrado com sucesso!!!" << endl;
}

void Sistema::removerFuncionario(const string& login, const string& senha)
{
	for (auto it = funcionarios.begin(); it != funcionarios.end(); ++it) {
		if ((*it)->getLogin() == login && (*it)->getSenha() == senha) {
			delete* it;
			funcionarios.erase(it);
			cout << "Funcionário removido com sucesso!" << endl;
			return;
		}
	}
	cout << "\nNenhum funcionário encontrado!" << endl;
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

string Sistema::obterCpfCliente(const string& login)
{
	for (const auto& cliente : clientes) {
		if (cliente->getLogin() == login) {
			return cliente->getCpf();
		}
	}
	return "";
}

Cliente* Sistema::obterCliente(const string& login) {
	for (Cliente* cliente : clientes) {
		if (cliente->getLogin() == login) {
			return cliente;
		}
	}
	return nullptr;
}



