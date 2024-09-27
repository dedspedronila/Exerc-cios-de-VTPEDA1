#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    int i,maior;
    
    struct DadosPet{
        string nome_pet;
        string raca;
        int idade;
        string nome;
        long int telefone;
        
    } strDados[5];
    
    for(i = 0; i < 5; i++){
        cout << "Informe o nome do seu animal: " <<endl;
        getline(cin,strDados[i].nome_pet);
        fflush(stdin);
        cout << "Informe  a raça do seu animal: " <<endl;
        getline(cin,strDados[i].raca);
        fflush(stdin);
        cout << "Informe a idade do seu animal: " <<endl;
        cin >> strDados[i].idade;
        if(strDados[i].idade > 150){
            cout << "A idade é inválida! ";
            return 0;
        }
        fflush(stdin);
        cout << "Informe o nome do dono: " <<endl;
        getline(cin,strDados[i].nome);
        fflush(stdin);
        cout << "Informe o telefone do dono: " <<endl;
        cin >> strDados[i].telefone;
        fflush(stdin);
        cout<<"------------------------------" <<endl;
        
    }
    
    for(i = 0; i < 5; i++){
        cout << "O nome do pet é: " << strDados[i].nome_pet <<endl;
        cout << "A raça do pet é: " << strDados[i].raca << endl;
        cout << "A idade do pet é: " << strDados[i].idade <<endl;
        cout << "O nome do dono é: " << strDados[i].nome <<endl;
        cout << "O telefone do dono é: " << strDados[i].telefone <<endl;
        cout << "---------------------------------" <<endl;
        if(strDados[i].idade > maior){
            maior = strDados[i].idade;
        }
        
    }
        cout << "A maior idade é : " <<maior;
    
    return 0;
}

