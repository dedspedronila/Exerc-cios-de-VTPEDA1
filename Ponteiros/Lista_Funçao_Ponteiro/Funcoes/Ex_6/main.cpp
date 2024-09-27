#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void recebeNum(double *a, double *b);
void calculosNum(double *a, double *b, double *x);
void exibeResult(double *x);


int main(int argc, char** argv) 
{
    double a,b,x;
    recebeNum(&a,&b);
    calculosNum(&a,&b,&x);
    exibeResult(&x);
    return 0;
}
void recebeNum(double *a, double*b){
  do{
    cout << "Informe o valor de A e após isso o valor de B: " <<endl;
    cin >> *a >> *b;
}while (*a <= 0 ); 
}
void calculosNum(double *a, double *b, double *x){
    *x = sqrt(pow(*a,2) + pow(*b,2) /(*a));

}

void exibeResult(double *x){
    cout << "O resultado é: " << *x;
    
}
