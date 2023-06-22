#ifndef SISTEMA_H
#define SISTEMA_H

#include <vector>
#include <string>
#include "cliente.h"
#include "funcionario.h"

using namespace std;

class Sistema {

  private:

  vector<Cliente*> clientes;
  vector<Funcionario*> funcionarios;
      
  public:

  // Construtores
  Sistema();

  // Cria os usuarios
  Cliente criarCliente();
  Funcionario criarFuncionario();

  // Checa se os usuarios já existem e os cadastra caso não
  void cadastrarCliente();
  void cadastrarFuncionario();

  // Verifica se o login é valído
  bool autenticarCliente(const string& login, const string& senha);
  bool autenticarFuncionario(const string& login, const string& senha);

  Cliente* obterCliente(const string& login);  // Obtem o Cliente associado ao login
  void removerFuncionario(const string& login, const string& senha);
};
#endif
