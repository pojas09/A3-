#include <iostream>
#include "carro.h"
#include "usuario.h"
#include "sistema.h"
#include "frota.h"
#include "registro.h"

using namespace std;

int main()
{

	string login, senha, email, nome, cpf, nascimento, telefone, placaEscolhida;

	bool voltar, voltar2, voltar3;

	Registro registro;
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
						cin >> placaEscolhida;

						if (frota.verificarPlaca(placaEscolhida)) {

							Carro* carroEscolhido = frota.obterCarro(placaEscolhida);
							Cliente* cliente = sistema.obterCliente(login);
							
							registro.cadastrarCheckin(carroEscolhido, cliente);
							
						}
						else {
							cout << "Placa inválida!" << endl;

						}

						voltar3 = true;
						break;

					case 2:

						registro.exibirCheckinsCliente(login);
						registro.exibirCheckoutsCliente(login);
						voltar3 = true;
						break;

					default:
						voltar = true;
						break;
					}
				} while (voltar3);

			}
			else {
				cout << "Login Inválido!" << endl;
				voltar = true;
			} break;
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
						cout << "(4) Exibir Frota" << endl;
						cout << "(5) Cadastrar Funcionário" << endl;
						cout << "(6) Remover Funcionário" << endl;
						cout << "(7) Exibir Operações em Aberto" << endl;
						cout << "(8) Exibir Operações Conclúidas" << endl;
						cout << "(9) Validar um Checkout" << endl;
						cout << "(10) Excluir um Checkout" << endl;
						cout << "(11) Excluir um Checkin" << endl;
						int opcaoFuncionario2;
						cin >> opcaoFuncionario2;

						string loginFuncionario, senhaFuncionario;
						string placaExcluirCheckin, placaExcluirCheckout, placaCheckout;


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
								frota.removerSuv();
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
							frota.exibirSedans();
							frota.exibirCompactos();
							frota.exibirSUVs();
							voltar2 = true;
							break;

						case 5:
							sistema.cadastrarFuncionario();
							voltar2 = true;
							break;

						case 6:
							cout << "Deseja excluir um funcionário ?";
							cout << "\nInforme o login: "; cin >> loginFuncionario;
							cout << "\nInforme a senha:"; cin >> senhaFuncionario;
							sistema.removerFuncionario(loginFuncionario, senhaFuncionario);
							voltar2 = true;
							break;

						case 7:
							registro.exibirCheckins();
							voltar2 = true;
							break;

						case 8:
							registro.exibirCheckouts();
							voltar2 = true;
							break;

						case 9:
							cout << "Informe a placa do carro: ";
							cin >> placaCheckout;
							registro.cadastrarCheckout(placaCheckout);
							voltar2 = true;
							break;

						case 10:
							cout << "Informe a placa do carro: ";
							cin >> placaExcluirCheckout;
							registro.removerCheckouts(placaExcluirCheckout);
							voltar2 = true;
							break;

						case 11:
							cout << "Informe a placa do carro: ";
							cin >> placaExcluirCheckin;
							registro.removerCheckins(placaExcluirCheckin);
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

