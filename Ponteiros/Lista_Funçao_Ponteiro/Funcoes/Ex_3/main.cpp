#include <iostream>
#include <cstdlib>

using namespace std;
void recebeNum(double *num);
void retornoNum(double *num, double *retorno);
void exibeDados(double *num, double *retorno);


int main(int argc, char** argv) 
{
    double num, retorno;
    recebeNum(&num);
    retornoNum(&num,&retorno);
    exibeDados(&num,&retorno);
    
    return 0;
}

void recebeNum(double *num){
    cout << "Informe um número qualquer: " <<endl;
    cin >> *num;
}

void retornoNum(double *num, double *retorno){
    if(*num < 0){
        *retorno = -1;
    } else if(*num > 0){
        *retorno = 1;
    }else if(* num == 0){
        *retorno = 0;
    }
  }  
    void exibeDados(double *num, double *retorno){
        cout << "O número digitado foi: " << *num <<endl;
        cout << "O retorno do número é: " << *retorno <<endl;
    }


