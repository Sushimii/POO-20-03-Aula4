#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    //Declaração de váriaveis no formato double por não serem números inteiros
    double ac1 , ac2, af, nota1, nota2, nota3;
    //Tela para o usuario declarar um valor para variavel "AC1"
    cout << "Digite a nota de AC1  >>>" ;
    //Valor sendo atribuido a variavel "ac1"
    cin >> ac1;
    if (ac1 >10 || ac1<0 ){
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
       cin >> ac1
    }
    nota1 = (ac1*0.15);
    //Tela para o usuario declarar um valor para variavel "AC2"
    cout << "Digite a nota de AC2 >>>";
    cin >> ac2;
    if(ac2 >10 || ac2<0 ){
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        
        cin >> ac2;
    }
    nota2 = (ac2*0.35);
    //Tela para o usuario declarar um valor para variavel "AF"
    cout << "Digite a nota de AF >>>";
    cin >> af;
    if(af >10 || af<0 ){
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        cin >> af;
    }
    nota3 = (af*0.5);
    
    double soma= (nota1 + nota2 +nota3);
  
    cout << "A sua media do semestre foi :  " <<soma<< endl<< endl;
    
    if(soma >= 5) {
        cout << "Voce foi aprovado!" << endl;
    }else{
        cout << "Voce foi reprovado!" << endl;
    }
    
   


    return 0;
}