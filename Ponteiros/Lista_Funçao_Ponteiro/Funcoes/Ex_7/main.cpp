#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void receberDados(double *num1, double *num2, char *escolha);
void Calcular(double *num1, double *num2, char *escolha, double *resultado);
void Exibir(double *resultado);

int main(int argc, char** argv) 
{
    double num1, num2, resultado;
    char escolha;
    
    receberDados(&num1,&num2,&escolha);
    Calcular(&num1,&num2,&escolha,&resultado);
    Exibir(&resultado);
    return 0;
}

void receberDados(double *num1, double *num2, char *escolha){
    cout << "Esse programa irá receber dois números escolhidos pelo usuário e também o usuario deve escolher a operação que deseja realizar!" <<endl;
    
    cout << "Informe o Primeiro e o Segundo número, respectivamente: " <<endl;
    cin >> *num1 >> *num2;
    cout <<endl;
    
    cout << "Para as operações use: " <<endl;
    cout << "(+) para ADIÇÃO " <<endl;
    cout << "(-) para Subtração " <<endl;
    cout << "(*) para Multiplicação "<<endl;
    cout << "(/) para Divisão"<<endl;
    cout << "(^) para Potenciação, sendo o primeiro a base e o segundo o expoente:  "<<endl;
    cin >> *escolha;
    fflush(stdin);
    
}

void Calcular (double *num1, double *num2, char *escolha, double *resultado){
    if(*escolha == '+') {
        cout << "Você escolheu a Soma!" <<endl;
        *resultado = *num1 + *num2;
    }
    else if(*escolha == '-'){
        cout << "Você escolheu a Subtração!" <<endl;
        *resultado = *num1 - *num2;
    }
    else if(*escolha == '*'){
        cout << "Você escolheu a Multiplicação!" <<endl;
        *resultado = ((*num1) * (*num2));
    }
    else if(*escolha == '/'){
        cout << "Você escolheu a Divisão!" <<endl;
        *resultado = *num1 / *num2;
    }
    else if(*escolha == '^'){
        cout << "Você escolheu a Potenciação!" <<endl;
        *resultado = pow(*num1,*num2);
    }
    else{
        cout << "Opção inválida! " << endl;
        
    }
    
    
}

void Exibir(double *resultado){
    
    cout << "O resultado obtido é de: " << *resultado;

}