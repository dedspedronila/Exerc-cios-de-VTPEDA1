#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;


int main(int argc, char** argv) 
{
    int *vetor1, *vetor2, *soma, quant, i;
    
    cout << "Informe o tamanho que deseja para o primeiro vetor e o segundo vetor:" <<endl;
    cin >> quant;
    vetor1 = new (std::nothrow) int[quant];
    
    for(i = 0; i < quant; i++){
        do{
        cout << "Informe o número para a posição " << i+1 << " do vetor 1 : " <<endl;
        cin >> vetor1[i];
        
        }while((vetor1[i] < 0) || (vetor1[i] > 10));
    }
    
    vetor2 = new (std::nothrow) int[quant];
    cout << endl <<"-------------------------" << endl <<endl;
    
    for(i = 0; i < quant; i++){
        do{
        cout << "Informe o número para a posição " << i+1 << " do vetor 2 : " <<endl;
        cin >> vetor2[i];
        }while((vetor2[i] < 0) || (vetor2[i] > 10));
    }
    soma = new (std::nothrow) int[quant];
    
    for(i = 0; i < quant; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
    
    for(i = 0; i < quant; i++){
    cout << "A soma da " << i+1 << "ª posição é : " << soma[i] <<endl;
    }
    return 0;
}

