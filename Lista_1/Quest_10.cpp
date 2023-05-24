#include<iostream>
using namespace std;

int main(){
    int A,B;
    bool C,D, conjuncao, disjuncao;

    cout << "Digite o valor de A:";
    cin >> A;
    cout << "\nDigite o valor de B:";
    cin >> B;

    cout << "\nA+B = " << A+B;
    cout << "\nA-B = " << A-B;
    cout << "\nA*B = " << A*B;
    cout << "\nA/B = " << A/B;

    cout << "\nDigite o valor de C:";
    cin >> C;
    cout << "\nDigite o valor de D:";
    cin >> D;

    conjuncao =  C && D;  
    disjuncao = C || D;

    cout << "\n!C = " << !C;
    cout << "\n!D = " << !D;
    cout << "\nC && D = " << conjuncao;
    cout << "\nC || D = " << disjuncao;

    cout << "\nFim de programa";
    system("pause");
}