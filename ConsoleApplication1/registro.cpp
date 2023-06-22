#include "registro.h"

Registro::Registro() {}

void Registro::cadastrarCheckin(Carro* carro, Cliente* cliente)
{
    string dataEntrada, dataSaida;
    int dias;

    do {
        cout << "\nSelecione a data de entrada: ";
        cin >> dataEntrada;

        if (dataEntrada.size() != 10)
            cout << "Data inválida! Formato Requerido: DD/MM/AAAA" << endl;
    } while (dataEntrada.size() != 10);

    do {
        cout << "\nSelecione a data de saída: ";
        cin >> dataSaida;

        if (dataSaida.size() != 10)
            cout << "Data inválida! Formato Requerido: DD/MM/AAAA" << endl;
    } while (dataSaida.size() != 10);

    cout << "\nQuantos dias de aluguel: ";
    cin >> dias;

    Checkin* novoCheckin = new Checkin(dataEntrada, dataSaida, dias, carro, cliente);
    entradas.push_back(novoCheckin);
    cout << "Check-in realizado com sucesso!" << endl;
}

void Registro::cadastrarCheckout(const string& placa)
{
   for (auto it = entradas.begin(); it != entradas.end(); ++it) {  // Percorre o vetor entradas
       if ((*it)->getCarro()->getPlaca() == placa) {               // Checkin para qual o ponteiro it aponta tem a mesma placa 
           Checkin* checkin = *it;                                 // Ponteiro de classe checkin recebe o checkin contido no ponteiro it

           Carro* carro = checkin->getCarro();
           Cliente* cliente = checkin->getCliente();
           string dataEntrada = checkin->getDataEntrada();
           string dataSaida = checkin->getDataSaida();
           int dias = checkin->getDias();
           string modelo = checkin->getCarro()->getModelo();
           string cpf = checkin->getCliente()->getCpf();
           float preco = checkin->getCarro()->getPreco();
           string tipoCarro = checkin->getCarro()->getTipo_carro();

           cout << "\n------ Revisão do Veículo ------" << endl;  // Abre opção para o funcinário informar os resultados de seu relatório
           cout << "(1) Houve Prejuízo" << endl;
           cout << "(2) Não Houve" << endl;
           int opcaoRevisao;
           cin >> opcaoRevisao;

           float danos, multas, gasolinaGasta, precoFinal;
           danos = multas = gasolinaGasta = precoFinal = 0;

           if (opcaoRevisao == 1) {
               cout << "\nQual o valor do dano causado: ";
               cin >> danos;
               cout << "\nQual o valor em multas:";
               cin >> multas;
               do {
                   cout << "\nQual o valor gasto de gasolina: ";
                   cin >> gasolinaGasta;
               } while (checkin->getCarro()->getGasolina() < gasolinaGasta);
           }
            precoFinal = (preco * dias) + danos + multas + gasolinaGasta;
            
            Checkout* checkout = new Checkout(dataEntrada, dataSaida, dias, cliente, carro, precoFinal, danos, multas, gasolinaGasta);
            saidas.push_back(checkout);
            entradas.erase(it);
            cout << "Checkout realizado com sucesso!" << endl;
            return;
        }
    }
    cout << "Placa inválida ou check-in não encontrado!" << endl;
}

void Registro::exibirCheckouts()
{
    for (Checkout* checkout : saidas) {
        cout << "----- Check-out -----" << endl;
        cout << "Placa do carro: " << checkout->getCarro()->getPlaca() << endl;
        cout << "CPF do cliente: " << checkout->getCliente()->getCpf() << endl;
        cout << "Data de check-in: " << checkout->getDataEntrada() << endl;
        cout << "Data do check-out: " << checkout->getDataSaida() << endl;
        cout << "Modelo do carro: " << checkout->getCarro()->getModelo() << endl;
        cout << "Categoria: " << checkout->getCarro()->getTipo_carro() << endl;
        cout << "Dano Financeiro: " << checkout->getDanos() << endl;
        cout << "Valor Multas: " << checkout->getMultas() << endl;
        cout << "Valor Gasolina: " << checkout->getGasolina() << endl;
        cout << "Preço Final: " << checkout->getPrecoFinal() << endl;
    }
}

