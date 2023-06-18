#include "frota.h"
#include <iostream>

using namespace std;


Frota::Frota()
{
}

Carro Frota::criarCarro()
{
	string tipoCarro, modelo, cor, placa;

	int potencia, bagagem, ano;

	float gasolina, preco;

	bool gps;
	
	int opcaoCategoria, opcaoSuv, opcaoCompacto, opcaoSedan, opcaoCor;

	do {
		cout << "\n(1) SUV" << endl;
		cout << "(2) Compacto" << endl;
		cout << "(3) Sedan" << endl;
		cout << "\nCategoria: ";
		cin >> opcaoCategoria;

	} while (opcaoCategoria < 1 || opcaoCategoria > 3);

	switch (opcaoCategoria) {

	case 1:

		do {
			cout << "(1) Volkswagen T-Cross" << endl;
			cout << "(2) BMW X1" << endl;
			cin >> opcaoSuv;
			if (opcaoSuv != 1 && opcaoSuv != 2)
				cout << "\nEscolha inválida!" << endl;
		} while (opcaoSuv != 1 && opcaoSuv != 2);

		if (opcaoSuv == 1) {
			modelo = "Volkswagen T-Cross";
			tipoCarro = "SUV";
		}
		if (opcaoSuv == 2) {
			modelo = "BMW X1";
			tipoCarro = "SUV";
		}
		break;

	case 2:

		do {
			cout << "(1) Hyundai HB20" << endl;
			cout << "(2) Fiat Mobi" << endl;
			cin >> opcaoCompacto;
			if (opcaoCompacto != 1 && opcaoCompacto != 2)
				cout << "\nEscolha inválida!" << endl;
		} while (opcaoCompacto != 1 && opcaoCompacto != 2);

		if (opcaoCompacto == 1) {
			modelo = "Hyundai HB20";
			tipoCarro = "Compacto";
		}
		if (opcaoCompacto == 2) {
			modelo = "Fiat Mobi";
			tipoCarro = "Compacto";
		}
		break;

	case 3:

		do {
			cout << "(1) Volkswagen Virtus" << endl;
			cout << "(2) Fiat Cronos" << endl;
			cout << "(3) Hyundai HB20S" << endl;
			cout << "(4) BMW Serie 5" << endl;
			cin >> opcaoSedan;
			if (opcaoSedan < 1 || opcaoSedan > 4)
				cout << "\nEscolha inválida!" << endl;

		} while (opcaoSedan < 1 || opcaoSedan > 4);

		if (opcaoSedan == 1) {
			modelo = "Volkswagen Virtus";
			tipoCarro = "Sedan";
		}
		if (opcaoSedan == 2) {
			modelo = "Fiat Cronos";
			tipoCarro = "Sedan";
		}
		if (opcaoSedan == 3) {
			modelo = "Hyundai HB20S";
			tipoCarro = "Sedan";
		}
		if (opcaoSedan == 4) {
			modelo = "BMW Serie 5";
			tipoCarro = "Sedan";
		}
		break;

	default:
		cout << "Erro!";
		break;
	}

	do {
		cout << "\n:(1) Prata" << endl;
		cout << "(2) Preto" << endl;
		cout << "(3) Branco" << endl;
		cout << "\nCor:"; cin >> opcaoCor;
		if (opcaoCor < 1 || opcaoCor > 3)
			cout << "\nEscolha uma cor válida" << endl;

	} while (opcaoCor < 1 || opcaoCor > 3);

		switch (opcaoCor) {

		case 1:

			cor = "Prata";
			break;

		case 2:

			cor = "Preto";
			break;

		case 3:

			cor = "Branco";
			break;

		default:
			cout << "Erro!" << endl;
			break;
		}

	do {
		cout << "\nAno:"; cin >> ano;

		if (ano < 2000 || ano > 2053)
			cout << "\nInsira um ano apartir de 2000" << endl;
	} while (ano < 2000 || ano > 2053);

	do {
		cout << "\nPreço:"; cin >> preco;

		if (preco < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (preco < 0);

	do {

		cout << "\nPlaca:"; cin >> placa;
		if (placa.size() != 7) {
			cout << "Placa inválida! Formato requirido: XXXXXXX" << endl;
		}
	} while (placa.size() != 7);

	do {
		cout << "\nPotencia:"; cin >> potencia;

		if (potencia < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (potencia < 0);


	do {
		cout << "\nBagagem:"; cin >> bagagem;

		if (bagagem < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (bagagem < 0);

	do {
		cout << "\nTanque:"; cin >> gasolina;

		if (gasolina < 0)
			cout << "\nValor inválido! Digite um número positivo" << endl;
	} while (gasolina < 0);

	cout << "\nDigite '1' para verdadeiro ou '0' para falso" << endl;
	do {
		cout << "GPS:"; cin >> gps;
	} while (gps != 1 && gps != 0);

	int id_carro = veiculos.size() + 1;

	Carro novoCarro(modelo, tipoCarro, cor, ano, preco, placa, potencia, bagagem, gasolina, gps, id_carro);

	return novoCarro;
}


void Frota::cadastrarCarro()
{
	Carro novoCarro = criarCarro();

	for (const auto& carro : veiculos) {

		if (carro->getPlaca() == novoCarro.getPlaca()) {
			cout << "Já existe um veiculo com essa placa" << endl;
			return;
		}
	}

	veiculos.push_back(new Carro(novoCarro));
	cout << "Carro cadastrado com sucesso!!!" << endl;
}


