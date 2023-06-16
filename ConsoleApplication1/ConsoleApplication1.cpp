#include <iostream>
#include "sistema.h"
#include "cliente.h"

using namespace std;

int main()
{
  
	string LoginCliente, senhaCliente;

	LoginCliente = "login10";
	senhaCliente = "senha20";

	Sistema sistema;

	sistema.cadastrarCliente("login10", "senha20", "email30", "rafael", "888.888.888-88", "01/02/2005", "9-9721-1777", 1);
	if(sistema.autenticarCliente(LoginCliente, senhaCliente)) {
		cout << "Foi cadastrado";
	}
	else {
		cout << "Não foi cadastrado";
	}
	return 0;
} 

