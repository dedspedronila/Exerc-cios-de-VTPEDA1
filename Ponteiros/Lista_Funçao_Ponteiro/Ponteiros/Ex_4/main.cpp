#include <iostream>
#include <cstdlib>

using namespace std;

void Testa_Mostra(int *ptr1, int *ptr2);

int main(int argc, char** argv) 
{
    int num1, num2;
    int *ptr1, *ptr2;
    
    cout << "Informe respectivamente o valor para o primeiro e para o segundo número: " <<endl;
    cin >> num1 >> num2;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    Testa_Mostra(ptr1,ptr2);
    return 0;
}

void Testa_Mostra(int *ptr1, int *ptr2){
    int maior, menor;
    if(*ptr1 > *ptr2){
        maior = *ptr1;
        menor = *ptr2;
    } else {
        maior = *ptr2;
        menor = *ptr1;
    }
    
    cout << "O maior número é " << maior << " \nE o menor número é: " << menor;
}