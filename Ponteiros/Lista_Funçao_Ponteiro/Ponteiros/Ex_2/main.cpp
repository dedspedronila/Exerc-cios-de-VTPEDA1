#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) 
{
    float a = 3.3, b = 2.8, *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;
    
    if(ptra > ptrb){
        cout << "O maior endereço é o de A, que vale: " << ptra <<endl;
    }
    else{
        cout << "O maior endereço é o de b, que vale: " << ptrb <<endl;
    }
    
    cout << "O valor de A é: " << *ptra <<endl;
    cout << "O valor de B é: " << *ptrb <<endl;
    return 0;
}

