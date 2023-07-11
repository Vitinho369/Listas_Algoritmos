/*Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
função em um programa que lê n1 e n2 do usuário e imprime a soma. */

#include<iostream>
using namespace std;

int intervaloSoma(int n1, int n2);

int main(){
    int n1, n2, somaIntervalo;

    cout << "\nDigite n1:";
    cin >> n1;
    cout << "\nDigite n2:";
    cin >> n2;

    somaIntervalo = intervaloSoma(n1,n2);

    cout << "\nSoma do intervalo " << n1 << " e " << n2 << ": " << somaIntervalo;
}

int intervaloSoma(int int1, int int2){
    int soma=0;
    for(int i=int1+1; i < int2 ;i++){
        soma += i;
    }

    return soma;
}