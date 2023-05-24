#include<iostream>
using namespace std;

int main(){
    int ano;
    float preco, imposto;

    cout << "Digite o preco do carro: ";
    cin >> preco;
    cout << "\nQual o ano do carro?";
    cin >> ano;

    if(ano < 1990)
        imposto = preco * 0.01;
    else
        imposto = preco * 0.015;

    cout << "\nImposto a ser pago: " << imposto;

    cout << "\nFim de programa";
    system("pause");
}