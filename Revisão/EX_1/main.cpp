#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    float vetor[10];
   unsigned int i;
    
    for(i = 0; i <=9; i++){
        cout << "Informe um valor para o vetor na posição " << i+1 << " :" <<endl;
        cin >> vetor[i];
    }
    cout << "Será exibido aqui os números informados!" <<endl;
    
    for(i = 0; i <=9; i++){
        cout << vetor[i] << "\t";
    }
    cout << endl;
    cout << "Aqui será exibido os números na ordem inversa! " <<endl;
    
    for(i = 9; i >= 0; i--){
        cout << vetor[i] << "\t";
    }
    return 0;
}

