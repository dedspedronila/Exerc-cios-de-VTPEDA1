#include <iostream>
#include <cstdlib>

using namespace std;

void Soma_Triplo(int *ptrA, int *ptrB);

int main(int argc, char** argv) 
{
    int a, b;
    int *ptrA, *ptrB;
    
    cout << "Informe dois valores, um após o outro, por gentileza: " <<endl;
    cin >> a >> b;
    
    ptrA = &a;
    ptrB = &b;
    Soma_Triplo(ptrA, ptrB);

    return 0;
}

void Soma_Triplo(int *ptrA, int *ptrB){
    int soma;
    
    soma = 3*(*ptrA) + 3*(*ptrB);
    
    cout << "O resultado da soma dos números " << *ptrA << " e " << *ptrB << " após serem triplicados é de: " << soma;
;}
