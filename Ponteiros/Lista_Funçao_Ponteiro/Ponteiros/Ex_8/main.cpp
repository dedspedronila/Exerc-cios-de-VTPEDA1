#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

void Esfera(float *ptrRaio);

int main(int argc, char** argv) 
{
    float R, *ptrRaio;
    cout << "Informe o valor de um raio, para o calculo da área e volume de uma esfera: " <<endl;
    cin >> R;
    
    ptrRaio = &R;
    Esfera(ptrRaio);
    return 0;
}

void Esfera(float *ptrRaio){
    float area, volume;
    
    area = 4 * M_PI * pow(*ptrRaio, 2);
    volume = (4.0/3.0) * M_PI * pow(*ptrRaio,3);
    
    cout << "A area é de " << area <<endl << "O volume é de: " << volume;
    
}
