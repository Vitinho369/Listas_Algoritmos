#include<iostream>
using namespace std;

int main(){
    float compra, parcela, qtdParcela;

    cout << "Digite o valor total da sua compra:";
    cin >> compra;
    cout << "\nDigite o valor da parcela:";
    cin >> parcela;
    cout << "\nEm quantas parcelas dividiu?";
    cin >> qtdParcela;

    if((qtdParcela*parcela) > compra) cout << "\nParcelamento com juros";
    else cout << "\nParcelamento sem juros";
    cout << "\nFim de programa";
    system("pause");
}