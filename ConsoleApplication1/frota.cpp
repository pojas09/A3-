#include "frota.h"
#include <iostream>

using namespace std;


Frota::Frota()
{	
	Sedan* novoSedan = new Sedan("Volkswagen Virtus", "Sedan", "Cinza", 2020, 92, "ASR2073", 115, 521, 52, 1);
	sedans.push_back(novoSedan);
	Sedan* novoSedan = new Sedan("Fiat Cronos", "Sedan", "Azul", 2022, 92, "ISA2808", 105, 500, 50, 0);
	sedans.push_back(novoSedan);
	Sedan* novoSedan = new Sedan("Hyundai HB20S", "Sedan", "Branco", 2019, 92, "BRU1403", 97, 450, 45, 0);
	sedans.push_back(novoSedan);
	Sedan* novoSedan = new Sedan("BMW Serie 5", "Sedan", "Preto", 2022, 92, "SAM2109", 290, 410, 55, 1);
	sedans.push_back(novoSedan);
	SUV* novoSUV = new SUV("T-Cross", "SUV", "Branco", 2021, 185, "ITA0964", 128, 373, 52, 1);
	suvs.push_back(novoSUV);
	SUV* novoSUV = new SUV("BMW X1", "SUV", "Branco", 2022, 185, "GMX4582", 150, 350, 55, 1);
	suvs.push_back(novoSUV);
	Compacto* novoCompacto = new Compacto("Fiat Mobi", "Compacto", "Vermelho", 2019, 78, "XSA13O2", 80, 215, 40, 0);
	compactos.push_back(novoCompacto);
	Compacto* novoCompacto = new Compacto("Hyundai HB20", "Compacto", "Cinza", 2020, 75, "IML1341", 92, 220, 45, 0);
	compactos.push_back(novoCompacto);
}   

void Frota::cadastrarSuv()
{
	ModeloSuv modeloEscolhido;
	int opcaoModelo;

	Carro novoCarro = criarCarro();

	if (verificarPlaca(novoCarro.getPlaca())) {
		cout << "Já existe um veículo com essa placa!" << endl;
		return;
	};

	SUV novoSuv;

	cout << "\n(1) BMW X1" << endl;
	cout << "(2) Volkswagen T-Cross" << endl;
	cout << "\nModelo: ";
	cin >> opcaoModelo;

	switch (opcaoModelo) {
	case 1:
		modeloEscolhido = BMWX1;
		break;
	case 2:
		modeloEscolhido = Volkswagen_T_Cross;
		break;
	default:
		cout << "Opção inválida!" << endl;
		break;
	}

	novoSuv.setModelo(SUV::getNomeModelo(modeloEscolhido));
	novoSuv.setAno(novoCarro.getAno());
	novoSuv.setTipo_carro("SUV");
	novoSuv.setCor(novoCarro.getCor());
	novoSuv.setPlaca(novoCarro.getPlaca());
	novoSuv.setPotencia(novoCarro.getPotencia());
	novoSuv.setBagagem(novoCarro.getBagagem());
	novoSuv.setGasolina(novoCarro.getGasolina());
	novoSuv.setPreco(novoCarro.getPreco());
	novoSuv.setGps(novoCarro.getGps());

	suvs.push_back(new SUV(novoSuv));
	cout << "Carro cadastrado com sucesso!!!" << endl;
}

