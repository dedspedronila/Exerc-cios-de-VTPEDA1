#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
{
    float vetor[15];
    int soma = 0, i;
    
    for(i = 0; i <= 14; i++){
        cout << "Informe um número para a posição " << i+1 << " :" <<endl;
        cin >> vetor[i];
        soma += vetor[i] ;
    }
    cout <<endl;
    cout << "Aqui será exibido os valores digitados! " <<endl;
            
    for(i = 0; i <= 14; i++){
        cout << vetor[i] << "\t";
        
    }
    
    cout <<endl;
    cout << "Aqui será exibida a soma dos números do vetor!" <<endl;
    
    cout << soma;
 
    
    return 0;
}

