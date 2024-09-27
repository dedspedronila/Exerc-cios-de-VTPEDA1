#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    struct aluno{
        string nome;
        string curso;
        int ano_nasc;
        string prontuario;
    
    } straluno;
        int idade;
    
        cout << "Informe o seu nome: " <<endl;
        getline(cin,straluno.nome);
        fflush(stdin);
        cout << "Informe o seu curso: " <<endl;
        getline(cin,straluno.curso);
        fflush(stdin);
        cout << "Informe o ano do seu nascimento: " <<endl;
        cin >> straluno.ano_nasc;
        if(straluno.ano_nasc < 1950){
            cout << "Ano de nascimento inválido!" <<endl;
            return 0;
        }
        fflush(stdin);
        cout << "Informe o seu prontuário: " <<endl;
        cin >> straluno.prontuario;
        fflush(stdin);
        
        cout <<endl;
        cout << "O nome do aluno é : " << straluno.nome <<endl;
        cout << "O curso do aluno é : " << straluno.curso<<endl;
        cout << "O ano de nascimento é: " << straluno.ano_nasc<<endl;
        cout << "O prontuário é: " << straluno.prontuario <<endl;
        
        idade = 2024 - straluno.ano_nasc;
        cout << "A sua idade é: " << idade;
        
        
    return 0;
}

