#include <iostream>
//Biblioteca necessaria para se utilizar "string"
#include <string>
using namespace std;

int main() {
    
    //Declaração de variaveis e seus respectivos tipos
    int life;
    float energy;
    bool status;
    string character;
    
    //Atribuição do valor de cada variavel respeitando seus respectivos tipos
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Rock Man";
    
    //Tela mostrando o valor da variavel "life"
    cout << life << endl;
    //Tela mostrando o valor da variavel "energy"
    cout << energy << endl;
    //Tela mostrando o valor da variavel "status"
    cout << status << endl;
    //Tela mostrando o conteudo da variavel "character"
    cout << character << endl;
    

    return 0;
}