void Frota::cadastrarSedan()
{	
	ModeloSedan modeloEscolhido;
	int opcaoModelo;
	
	Carro novoCarro = criarCarro();

	if (verificarPlaca(novoCarro.getPlaca())) {
		cout << "Já existe um veículo com essa placa!" << endl;
		return;
	};

	Sedan novoSedan;
	
	cout << "\n(1) Volkswagen Virtus" << endl;
	cout << "(2) Fiat Cronos" << endl;
	cout << "(3) Hyundai HB20S" << endl;
	cout << "(4) BMW Serie 5" << endl;
	cout << "\nModelo: ";
	cin >> opcaoModelo;
	
	switch (opcaoModelo) {
		case 1:
			modeloEscolhido = Volkswagen_Virtus;
			break;
		case 2:
			modeloEscolhido = Fiat_Cronos;
			break;
		case 3:
			modeloEscolhido = Hyundai_HB20S;
			break;
		case 4:
			modeloEscolhido = BMW_Serie_5;
			break;
		default:
			cout << "Opção inválida!" << endl;
			break;
	}

	novoSedan.setModelo(Sedan::getNomeModelo(modeloEscolhido));
	novoSedan.setAno(novoCarro.getAno());
	novoSedan.setTipo_carro("Sedan");
	novoSedan.setCor(novoCarro.getCor());
	novoSedan.setPlaca(novoCarro.getPlaca());
	novoSedan.setPotencia(novoCarro.getPotencia());
	novoSedan.setBagagem(novoCarro.getBagagem());
	novoSedan.setGasolina(novoCarro.getGasolina());
	novoSedan.setPreco(novoCarro.getPreco());
	novoSedan.setGps(novoCarro.getGps());

	sedans.push_back(new Sedan(novoSedan));
	cout << "Carro cadastrado com sucesso!!!" << endl;
}

void Frota::cadastrarCompacto()
{
	ModeloCompacto modeloEscolhido;
	int opcaoModelo;

	Carro novoCarro = criarCarro();

	if(verificarPlaca(novoCarro.getPlaca())) {
		cout << "Já existe um veículo com essa placa!" << endl;
		return;
	};

	Compacto novoCompacto;

	cout << "\n(1) Fiat Mobi" << endl;
	cout << "(2) Hyundai HB20" << endl;
	cout << "\nModelo: ";
	cin >> opcaoModelo;

	switch (opcaoModelo) {

		case 1:
			modeloEscolhido = Fiat_Mobi;
			break;
		case 2:
			modeloEscolhido = Hyundai_HB20;
			break;
		default:
			cout << "Opção inválida!" << endl;
			break;
	}

	novoCompacto.setModelo(Compacto::getNomeModelo(modeloEscolhido));
	novoCompacto.setAno(novoCarro.getAno());
	novoCompacto.setTipo_carro("Compacto");
	novoCompacto.setCor(novoCarro.getCor());
	novoCompacto.setPlaca(novoCarro.getPlaca());
	novoCompacto.setPotencia(novoCarro.getPotencia());
	novoCompacto.setBagagem(novoCarro.getBagagem());
	novoCompacto.setGasolina(novoCarro.getGasolina());
	novoCompacto.setPreco(novoCarro.getPreco());
	novoCompacto.setGps(novoCarro.getGps());

	compactos.push_back(new Compacto(novoCompacto));
	cout << "Carro cadastrado com sucesso!!!" << endl;
}


Carro Frota::criarCarro()
{
	string cor, placa;
	int potencia, bagagem, ano;
	float gasolina, preco;
	bool gps;
	
	int opcaoCategoria, opcaoSuv, opcaoCompacto, opcaoSedan;

	cout << "\nCor: "; cin >> cor;
		
	do {
		cout << "\nAno: "; cin >> ano;

		if (ano < 2000 || ano > 2053)
			cout << "\nInsira um ano apartir de 2000" << endl;
	} while (ano < 2000 || ano > 2053);

	do {
		cout << "\nPreço: "; cin >> preco;

		if (preco < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (preco < 0);

	do {

		cout << "\nPlaca: "; cin >> placa;
		if (placa.size() != 7) {
			cout << "Placa inválida! Formato requirido: XXXXXXX" << endl;
		}
	} while (placa.size() != 7);

	do {
		cout << "\nPotencia: "; cin >> potencia;

		if (potencia < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (potencia < 0);


	do {
		cout << "\nBagagem: "; cin >> bagagem;

		if (bagagem < 0)
			cout << "\nValor inválido! Digite um número postivo" << endl;
	} while (bagagem < 0);

	do {
		cout << "\nTanque: "; cin >> gasolina;

		if (gasolina < 0)
			cout << "\nValor inválido! Digite um número positivo" << endl;
	} while (gasolina < 0);

	cout << "\nDigite '1' para verdadeiro ou '0' para falso" << endl;
	do {
		cout << "GPS: "; cin >> gps;
	} while (gps != 1 && gps != 0);

	Carro novoCarro("", "", cor, ano, preco, placa, potencia, bagagem, gasolina, gps);

	return novoCarro;
}

string Frota::obterModeloCarro(const string& placa)
{
	for (const auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
			return suv->getModelo();
			
		}
	}

	for (const auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
			return sedan->getModelo();
		}
	}

	for (const auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
			return compacto->getModelo();
		}
	}
	return "";
}

string Frota::obterTipoCarro(const string& placa)
{
	for (const auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
			return suv->getTipo_carro();

		}
	}

	for (const auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
			return sedan->getTipo_carro();
		}
	}

	for (const auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
			return compacto->getTipo_carro();
		}
	}
	return "";
}

