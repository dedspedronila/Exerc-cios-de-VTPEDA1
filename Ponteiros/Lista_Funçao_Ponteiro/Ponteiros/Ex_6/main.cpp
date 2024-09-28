#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    int vetor[6], i, *ptrVet;
    
    for(i = 0; i < 6; i++){
        cout << "Informe o valor para a posição " << i+1 << " do vetor: " <<endl;
        cin >> vetor[i];
    }
    
    ptrVet = vetor;
    
    for(i = 0; i < 6; i++) {
        cout << "O valor do vetor na posição " << i+1 << " e de: " << *ptrVet <<endl;
        ptrVet++;
    }
    
    return 0;

}
