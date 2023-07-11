/*Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes 
opções: soma, subtração, multiplicação e divisão. */
#include<iostream>
using namespace std;

int soma(int n1, int n2);
int subtracao(int n1, int n2);
int divisao(int n1, int n2);
int multiplicacao(int n1, int n2);

int main(){
    char resp, operacao;
    int num1, num2;
        
    do{
        cout << "\nDigite um numero: ";
        cin >> num1;
        cout << "\nQual a operacao?";
        cin >> operacao;
        cout << "\nDigite outro numero: ";
        cin >> num2;

        switch (operacao)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << soma(num1, num2);
            break;
        
        case '-':
            cout << num1 << " - " << num2 << " = " <<  subtracao(num1, num2);
            break;
            
        case '/':
            cout << num1 << " / " << num2 << " = " <<  divisao(num1, num2);
            break;
            
        case '*':
            cout << num1 << " * " << num2 << " = " <<  multiplicacao(num1, num2);
            
            break;

        default:
            cout << "\nOperacao invalida";
        }
        cout << "\nDeseja continuar? (S-sim, N-nao)";
        cin >> resp;
    }while(resp != 'N');
}

int soma(int n1, int n2){
    return n1+n2;
}

int subtracao(int n1, int n2){
    return n1-n2;
}

int divisao(int n1, int n2){
    return n1/n2;
}

int multiplicacao(int n1, int n2){
    return n1*n2;
}