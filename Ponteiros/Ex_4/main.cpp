#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void recebeRaio(double *r);
void calculaVolumeEsfera(double *r, double *v);
void exibeDados(double *r, double *v);



int main(int argc, char** argv) 
{
    double r,v;
    recebeRaio(&r);
    calculaVolumeEsfera(&r,&v);
    exibeDados(&r,&v);
    
    return 0;
}

void recebeRaio(double *r){
    do{
        cout << "Informe o raio da esfera: ";
        cin >> *r;
        if(*r<=0){
            cout << "Valor Inválido, raio deve ser positivo! " <<endl;
        }
    }while (*r<=0);
}
    
void calculaVolumeEsfera(double *r, double *v){
    *v = (4.0/3)*M_PI*pow(*r,3);

}

void exibeDados(double *r, double *v){
    cout << "Dados da Esfera" <<endl;
    cout << "Raio: " << *r << endl;
    cout << "Volume: " << *v << endl;

}