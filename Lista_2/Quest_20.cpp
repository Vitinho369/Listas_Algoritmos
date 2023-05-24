#include<iostream>
using namespace std;

int main(){
    int idade, totPreco = 100;
    cout << "Digite sua idade:";
    cin >> idade;

    if(idade < 10) totPreco += 80;
    else if(idade >= 10 && idade <= 30) totPreco += 50;
    else if(idade > 30 && idade <= 60) totPreco += 95;
    else if(idade > 60) totPreco += 130;

    cout << "\nValor a ser pago: " << totPreco;
    cout << "\nFim de programa";
    system("pause");
}