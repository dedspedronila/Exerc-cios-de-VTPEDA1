#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void raizes(int A,int B,int C,int * X1,int * X2);

int main(int argc, char** argv) 
{
    int A, B, C, X1, X2;
    
    cout << "Nesse programa iremos achar as raízes de uma equação do segundo grau, "
            "que segue a forma de : Ax^2 + Bx + C = 0, você deverá informar o valor de A, B e C, respectivamente:" << endl;
    cin >> A >> B >> C;
    
    
    raizes(A,B,C,&X1,&X2);

    return 0;
}

void raizes(int A,int B,int C,int * X1,int * X2){
    int delta;

    if(A != 0){

        delta = pow(B,2) - (4*A*C);   

    if(delta < 0){
        cout << "Não existe raízes reais!" <<endl;
    }
    else if(delta == 0){
        *X1 = (-B) / (2*A); 
        cout << "O valor de X1 e X2 são as mesmas, portanto o valor é :" << *X1 <<endl;
    }
    else {
     *X1 = (-B - sqrt(delta)) /(2*A);
     *X2 = (-B + sqrt(delta)) /(2*A);
     cout << "O valor de X1 é :" << *X1 <<endl;
     cout << "O valor de X2 é :" << *X2 <<endl;
    }
    
    }
    
    }
