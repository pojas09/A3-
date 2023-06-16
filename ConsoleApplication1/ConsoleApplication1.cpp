#include <iostream>
#include "sistema.h"
#include "cliente.h"

using namespace std;

int main()
{

	string login, senha, email, nome, cpf, nascimento, telefone;

	int id;

	bool voltar;

	Sistema sistema;

	do {
		
		voltar = false;
		cout << "======== Locadora ========" << endl;
		cout << "(1) Logar" << endl;
		cout << "(2) Registrar" << endl;
		cout << "(3) Acessar como Funcionario" << endl;
		int opcao;
		cin >> opcao;

		switch (opcao) {


		case 1:

			cout << "Login:"; cin >> login;
			cout << "Senha:"; cin >> senha;
			if (sistema.autenticarCliente(login, senha)) {
				cout << "Logado";
			}
			else {
				cout << "Login Inválido!" << endl;
				voltar = true;
			}
			break;

		case 2:

			cout << "Login:"; cin >> login;
			cout << "Senha:"; cin >> senha;
			cout << "Email:"; cin >> email;
			cout << "Nome:"; cin >> nome;
			cout << "CPF:"; cin >> cpf;
			cout << "Telefone:"; cin >> telefone;
			cout << "Data de Nascimento:"; cin >> nascimento;
			cout << "ID:"; cin >> id;

			sistema.cadastrarCliente(login, senha, email, nome, cpf, nascimento, telefone, id);
			voltar = true;
			break;

		case 3:

			cout << "======= Administração =======" << endl;
			cout << "(1) Logar" << endl;
			cout << "(2) Voltar" << endl;
			int opcao2;
			cin >> opcao2;

			switch (opcao2) {

			case 1:

				cout << "Login*";
				break;


			case 2:

				voltar = true;
				break;

			default:

				cout << "Opção inválida, encerrando sessão!" << endl;
				break;
			}
			break;

		default:

			cout << "Opção inválida, encerrando sessão!" << endl;
			break;
		}

	}while (voltar);

	return 0;
};

