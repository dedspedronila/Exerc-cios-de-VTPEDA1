#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    int matriz[4][4];
    int i,j ;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << "Informe um número para a posição " << i+1 << "|" << j+1 <<endl;
            cin >> matriz[i][j];
        }
    }
    cout <<endl;
    cout << "Os números digitados foram!" <<endl;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            cout << matriz[i][j] << "\t";
        }
        cout <<endl;
    }
    cout << endl;
    cout << "A diagonal principal é: " <<endl;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == j){
            cout << matriz[i][j] << "\t";
            }
            else{
                cout << "\t";
            }
        }
        cout <<endl;
    }
    cout << "A última linha da matriz é: " <<endl;
        for(j = 0; j < 4; j++){
            cout << matriz[3][j] << "\t";
            
        } 
    
        
    
    return 0;
}

