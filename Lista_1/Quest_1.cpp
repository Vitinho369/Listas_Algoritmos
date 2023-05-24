#include<iostream>
using namespace std;

int main(){
    int ano, mes, dia, idade;

    cout << "\nDigite sua idade em anos:";
    cin >> ano;
    cout << "\nDigite sua idade em meses:";
    cin >> mes;
    cout << "\nDigite o dia que voce nasceu:";
    cin >> dia;

    idade = (ano * 365) + (mes*30) + dia;

    cout << "\nSua idade em dias eh: " << idade; 
    cout << "\nFim de programa";
    system("pause");
}