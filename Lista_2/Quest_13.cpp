#include<iostream>
using namespace std;

int main(){
    float distancia, litros, consumo;

    cout << "Digite a distancia percorrida:";
    cin >> distancia;
    cout << "\nQual a quantidade de litros consumido?";
    cin >> litros;

    consumo = distancia/litros;

    if(consumo < 8) cout << "\nVenda o carro!";
    else if(consumo >= 8 && consumo <= 12) cout << "\nEconomico";
    else if(consumo > 12) cout << "\nSuper economico";

    cout << "\nFim de programa";
    system("pause");
}