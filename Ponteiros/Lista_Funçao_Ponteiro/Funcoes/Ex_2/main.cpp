#include <iostream>
#include <cstdlib>

using namespace std;

void recebeData(double *dia, double *mes, double *ano);
void modificaData(double *dia, double *mes, double*ano, string *mes_ex);
void exibeData(double *dia, double*ano, string *mes_ex);

int main(int argc, char** argv) 
{
    double dia, mes, ano;
    string mes_ex;
    recebeData(&dia,&mes,&ano); 
    modificaData(&dia, &mes, &ano,&mes_ex);
    exibeData(&dia,&ano,&mes_ex);
    return 0;
}

void recebeData(double *dia, double *mes, double *ano){
  do{
   cout << "Informe o dia da data atual: " <<endl;
    cin >> *dia;
  }while(*dia <1 || *dia >31);
  do{
    cout <<"Informe o mês da data atual: " <<endl;
    cin >> *mes;
  }while(*mes <1 || *mes >12);
   
    if(*mes == 2 && *dia > 29){
        do{
            cout << "Informe um dia entre 1 e 29: " <<endl;
            cin >> *dia;
        }while(*dia <1 || *dia > 29); 
    }
  do{
      cout << "Informe o ano da data atual: " <<endl;
      cin >> *ano;
  }while(*ano > 2024);

}

void modificaData(double *dia, double *mes, double *ano,string *mes_ex){
    if (*mes == 1){
       *mes_ex = "janeiro";
    }else if (*mes == 2){
        *mes_ex = "feveiro";
    }else if (*mes == 3){
        *mes_ex = "março";
    }else if (*mes == 4){
        *mes_ex = "abril";
    }else if (*mes == 5){
        *mes_ex = "maio";
    }else if (*mes == 6){
        *mes_ex = "junho";
    }else if (*mes == 7){
        *mes_ex = "julho";
    }else if (*mes == 8){
        *mes_ex = "agosto";
    }else if (*mes == 9){
        *mes_ex = "setembro";
    }else if (*mes == 10){
        *mes_ex = "outubro";
    }else if (*mes == 11){
        *mes_ex = "novembro";
    }else if (*mes == 12){
        *mes_ex = "dezembro";
    }
}

void exibeData(double *dia, double *ano, string *mes_ex){
    cout << *dia << " de " << *mes_ex << " de " << *ano;
}