#include<iostream>
using namespace std;

int main(){
    int val1, val2, aux;

    cout << "Digite val1:";
    cin >> val1;
    cout << "\nDigite val2:";
    cin >> val2;
    aux = val1;
    val1 = val2;
    val2 = aux;

    cout << "\nValores trocados";
    cout << "\nVal1 = " << val1;
    cout << "\nVal2 = " << val2;
    cout << "\nFim de programa";
    system("pause");
}