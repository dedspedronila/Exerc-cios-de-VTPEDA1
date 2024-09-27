#include <iostream>
#include <cstdlib>

using namespace std;

struct DadosFunc{
        string nome;
        int ano_inicial;
        string cargo;
        double salario;
    } ;
    
    void Maior(DadosFunc *dados);

int main(int argc, char** argv) 
{
    DadosFunc *dados = new DadosFunc[5];
    
    int i;
    
    
    for(i = 0; i<5; i++){
        cout << "Informe seu nome: " <<endl;
        getline(cin,dados[i].nome);
        fflush(stdin);
        cout << "Informe o ano que inciou na empresa: " <<endl;
        cin >> dados[i].ano_inicial;
        fflush(stdin);
        cout << "Informe o seu cargo dentro da empresa: " <<endl;
        getline(cin,dados[i].cargo);
        fflush(stdin);
        cout << "Informe o seu salário atual: " <<endl;
        cin >> dados[i].salario;
        fflush(stdin);
        cout <<endl << "----------------" <<endl <<endl;
    }
    cout << "Dados obtidos: " <<endl;
    cout << "-------------------" <<endl;
    for(i = 0; i < 5; i++){
        cout << "O nome informado foi: " << dados[i].nome <<endl;
        cout << "O ano que iniciou na empresa foi: " << dados[i].ano_inicial <<endl;
        cout << "O cargo que você possui na empresa é: " << dados[i].cargo <<endl;
        cout << "O salário que você recebe é de R$ " << dados[i].salario << " reais!" <<endl;
        cout << "-----------------------------------" <<endl;
    }
    
    Maior(dados);
    
    delete[] dados;
    return 0;
}

    void Maior(DadosFunc *dados){
       
    int indice_array_maior = 0;

   
    for (int i = 0; i < 5; i++)
    {
        
        if (dados[i].salario > dados[indice_array_maior].salario)
        {
            indice_array_maior = i; 
        }
    }

    cout << "O funcionário com o maior salário é: " << endl;
    cout << "Nome: " << dados[indice_array_maior].nome << endl;
    cout << "Cargo: " << dados[indice_array_maior].cargo << endl;
    cout << "Salário: R$ " << dados[indice_array_maior].salario << " reais!" << endl;

        
    }