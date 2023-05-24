#include<iostream>
using namespace std;

int main(){
    float valorCompra, pretacoes;
    int parcelas;
    cout << "\nDigite o valor da compra nas Lojas Sua Melhor Compra:";
    cin >> valorCompra;
    cout << "\nEm quantas parcelas voce ira comprar? (Voce pode parcelar ate 10 vezes sem jutos, se for a vista, digite 1):";
    cin >> parcelas;

    pretacoes = valorCompra/parcelas;

    cout << "\nO valor de cada parcela eh: " << pretacoes;
    cout << "\nFim de programa";
    system("pause");
}