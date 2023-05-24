#include<iostream>
using namespace std;

int main(){
    float custoFabrica, custo;
    cout << "Digite o custo de fabrica:";
    cin >> custoFabrica;
    custo = custoFabrica + (custoFabrica*0.73);

    cout << "O custo ao consumidor eh " << custo;
    cout << "\nFim de programa";
    system("pause");
}