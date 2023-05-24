#include<iostream>
using namespace std;

int main(){
    int idade, tempoServico;

    cout << "Digite sua idade:";
    cin >> idade;
    cout << "\nDigite seu tempo de servico:";
    cin >> tempoServico;

    if(idade >=65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) cout << "\nParabens! Voce pode se aposentar!";
    else cout << "\nVoce ainda nao pode se aposentar";
    cout << "\nFim de programa";
    system("pause");
}