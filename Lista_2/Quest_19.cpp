#include<iostream>
using namespace std;

int main(){

    int dia;
    cout << "Digite o dia da semana (Considere que domingo eh  o dia 1 e sabado eh o dia 7):";
    cin >> dia;

    switch (dia){
        case 1: cout << "\nNao eh dia util";
            break;
        case 2: cout << "\nDia util";
            break;
        case 3: cout << "\nDia util";
            break;
        case 4: cout << "\nDia util";
            break;
        case 5: cout << "\nDia util";
            break;
        case 6: cout << "\nDia util";
            break;
        case 7: cout << "\nNao eh dia util";
            break;
        
        default: cout << "Dia invalido";
    }

    cout << "\nFim de programa";
    system("pause");
}