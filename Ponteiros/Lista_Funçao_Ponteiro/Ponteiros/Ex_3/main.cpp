#include <iostream>
#include <cstdlib>

using namespace std;

void Troca(int *a, int *b);

int main(int argc, char** argv) 
{
    int a, b;
    int *ptrA, *ptrB;
    
    cout << "Informe um valor para cade variavel: " <<endl;
    cin >> a >> b;
    
    ptrA = &a;
    ptrB = &b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;    
    Troca(&a,&b);
    
    cout <<endl << "------------------------" <<endl <<endl;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void Troca(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
   
}
