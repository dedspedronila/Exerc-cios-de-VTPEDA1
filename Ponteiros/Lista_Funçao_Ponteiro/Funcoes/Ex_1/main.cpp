#include <iostream>
#include <cstdlib>

using namespace std;

void recebeNum(double *num);
void triploDoNum(double *num, double *result);
void exibeDados(double *num, double *result);

int main(int argc, char** argv) 
{
    double num, result;
    recebeNum(&num);
    triploDoNum(&num, &result);
    exibeDados(&num, &result);
    return 0;
}

void recebeNum(double *num){
    cout << "Informe um número: " <<endl;
    cin >> *num;

}
void triploDoNum(double *num, double *result){
    *result = *num * 3;
    
}
void exibeDados(double *num, double *result){
    cout << "O número é: " << *num <<endl;
    cout << "O resultado é: " << *result;

}