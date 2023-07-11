/*Escreva um programa que lê um valor inteiro (maior do que 1 e menor ou igual a 
10) e exibe a tabuada (até 10) de multiplicação do número lido. Você deverá escrever as 
seguintes funções: 
- int LeNumero(int n1,int n2) 
Lê um número inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez que for 
digitado um número inválido (fora do intervalo especificado) a função deve exibir a 
mensagem "Número inválido. Digite novamente!" 
- void Tabuada( int n) 
Recebe como parâmetro um número inteiro e exibe na tela a tabuada de multiplicação 
até 10 do número lido. Exemplo: número lido 5 
5 x 1 = 5 5 x 2 = 10 .... 5 x 10 = 50 */
#include<iostream>
using namespace std;

int LeNumero(int n1,int n2);
void Tabuada(int n);

int main(){
    int numMult;

    numMult = LeNumero(1, 10);
    Tabuada(numMult);
}

int LeNumero(int n1,int n2){
    int num;

    do{
        cout << "\nDigite um numero:";
        cin >> num;
        if(num < 1 || num >= 10){
            cout << "\nNumero invalido. Digite novamente!";
        }
    }while(num < 1 || num >= 10);

    return num;
}

void Tabuada(int n){
    for(int i=1; i <= 10;i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
}