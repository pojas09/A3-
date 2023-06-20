#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>

using namespace std;

	class Usuario {

		private:

		string login;
		string senha;
		string nome;
		string telefone;
		string email;
		string nascimento;
		string cpf;

		public:
		
		Usuario();
		Usuario(const string& login, const string& senha, const string& email, const string& nome, const string& cpf, const string& nascimento, const string& telefone);
	
		void setLogin(const string& novoLogin);
		void setSenha(const string& novaSenha);
		void setNome(const string& novoNome);
		void setTelefone(const string& novoTelefone);
		void setEmail(const string& novoEmail);
		void setNascimento(const string& novoNascimento);
		void setCpf(const string& novoIdentifcacao);

		string getLogin() const;
		string getSenha() const;
		string getEmail() const;
		string getCpf() const;


	};

#endif