float Frota::obterPrecoCarro(const string& placa)
{
	for (const auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
			return suv->getPreco();

		}
	}

	for (const auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
			return sedan->getPreco();
		}
	}

	for (const auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
			return compacto->getPreco();
		}
	}
	return 0;
}

Carro* Frota::obterCarro(const string & placa)
{
	for (const auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
		return sedan;
		}
	}
	for (const auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
		return compacto;
		}
	}
	for (const auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
		return suv;
		}
	}
	return nullptr;
}

void Frota::removerSuv()
{
	string placa;
	cout << "Digite a placa do carro que você deseja excluir: ";
	cin >> placa;

	for (auto it = suvs.begin(); it != suvs.end(); ++it) {
		if ((*it)->getPlaca() == placa) {
			delete* it;
			suvs.erase(it);
			cout << "Carro removido com sucesso!" << endl;
			return;
		}
	}
	cout << "Não foi encontrado um carro com a placa informada" << endl;
}

void Frota::removerSedan()
{
	string placa;
	cout << "Digite a placa do carro que você deseja excluir: ";
	cin >> placa;

	for (auto it = sedans.begin(); it != sedans.end(); ++it) {
		if ((*it)->getPlaca() == placa) {
			delete* it;
			sedans.erase(it);
			cout << "Carro removido com sucesso!" << endl;
			return;
		}
	}
	cout << "Não foi encontrado um carro com a placa informada" << endl;
}

void Frota::removerCompacto()
{
	string placa;
	cout << "Digite a placa do carro que você deseja excluir: ";
	cin >> placa;

	for (auto it = compactos.begin(); it != compactos.end(); ++it) {
		if ((*it)->getPlaca() == placa) {
			delete* it;
			compactos.erase(it);
			cout << "Carro removido com sucesso!" << endl;
			return;
		}
	}
	cout << "Não foi encontrado um carro com a placa informada" << endl;
}

void Frota::alterarSuv()
{
	string placa;
	cout << "Digite a placa do carro que você deseja alterar: ";
	cin >> placa;

	for (auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
			cout << "Digite os novos valores do carro:" << endl;
			string novaCor;
			cout << "Nova cor: ";
			cin >> novaCor;
			suv->setCor(novaCor);

			float novoPreco;
			do {
				cout << "Novo Preço: ";
				cin >> novoPreco;
			} while (novoPreco < 0);
			suv->setPreco(novoPreco);

			bool novoGps;
			cout << "\nDigite 1 para verdadeiro e 0 para falso!" << endl;
			cout << "GPS: ";
			cin >> novoGps;
			suv->setGps(novoGps);

			cout << "Carro alterado com sucesso!" << endl;
			return;
		}
	}
}

void Frota::alterarSedan()
{
	string placa;
	cout << "Digite a placa do carro que você deseja alterar: ";
	cin >> placa;

	for (auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
			cout << "Digite os novos valores do carro:" << endl;
			string novaCor;
			cout << "Nova cor: ";
			cin >> novaCor;
			sedan->setCor(novaCor);

			float novoPreco;
			do {
				cout << "Novo Preço: ";
				cin >> novoPreco;
			} while (novoPreco < 0);
			sedan->setPreco(novoPreco);

			bool novoGps;
			cout << "\nDigite 1 para verdadeiro e 0 para falso!" << endl;
			cout << "GPS: ";
			cin >> novoGps;
			sedan->setGps(novoGps);

			cout << "Carro alterado com sucesso!" << endl;
			return;
		}
	}
}

