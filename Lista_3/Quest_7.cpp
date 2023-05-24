#include<iostream>
using namespace std;

int main(){
    double num, resultado;
    int cont=0;
    char operacao;

    do{
        cout << "\n\nDigite um numero: ";
        cin >> num;

        if(cont > 0)
            switch (operacao){
                case '+':
                    resultado += num;
                    break;
                case '-':
                    resultado -= num;
                    break;
                case '*':
                    resultado *= num;
                    break;
                case '/':
                    resultado /= num;
                    break;
            }

        cout << "\nDigite a operacao: ";
        cin >> operacao;
        if(operacao != '+' || operacao != '-' 
        || operacao != '*' || operacao != '/' 
        || operacao != '=') cout << "\nOperacao invalido";

        if(cont == 0) resultado =  num;
        cont ++;     
    }while(operacao != '=');

    cout << "\nResultado da operacao = " << resultado;

    cout << "\n\nFim de programa\n";
    system("pause");
}