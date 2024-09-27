#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) 
{
    int vetor[7];
    int i, div;
    
    for(i = 0; i<= 6; i++){
        cout << "Informe um número na posição " << i+1 << " :" <<endl;
        cin >> vetor[i];
    }
    cout<< endl;
    cout << "Os valores digitados foram! "<<endl;
    for(i = 0; i <= 6; i++){ 
        cout << vetor[i] << "\t";
        
    }
    cout <<endl;
    cout << "Os números divididos por 3 ou por 7 são: " <<endl;
    
    for(i = 0; i <=6 ; i++){
        if((vetor[i] % 3 == 0) || (vetor[i] % 7 == 0)){
            cout << vetor[i] << "\t";
        }
            else{
            cout << " ";
        }
    }
    return 0;
}

