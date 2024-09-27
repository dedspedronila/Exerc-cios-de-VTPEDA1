#include <iostream>
#include <cstdlib>

using namespace std;

struct DadosFunc{
        string nome;
        int ano_inicial;
        string cargo;
        double salario;
    } ;

    void Cadastro(DadosFunc *dados);
    void Exibir(DadosFunc *dados);

int main(int argc, char** argv) 
{
        DadosFunc *dados = new DadosFunc;
        Cadastro(dados);
        Exibir(dados);
        delete[] dados;
    
    return 0;
}

    void Cadastro(DadosFunc *dados){
    cout << "Informe seu nome: " <<endl;
    getline(cin,dados[0].nome);
    fflush(stdin);
    cout << "Informe o ano que inciou na empresa: " <<endl;
    cin >> dados[0].ano_inicial;
    fflush(stdin);
    cout << "Informe o seu cargo dentro da empresa: " <<endl;
    getline(cin,dados[0].cargo);
    fflush(stdin);
    cout << "Informe o seu salário atual: " <<endl;
    cin >> dados[0].salario;
    fflush(stdin);
    cout <<endl;
    }
    
    void Exibir(DadosFunc *dados){
    cout <<endl;
    cout << "Exibindo as informações " <<endl;
    cout << "-----------------------------------" <<endl;
    
    cout << "O nome informado foi: " << dados[0].nome <<endl;
    cout << "O ano que iniciou na empresa foi: " << dados[0].ano_inicial <<endl;
    cout << "O cargo que você possui na empresa é: " << dados[0].cargo <<endl;
    cout << "O salário que você recebe é de R$ " << dados[0].salario << " reais!" <<endl;
    }
