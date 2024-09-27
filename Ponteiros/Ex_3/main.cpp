#include<iostream>
#include <cstdlib>

using namespace std;

void testar(double *nota_a, string *disc_a){

    if((*nota_a <= 100) && (*nota_a >= 60)){
        *disc_a = "Aprovado";
    }else{
        *disc_a = "Reprovado";
    }
}


int main(int argc, char** argv) 
{
    double nota, *ptrNota;
    string nome, disc, *ptrNome;
    ptrNota = &nota;
    ptrNome = &nome;
    
    cout << "Informe o seu nome: " <<endl;
    getline(cin,*ptrNome);
    
    cout <<endl;
    
    
    do{
      cout << "Informe a sua nota de 0 a 100: " <<endl;
      cin >> *ptrNota;
    
    }while((nota <= 0) || (nota > 100));
    
    testar(&nota, &disc);
    
    cout << endl;
    
    cout << "O aluno " << *ptrNome << " está com a situação " << disc << "!" <<endl;
    
    return 0;
}

