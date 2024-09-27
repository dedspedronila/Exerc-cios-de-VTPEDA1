#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    int x = 2, y=10;
    int *ptr1, *ptr2;
    char letra = 'T', *ptrLetra;
    ptr1 = &x;
    ptr2 = nullptr;
    cout << "Valor de ptr: " <<ptr1;
    cout << "\nValor de X de forma indireta: " << *ptr1;
    cout << "O endereço de PTR é: " << &ptr1 <<endl;
    cout << "\nValor de X: " << x;
    cout << "\nEndereço de X: " << &x;
    cout <<endl<<endl;
    ptr2=&y;
    *ptr2=5;
    cout << "O valor de ptr2: " << ptr2 <<endl;
    cout << "O valor de Y de forma indireta: " << *ptr2 <<endl;
    cout << "O endereço de PTR2 é: " << &ptr2 <<endl;
    cout << "O valor de Y é: " << y<<endl;
    cout << "O Endereço de Y é: " << &y<<endl;
    cout <<endl <<endl;
    ptrLetra = &letra;
    cout << "O valor de ptrLetra: " << (void*)ptrLetra <<endl;
    cout << "O valor de letra de forma indireta: " << *ptrLetra <<endl;
    //cout << "O endereço de ptrLetra é: " >> &ptrLetra <<endl;
    cout << "O valor de letra é: " << letra <<endl;
    cout << "Endereço de letra: " << (void*)letra << endl;
    return 0;
}

