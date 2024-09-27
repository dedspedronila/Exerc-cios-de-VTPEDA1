#include <iostream>
#include <cstdlib>

using namespace std;

void Preencher(int *vetor1, int *vetor2, int *soma, int quant);
void Soma(int *vetor1, int *veto2, int *soma, int quant);
void Exibir(int *soma, int quant);

int main(int argc, char** argv) 
{
    int *vetor1, *vetor2, *soma, quant;
    cout << "Informe o tamanho dos dois vetores: " << endl;
    cin >> quant;
    
    vetor1 = new (std::nothrow) int[quant];
    vetor2 = new (std::nothrow) int[quant];
    soma = new (std::nothrow) int[quant];

    
    Preencher(vetor1, vetor2, soma, quant);
    Soma(vetor1, vetor2, soma, quant);
    Exibir(soma, quant);
    return 0;
}

void Preencher(int *vetor1, int *vetor2, int *soma, int quant) {
    
    
    for(int i = 0; i < quant ; i++){
        do{
        cout << "Informe o número para a " << i+1 << "ª posição do vetor 1 : " <<endl;
        cin >> vetor1[i];
        } while ((vetor1[i] < 0) || (vetor1[i] > 10));
    }
    
    cout << endl <<"-------------------------" << endl <<endl;
    
    for(int i = 0; i < quant ; i++){
        do{
        cout << "Informe o número para a " << i+1 << "ª posição do vetor 2 : " <<endl;
        cin >> vetor2[i];
        } while ((vetor2[i] < 0) || (vetor2[i] > 10));
    }
    
}

void Soma(int *vetor1, int *vetor2, int *soma, int quant){

    for(int i = 0; i < quant ; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
}

void Exibir(int *soma, int quant){
    for(int i = 0; i < quant; i++){
    cout << "A soma da " << i+1 << "ª posição é : " << soma[i] <<endl;
    }
}
