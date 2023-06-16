#include <iostream>
#include "sistema.h"
#include "cliente.h"

using namespace std;

	int main()
	{

	int opcao;
  
	string login, senha, email, nome, cpf, nascimento, telefone;

	int id;


	Sistema sistema;

	cout << "======== Locadora ========" << endl;
	cout << "(1) Logar" << endl;
	cout << "(2) Registrar" << endl;
	cout << "(3) Acessar como Funcionario" << endl;

	switch (opcao) {


	case 1:


		break;
		
	case 2:

		cout << "Login:" << endl; cin >> login;
		cout << "Senha:" << endl; cin >> senha;
		cout << "Email:" << endl; cin >> email;
		cout << "Nome" << endl; cin >> nome;
		cout << "CPF:" << endl; cin >> cpf;
		cout << "Telefone:" << endl; cin >> telefone;
		cout << "Data de Nascimento:" << endl; cin >> nascimento;
		cout << "ID:" << endl; cin >> id;

		sistema.cadastrarCliente(login, senha, email, nome, cpf, nascimento, telefone, id);

		break;

	case 3:

		cout << "======= Administração =======";
		cout << "(1) Logar" << endl;
		cout << "(2) Voltar" << endl;
		cin >> opcao;

	
		switch (opcao) {

		case 1:
		
			break;

		case 2:

			sistema.cadastrarFuncionario()

		}
		
	}


	sistema.cadastrarCliente("login10", "senha20", "email30", "rafael", "888.888.888-88", "01/02/2005", "9-9721-1777", 1);
	if(sistema.autenticarCliente(LoginCliente, senhaCliente)) {
		cout << "Foi cadastrado";
	}
	else {
		cout << "Não foi cadastrado";
	}

	if (sistema.autenticarFuncionario("admin", "0000")) {
		cout << "Foi Cadastrado";
	}
	return 0;
	} 

