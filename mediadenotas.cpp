#include <iostream>
//Puxando uma biblioteca
#include <stdlib.h>
using namespace std;

int main() {

    //Declaração de variavel do tipo caracter
    char cont ;
    
    //Primeira parte da condição faça enquanto
    do {
    //Declaração de váriaveis no formato double por não serem números inteiros
    double nota1, nota2, nota3, nota4;
    //Tela para o usuario declarar um valor para variavel "nota1"
    cout << "Digite a sua primeira nota do semestre >>>" ;
    //Valor sendo atribuido a variavel "nota1"
    cin >> nota1;
    //Tela para o usuario declarar um valor para variavel "nota2"
    cout << "Digite a sua segunda nota do semestre >>>";
    //Valor sendo atribuido a variavel "nota2"
    cin >> nota2;
    //Tela para o usuario declarar um valor para variavel "nota3"
    cout << "Digite a sua terceita nota do semestre >>>";
    //Valor sendo atribuido a variavel "nota3"
    cin >> nota3;
    //Tela para o usuario declarar um valor para variavel "nota4"
    cout << "Digite a sua quarta nota do semestre >>>";
   //Valor sendo atrivuido a variavel "nota4"
    cin >> nota4;
    
    //Variavel com o valor de todas as outras variaveis sendo somadas
    double soma = (nota1 + nota2 + nota3+ nota4);
    //Calculo da media do valor da soma das 4 variaveis "nota"
    soma = (soma / 4);
    //Tela mostrando o resultado do calculo(o valor da variavel "soma")
    cout << "A sua media no semestre foi:  " << soma << endl << endl;
    //Condição da variavel "soma" ser maior ou igual a sete
    if (soma >= 7){
        //Tela caso a variavel "soma" tenha valor maior ou igual a sete
        cout << "Parabens! Voce foi aprovado!" << endl;
        //senão
    }else{
        //Tela caso a variavel "soma" tenha valor menor que 7
        cout << "Eita! Voce foi reprovado!" << endl;
    }
    //Tela mostrandoa  mensagem se o usuario deseja continuar o valor digitado será atribuido a variavel "cont"
    cout << "Deseja continuar ? (S/N): ";
    //Valor sendo atribuido a variavel "cont"
    cin >>cont;
    
    //Segunda parte da condição faça enquanto , a condição é a variavel "cont" ter valor de 's' ou 'S'
    }while(cont == 's' || cont == 'S');


    return 0;
}