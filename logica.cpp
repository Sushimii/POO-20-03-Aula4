#include <iostream>
using namespace std;

int main() {
   
   //Declaração da variavel "a" , seu tipo e valor 
   int a = 15;
   //Declaração da variavel "b" , seu tipo e valor 
   int b = 3;
   //Declaração da variavel "c" , seu tipo e valor 
   int c = 10;
   
   //Condição a menor que b E b menor que c
   if (a < b && b < c){
       //Tela contendo a mensagem que irá aparecer caso a condição estabelecida seja cumprida
       cout << "A ordem é : a, b ,c" << endl;
   }
   //Condição a maior que b OU b maior que c
   if (a > b || b > c){
       //Tela contendo a mensagem que irá aparecer caso a condição estabelecida seja cumprida
       cout << "Pelo menos uma das condições é verdadeira" << endl;
   }
   //Condição a diferente de b
   if(!(a == b)){
       //Tela contendo a mensagem que irá aparecer caso a condição estabelecida seja cumprida
       cout << "a é diferente de b" << endl;
   }
    

    return 0;
}