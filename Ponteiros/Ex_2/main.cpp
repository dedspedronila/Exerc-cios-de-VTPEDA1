#include <iostream>
#include <cstdlib>

void soma(float a, float b, float *r);
using namespace std;

int main(int argc, char** argv) 
{
    float num1, num2, p;
    
  
    
    
    cout << "Esse programa irá calcular a soma de dois números! " <<endl;
    cout << "Informe o primeiro número "  <<endl;
    cin >> num1;
    cout << "Informe o segundo número " <<endl;
    cin >> num2;
    soma(num1, num2, &p);
    cout << "A soma dos números informados é : " << p;
    
    return 0;
}

void soma(float a, float b, float *r ){
    *r = a + b ;
    
}
