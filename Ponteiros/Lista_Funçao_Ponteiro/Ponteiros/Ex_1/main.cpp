#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    int a = 3, *ptra;
    float b = 2.4, *ptrb;
    char c = 'A', *ptrc;
    
    ptra = &a;
    ptrb = &b;
    ptrc = &c;
    
    cout << "O valor de A de forma indireta é: " << *ptra <<endl;
    cout << "O valor de A de forma direta é: " << a <<endl;
    cout << "O endereço de A de forma indireta é: " << ptra <<endl;
    cout << "O endereço de A de forma direta é: " << &a <<endl;
    
    cout << endl << "-------------------" <<endl;
    
    cout << "O valor de B de forma indireta é: " << *ptrb <<endl;
    cout << "O valor de B de forma direta é: " << b <<endl;
    cout << "O endereço de B de forma indireta é: " << ptrb <<endl;
    cout << "O endereço de B de forma direta é: " << &b <<endl;
    
    cout << endl << "-------------------" <<endl;

    cout << "O valor de C de forma indireta é: " << *ptrc <<endl;
    cout << "O valor de C de forma direta é: " << c <<endl;
    cout << "O endereço de C de forma indireta é: " << (void*)ptrc <<endl;
    cout << "O endereço de C de forma direta é: " << (void*)&c <<endl;
    
    cout << "---------------------------------------" <<endl;
    
    cout << "Após as modificações: " <<endl <<endl;
    *ptra = 8;
    *ptrb = 7.7;
    *ptrc = 'M';
    
    cout << "O valor de A de forma indireta é: " << *ptra <<endl;
    cout << "O valor de A de forma direta é: " << a <<endl;
    cout << "O endereço de A de forma indireta é: " << ptra <<endl;
    cout << "O endereço de A de forma direta é: " << &a <<endl;
    
    cout << endl << "-------------------" <<endl;
    
    cout << "O valor de B de forma indireta é: " << *ptrb <<endl;
    cout << "O valor de B de forma direta é: " << b <<endl;
    cout << "O endereço de B de forma indireta é: " << ptrb <<endl;
    cout << "O endereço de B de forma direta é: " << &b <<endl;
    
    cout << endl << "-------------------" <<endl;

    cout << "O valor de C de forma indireta é: " << *ptrc <<endl;
    cout << "O valor de C de forma direta é: " << c <<endl;
    cout << "O endereço de C de forma indireta é: " << (void*)ptrc <<endl;
    cout << "O endereço de C de forma direta é: " << (void*)&c <<endl;
    return 0;
}