void Registro::removerCheckin(const string& placa)
{
    for (auto it = entradas.begin(); it != entradas.end(); ++it) {
        if ((*it)->getCarro()->getPlaca() == placa) {
            delete* it;
            entradas.erase(it);
            cout << "Check-in removido com sucesso!" << endl;
            return;
        }
    }
    cout << "Placa inválida ou check-in não encontrado!" << endl;
}

void Registro::removerCheckout(const string& placa)
{
    for (auto it = saidas.begin(); it != saidas.end(); ++it) {
        if ((*it)->getCarro()->getPlaca() == placa) {
            delete* it;
            saidas.erase(it);
            cout << "Check-in removido com sucesso!" << endl;
            return;
        }
    }
    cout << "Placa inválida ou check-in não encontrado!" << endl;
}

void Registro::exibirCheckins()
{
   for (Checkin* checkin : entradas) {
   cout << "----- Check-in -----" << endl;
   cout << "Placa do carro: " << checkin->getCarro()->getPlaca() << endl;
   cout << "CPF do cliente: " << checkin->getCliente()->getCpf() << endl;
   cout << "Data de check-in: " << checkin->getDataEntrada() << endl;
   cout << "Data do check-out: " << checkin->getDataSaida() << endl;
   cout << "Modelo do carro: " << checkin->getCarro()->getModelo() << endl;
   cout << "Categoria: " << checkin->getCarro()->getTipo_carro() << endl;
   cout << "Preço Parcial: " << (checkin->getCarro()->getPreco() * checkin->getDias()) << endl;
        }
}

void Registro::exibirCheckinsCliente(const string& login)
{
   cout << "\nSuas locações em aberto:" << endl;
   for (Checkin* checkin : entradas) {
       if (checkin->getCliente()->getLogin() == login) {
           cout << "----- Check-in -----" << endl;
           cout << "Placa do carro: " << checkin->getCarro()->getPlaca() << endl;
           cout << "CPF do cliente: " << checkin->getCliente()->getCpf() << endl;
           cout << "Data de check-in: " << checkin->getDataEntrada() << endl;
           cout << "Data do check-out: " << checkin->getDataSaida() << endl;
           cout << "Modelo do carro: " << checkin->getCarro()->getModelo() << endl;
           cout << "Categoria: " << checkin->getCarro()->getTipo_carro() << endl;
           cout << "Preço Parcial: " << (checkin->getCarro()->getPreco() * checkin->getDias()) << endl;
       }
    }
}

void Registro::exibirCheckoutsCliente(const string& login)
{
    cout << "\nSuas locações concluídas:" << endl;
    for (Checkout* checkout : saidas) {
        if (checkout->getCliente()->getLogin() == login) {
            cout << "----- Check-out -----" << endl;
            cout << "Placa do carro: " << checkout->getCarro()->getPlaca() << endl;
            cout << "CPF do cliente: " << checkout->getCliente()->getCpf() << endl;
            cout << "Data de check-in: " << checkout->getDataEntrada() << endl;
            cout << "Data do check-out: " << checkout->getDataSaida() << endl;
            cout << "Modelo do carro: " << checkout->getCarro()->getModelo() << endl;
            cout << "Categoria: " << checkout->getCarro()->getTipo_carro() << endl;
            cout << "Dano Financeiro: " << checkout->getDanos() << endl;
            cout << "Valor Multas: " << checkout->getMultas() << endl;
            cout << "Valor Gasolina: " << checkout->getGasolina() << endl;
            cout << "Preço Final: " << checkout->getPrecoFinal() << endl;
        }
    }
}

