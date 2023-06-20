#include <iostream>
#include "sistema.h"
#include "cliente.h"
#include "frota.h"
#include "pedido.h"

using namespace std;

int main()
{

	string login, senha, email, nome, cpf, nascimento, telefone;

	bool voltar, voltar2, voltar3;

	Sistema sistema;
	Frota frota;


	do {
		
		voltar = false;
		cout << "\n====== Locadora ========" << endl;
		cout << "(1) Logar" << endl;
		cout << "(2) Registrar" << endl;
		cout << "(3) Acessar como Funcionario" << endl;
		cout << "(4) Sair" << endl;
		int opcao;
		cin >> opcao;

		switch (opcao) {


		case 1:

			cout << "Login:" << endl; cin >> login;
			cout << "Senha:" << endl; cin >> senha;
			if (sistema.autenticarCliente(login, senha)) {
				do {
					voltar3 = false;
					cout << "\n===== Menu Inicial =====" << endl;
					cout << "(1) Alugar veículo" << endl;
					cout << "(2) Verificar histórico" << endl;
					cout << "(3) Sair" << endl;
					int opcaoCategoria;
					cin >> opcaoCategoria;

					switch (opcaoCategoria) {

					case 1:
						frota.exibirSUVs();
						frota.exibirCompactos();
						frota.exibirSedans();
						cout << "Digite a placa do carro que você deseja alugar: " << endl;
						string placaEscolhida;
						cin >> placaEscolhida;

						if (frota.verificarPlaca(placaEscolhida)) {
							
							Pedido pedido;
							pedido.exibirCheckin(placaEscolhida, sistema.obterCpfCliente(login));
						}
						else {
							cout << "Placa inválida!" << endl;

						}

						voltar3 = true;
						break;

					case 2:
						
						break;

					default:
						voltar = true;
						break;
					}
				} while (voltar3);
			else {
				cout << "Login Inválido!" << endl;
				voltar = true;
			}
			break;
			}

		case 2:

			sistema.cadastrarCliente();
			voltar = true;
			break;

		case 3:

			cout << "\n===== Administração =======" << endl;
			cout << "(1) Logar" << endl;
			cout << "(2) Voltar" << endl;
			int opcaoFuncionario;
			cin >> opcaoFuncionario;

			switch (opcaoFuncionario) {

			case 1:

				cout << "Login:"; cin >> login;
				cout << "Senha:"; cin >> senha;
				if (sistema.autenticarFuncionario(login, senha)) {

					do {
						voltar2 = false;
						cout << "\n===== Opções do Admin =======" << endl;
						cout << "(1) Adicionar Veículo" << endl;
						cout << "(2) Remover Veículo" << endl;
						cout << "(3) Alterar Veículo" << endl;
						cout << "(4) Cadastrar Funcionário" << endl;
						cout << "(5) Exibir Frota" << endl;
						cout << "(6) Sair" << endl;
						int opcaoFuncionario2;
						cin >> opcaoFuncionario2;

						switch (opcaoFuncionario2) {

						case 1:

							cout << "(1) Sedan" << endl;
							cout << "(2) Compacto" << endl;
							cout << "(3) SUV" << endl;
							int opcaoRegistroCarro;
							cin >> opcaoRegistroCarro;

								switch (opcaoRegistroCarro) {
								case 1:
									frota.cadastrarSedan();
									break;
								case 2:
									frota.cadastrarCompacto();
									break;
								case 3:
									frota.cadastrarSuv();
									break;
								default:
									cout << "Opção inválida!" << endl;
									break;
								}
								voltar2 = true;
							break;

						case 2:

							cout << "(1) Sedan" << endl;
							cout << "(2) Compacto" << endl;
							cout << "(3) SUV" << endl;
							int opcaoExclusaoCarro;
							cin >> opcaoExclusaoCarro;
								
							switch (opcaoExclusaoCarro) {

							case 1:
								frota.removerSedan();
								break;
							case 2:
								frota.removerCompacto();
								break;
							case 3:
								frota.removerCompacto();
								break;
							default:
								cout << "Opção inválida!" << endl;
								break;
							}
							voltar2 = true;
							break;

						case 3:

							cout << "(1) Sedan" << endl;
							cout << "(2) Compacto" << endl;
							cout << "(3) SUV" << endl;
							int opcaoAlterarCarro;
							cin >> opcaoAlterarCarro;
								
							switch (opcaoAlterarCarro) {

							case 1:
								frota.alterarSedan();
								break;
							case 2:
								frota.alterarCompacto();
								break;
							case 3:
								frota.alterarSuv();
								break;
							default:
								cout << "Opção inválida!";
							}
							voltar2 = true;
							break;

						case 4:

							sistema.cadastrarFuncionario();
							voltar2 = true;
							break;

						case 5:

							frota.exibirSedans();
							frota.exibirCompactos();
							frota.exibirSUVs();
							voltar2 = true;
							break;

						default:

							voltar2 = false;
							voltar = true;
							break;
						}
					} while (voltar2);
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

			cout << "Encerrando sessão!" << endl;
			break;
		}

	}while (voltar);

	return 0;
};

