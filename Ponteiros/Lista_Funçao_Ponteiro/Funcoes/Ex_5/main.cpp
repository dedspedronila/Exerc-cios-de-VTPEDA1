#include <iostream>
#include <cstdlib>

using namespace std;
void recebeHoras(int *horas, int *minutos, int *segundos);
void calculoHoras(int *horas,int *minutos, int *segundos, int *resultado);
void exibeHoras(int *resultado);


int main(int argc, char** argv) 
{
    int horas, minutos, segundos, resultado;
    recebeHoras(&horas,&minutos,&segundos);
    calculoHoras(&horas,&minutos,&segundos,&resultado);
    exibeHoras(&resultado);   
    
    return 0;
}

void recebeHoras(int *horas, int *minutos, int *segundos){
    do{
    cout << "Informe as horas que deseja: " <<endl;
    cin >> *horas;
    }while(*horas <0 || *horas >24);
    do{
    cout << "Informe os minutos que deseja: " <<endl;
    cin >> *minutos;
    }while(*minutos <0 || *minutos >59);
    do{
    cout << "Informe os segundos que deseja: " <<endl;
    cin >> *segundos;
    }while(*segundos <0 || *segundos >59);

}
void calculoHoras(int *horas, int *minutos, int *segundos, int *resultado){
    *horas = *horas * 3600;
    *minutos = *minutos * 60;
    *resultado = *horas + *minutos + *segundos;
}

void exibeHoras(int *resultado){
    cout << "O resultado das horas, minutos e segundos, em segundos é: " << *resultado <<endl;

}