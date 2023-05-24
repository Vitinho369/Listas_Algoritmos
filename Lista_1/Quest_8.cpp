#include<iostream>
using namespace std;

int main(){
    float reais, cotacao, qtdDollares;

    cout << "Qual o valor da cotaco do dolar?";
    cin >> cotacao;
    cout << "\nQual a quantidade de dolares que deseja converter?";
    cin >> qtdDollares;

    reais = qtdDollares*cotacao;

    cout << qtdDollares << " dolares, equivalem a " << reais << " reais";

    cout << "\nFim de programa";
    system("pause");
}