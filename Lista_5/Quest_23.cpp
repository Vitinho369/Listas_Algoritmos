/* Elabore um algoritmo que leia duas strings e informe se 
são iguais ou diferentes. Obs: Não utilize a função de comparação 
de strings.*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string texto1, texto2;

    cout << "\nDigite a string 1: ";
    getline(cin, texto1);

    cout << "\nDigite a string 2: ";
    getline(cin, texto2);

    if(texto1 == texto2){
        cout << "\nAs strings sao iguais";
    }else{
        cout << "\nAs string nao sao iguais";
    }
}