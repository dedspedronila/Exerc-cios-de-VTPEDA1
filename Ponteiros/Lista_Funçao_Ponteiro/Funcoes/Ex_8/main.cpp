#include <iostream>
#include <cstdlib>

using namespace std;

void RecebeDados(double *distancia, double *litros);
void CalculoeExibe(double *distancia, double *litros, double *resultado);


int main(int argc, char** argv) 
{
    double distancia, litros, resultado;
    
    RecebeDados(&distancia, &litros);
    CalculoeExibe(&distancia, &litros, &resultado);
    return 0;
}

void RecebeDados(double *distancia, double *litros){
    cout << "Informe a distância percorrida pelo automovel, em KM: " <<endl;
    cin >> *distancia;
    cout << "Informe os litros gastos durante a viagem, em L: " <<endl;
    cin >> *litros;
}

void CalculoeExibe(double *distancia, double *litros, double *resultado){
    *resultado = *distancia / *litros;
    
    if(*resultado < 8){
        cout << "Seu carro fez de autonomia KM/L " << *resultado <<endl;
        cout << "É recomendado vender o carro!" <<endl;
    } 
    else if((*resultado >= 8) && (*resultado <=14)){
        cout << "Seu carro fez de autonomia KM/L " << *resultado <<endl;
        cout << "O carro é econômico! " <<endl;
    }
    else {
        cout << "Seu carro fez de autonomia KM/L " << *resultado <<endl;
        cout << "O carro é super econômico! " <<endl;
    }
}