void Frota::alterarCompacto()
{
	string placa;
	cout << "Digite a placa do carro que você deseja alterar: ";
	cin >> placa;

	for (auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
			cout << "Digite os novos valores do carro:" << endl;
			string novaCor;
			cout << "Nova cor: ";
			cin >> novaCor;
			compacto->setCor(novaCor);

			float novoPreco;
			do {
				cout << "Novo Preço: ";
				cin >> novoPreco;
			} while (novoPreco < 0);
			compacto->setPreco(novoPreco);

			bool novoGps;
			cout << "\nDigite 1 para verdadeiro e 0 para falso!" << endl;
			cout << "GPS: ";
			cin >> novoGps;
			compacto->setGps(novoGps);

			cout << "Carro alterado com sucesso!" << endl;
			return;
		}
	}
}



bool Frota::verificarPlaca(const string& placa)
{
	for (const auto& suv : suvs) {
		if (suv->getPlaca() == placa) {
			return true;
		}
	}

	for (const auto& sedan : sedans) {
		if (sedan->getPlaca() == placa) {
			return true;
		}
	}

	for (const auto& compacto : compactos) {
		if (compacto->getPlaca() == placa) {
			return true;
		}
	}
	return false;
}

void Frota::exibirSedans()
{
	if (sedans.empty()) {
		cout << "A frota de sedans está vazia!" << endl;
		return;
	}
	cout << "\nSedans: ------------------:" << endl;
	for (const auto& sedan : sedans) {
		cout << "Placa: " << sedan->getPlaca() << endl;
		cout << "Modelo: " << sedan->getModelo() << endl;
		cout << "Cor: " << sedan->getCor() << endl;
		cout << "Categoria: " << sedan->getTipo_carro() << endl;
		cout << "Potencia: " << sedan->getPotencia() << " HP" << endl;
		cout << "Bagageiro: " << sedan->getBagagem() << " L" << endl;
		cout << "Ano: " << sedan->getAno() << endl;
		cout << "Preço: " << sedan->getPreco() << " Reais" << endl;
		cout << "GPS: " << sedan->getGps() << endl;
		cout << "------------------------" << endl;
	}
}

void Frota::exibirSUVs()
{
	if (suvs.empty()) {
		cout << "A frota de SUVs está vazia." << endl;
		return;
	}
	cout << "\nSUV's: ------------------" << endl;
	for (const auto& suv : suvs) {
		cout << "Placa: " << suv->getPlaca() << endl;
		cout << "Modelo: " << suv->getModelo() << endl;
		cout << "Cor: " << suv->getCor() << endl;
		cout << "Categoria: " << suv->getTipo_carro() << endl;
		cout << "Potencia: " << suv->getPotencia() << " HP" << endl;
		cout << "Bagageiro: " << suv->getBagagem() << " L" << endl;
		cout << "Ano: " << suv->getAno() << endl;
		cout << "Preço: " << suv->getPreco() << " Reais" << endl;
		cout << "GPS: " << suv->getGps() << endl;
		cout << "------------------------" << endl;
	}
}

void Frota::exibirCompactos()
{
	if (compactos.empty()) {
		cout << "A frota de compactos está vazia." << endl;
		return;
	}
	cout << "\nCOMPACTOS: ---------------" << endl;
	for (const auto& compacto : compactos) {
		cout << "Placa: " << compacto->getPlaca() << endl;
		cout << "Modelo: " << compacto->getModelo() << endl;
		cout << "Cor: " << compacto->getCor() << endl;
		cout << "Categoria: " << compacto->getTipo_carro() << endl;
		cout << "Potencia: " << compacto->getPotencia() << " HP" << endl;
		cout << "Bagageiro: " << compacto->getBagagem() << " L" << endl;
		cout << "Ano: " << compacto->getAno() << endl;
		cout << "Preço: " << compacto->getPreco() << " Reais" << endl;
		cout << "GPS: " << compacto->getGps() << endl;
		cout << "------------------------" << endl;
	}
}

void Frota::setEndereco(const string& novoEndereco)
{
	endereco = novoEndereco;
}

string Frota::getEndereco() const
{
	return endereco;
}

