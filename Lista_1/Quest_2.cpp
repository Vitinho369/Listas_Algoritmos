#include<iostream>

using namespace std;

int main(){
    int anos, qtdCigarroDia;
    float preco, totalGasto;

    cout << "Ha quantos anos voce fuma?";
    cin >> anos;
    cout << "\nQuantos cigarros voce fuma por dia?";
    cin >> qtdCigarroDia;
    cout << "\nQuanto custa uma cartela de cigarro?";
    cin >> preco;

    preco /= 20;

    totalGasto = ((anos * 365)* qtdCigarroDia) * preco;

    cout << "\nVoce gastou " << totalGasto << " reais";
    cout << "\nFim de programa";
    system("pause");
}