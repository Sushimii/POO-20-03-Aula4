#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    //Declaração de variavel do tipo caracter que será usada para a repetição
    char cont;
    
    //Condição faça enquanto
    do{
    
    
    //Declaração de váriaveis no formato double por não serem números inteiros
    double ac1 , ac2, ag,  af, nota1, nota2, nota3, nota4 ;
    //Declaração de variavel do tipo string
    string nome;
    //Declaração de variavel do tipo int
    int ra;
    
    //Tela para o usuario digitar um valor que será atribuido a variavel "nome"
    cout << "Digite seu nome >>> ";
    //Valor sendo atribuido a variavel "nome"
    cin >> nome;
    //Tela para o usuario digitar um valor que será atribuido a variavel "ra"
    cout << "Digite seu RA >>> ";
    //Valor sendo atribuido a variavel "ra"
    cin >> ra;
    
    
    
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
    
     //Tela para o usuario declarar um valor para variavel "AC2"
    cout<< "Digite a nota de AG >>>";
    //Valor sendo atribuido a variavel "ag"
    cin>> ag;
    
    //Condição enquanto variavel "ag" maior que 10 OU "acg" menor que 0
    while(ag >10 || ag <0){
        //Tela mostrando que o valor inserido é invalido devido a condição do enquanto.
        cout <<"O valor inserido é invalido digite novamente: >>>"<< endl;
        //Valor novo sendo atribuido a variavel "ag"
        cin>> ag;
    }
    //Valor da variavel "ag" sendo convertida em outra variavel(nota4) atravez de multiplicação
    nota4 = (ag*0.1);
    
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
    nota3 = (af*0.4);
    
    //Variavel recebendo o valor da soma das outras variaveis atraves da formula
    double soma= (nota1 + nota2 +nota3 + nota4);
    
    cout <<endl<< "Aluno de nome: "<< nome << " e RA: " << ra << endl;
    //Tela mostrando o valor da variavel "soma" para o usuario
    cout << "A sua media do semestre foi :  " <<soma<< endl<< endl;
    //Condição se a variavel "soma" tiver valor maior igual a 5
    if(soma >= 5) {
        //Tela mostrando uma mensagem caso a condição acima for cumprida
        cout << "Voce foi aprovado!" << endl<< endl;
    //Condição se a variavel "soma" tiver valor maior igual a 3 E valor menor que 5
    }else if (soma <5 && soma >=3 ){
        //Tela mostrando uma mensagem caso a condição acima for cumprida
        cout<< "Você terá que realizar a substitutiva!!"<<endl<< endl; 
    //Condição se as outras condições não forem atendidas
    }else{
        //Tela mostrando uma mensagem caso a condição acima for cumprida
        cout << "Voce foi reprovado!" << endl<< endl;
    }
    
    //Tela mostrando uma mensagem se ele quer continuar, o valor digitado será atribuido a variavel "cont"
    cout << "Deseja continuar ? (S/N): ";
    //Valor digitado sendo atribuido a variavel "cont"
    cin >> cont ;
    
    //Continuação da condição faça enquanto, a condição é enquanto a variavel cont ter o valor de 's' ou 'S'
    }while (cont == 'S' || cont == 's');
   


    return 0;
}
