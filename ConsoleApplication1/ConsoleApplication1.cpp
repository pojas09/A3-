#include <iostream>
#include "sistema.h"
#include "cliente.h"

using namespace std;

int main()
{

	string login, senha, email, nome, cpf, nascimento, telefone;

	bool voltar;

	Sistema sistema;

	do {
		
		voltar = false;
		cout << "\n====== Locadora ========" << endl;
		cout << "(1) Logar" << endl;
		cout << "(2) Registrar" << endl;
		cout << "(3) Acessar como Funcionario" << endl;
		cout << "(4) Sair";
		int opcao;
		cin >> opcao;

		switch (opcao) {


		case 1:

			cout << "Login:" << endl; cin >> login;
			cout << "Senha:" << endl; cin >> senha;
			if (sistema.autenticarCliente(login, senha)) {
				cout << "\n===== Menu Inicial =====" << endl;
				cout << "(1)" << endl;
				cout << "(2)" << endl;
				cout << "(3)" << endl;
			}
			else {
				cout << "Login Inválido!" << endl;
				voltar = true;
			}
			break;

		case 2:

			sistema.cadastrarCliente();
			voltar = true;
			break;

		case 3:

			cout << "\n===== Administração =======" << endl;
			cout << "(1) Logar" << endl;
			cout << "(2) Voltar" << endl;
			int opcao2;
			cin >> opcao2;

			switch (opcao2) {

			case 1:

				cout << "Login:"; cin >> login;
				cout << "Senha:"; cin >> senha;
				if (sistema.autenticarFuncionario(login, senha)) {
					cout << "\n===== Opções do Admin =======" << endl;
					cout << "(1) Adicionar Veículo" << endl;
					cout << "(2) Remover Veículo" << endl;
					cout << "(3) Alterar Veículo" << endl;
					cout << "(4) Cadastrar Funcionário" << endl;
					cout << "(5) Exibir Frota" << endl;
					cout << "(6) Sair" << endl;
					int opcao3;
					cin >> opcao3;

					switch (opcao3) {
					case 1:
						
					case 2:

					case 3:

					case 4:

					default:
					}
				}
				else {
					cout << "Login Inválido!" << endl;
					voltar = true;
				}
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

