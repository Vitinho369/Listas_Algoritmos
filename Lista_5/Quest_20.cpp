/*Elabore um algoritmo que receba um nome completo em uma string e 
apresente apenas o último nome e o  1º nome na seguinte forma: último nome, 1º nome. 

Entrada: Ana Fernandes Oliveira 
Saída: Oliveira, Ana */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string nomeCompleto, ultimoNome = "", primeiroNome = "";
    bool encontrarPrimeiroNome = false;
    cout << "\nDigite seu nome completo: ";
    getline(cin, nomeCompleto);
    
    for(int i=0; i < nomeCompleto.length();i++){
        if(nomeCompleto[i] != ' '){
            ultimoNome += nomeCompleto[i];
        }else{
            ultimoNome = "";
        }

        if(nomeCompleto[i] != ' ' && !encontrarPrimeiroNome){
            primeiroNome += nomeCompleto[i];
        }else{
            encontrarPrimeiroNome = true;
        }
    }

    cout << ultimoNome << ", " << primeiroNome;
    
}