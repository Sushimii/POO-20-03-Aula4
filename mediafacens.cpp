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
    //Condição enquanto variavel "ac1" maior que 10 OU "ac1" menor que 0
    while (ac1 >10 || ac1<0 ){
        //Tela mostrando que o valor inserido é invalido devido a condição do enquanto.
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        //Valor novo sendo atribuido a variavel "ac1"
        cin >> ac1;
    }
    //Valor da variavel "ac1" sendo convertida em outra variavel(nota1) atraves de multiplicação
    nota1 = (ac1*0.15);
    //Tela para o usuario declarar um valor para variavel "AC2"
    cout << "Digite a nota de AC2 >>>";
    //Valor sendo atribuido a variavel "ac2"
    cin >> ac2;
    //Condição enquanto variavel "ac2" maior que 10 OU "ac2" menor que 0
    while(ac2 >10 || ac2<0 ){
        //Tela mostrando que o valor inserido é invalido devido a condição do enquanto.
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        //Valor novo sendo atribuido a variavel "ac2"
        cin >> ac2;
    }
    //Valor da variavel "ac2" sendo convertida em outra variavel(nota2) atravez de multiplicação
    nota2 = (ac2*0.35);
    //Tela para o usuario declarar um valor para variavel "AF"
    cout << "Digite a nota de AF >>>";
    //Valor sendo atribuido a variavel "af"
    cin >> af;
    //Condição enquanto variavel "acf" maior que 10 OU "af" menor que 0
    while(af >10 || af<0 ){
        //Tela mostrando que o valor inserido é invalido devido a condição do enquanto.
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        //Novo valor sendo atribuido a variavel af
        cin >> af;
    }
    //Valor da variavel "af" sendo convertida em outra variavel(nota3) atravez de multiplicação
    nota3 = (af*0.5);
    
    //Variavel recebendo o valor da soma das outras variaveis atraves da formula
    double soma= (nota1 + nota2 +nota3);
    
    //Tela mostrando o valor da variavel "soma" para o usuario
    cout << "A sua media do semestre foi :  " <<soma<< endl<< endl;
    //Condição se a variavel "soma" tiver valor maior igual a 5
    if(soma >= 5) {
        //Tela mostrando uma mensagem caso a condição acima for cumprida
        cout << "Voce foi aprovado!" << endl;
    }else{
        //Tela mostrando uma mensagem caso a condição não for cumprida
        cout << "Voce foi reprovado!" << endl;
    }
    
   


    return 0;
}