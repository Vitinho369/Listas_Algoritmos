#include<iostream>
using namespace std;

int main(){
    int N;
    float percentual;
    float valor;

    cout << "Digite o numero N:";
    cin >> N;
    cout << "\nDigite o valor do percentual:";
    cin >> percentual;
    valor = N*(percentual/100);

    cout << "\nValor aplicado no percentual: " << valor;
    cout << "\nFim de programa";
    system("pause");
}