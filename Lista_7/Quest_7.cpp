/*Escreva uma função chamada Troca que troque os valores dos parâmetros 
recebidos. Essa função não deve ter retorno.*/

#include<iostream>
using namespace std;

void Troca(int *n1, int *n2);

int main(){
    int num1, num2;

    cout << "\nDigite um valor: ";
    cin >> num1; 
    cout << "\nDigite outro valor: ";
    cin >> num2; 
    cout << "\nAntes da troca: ";
    cout << num1 << ", " << num2;
    Troca(&num1, &num2);
    
    cout << "\nDepois da troca: ";
    cout << num1 << ", " << num2;
}

void Troca(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}