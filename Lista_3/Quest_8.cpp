#include<iostream>
using namespace std;

int main(){
    unsigned long casa, grao=2, total=1;
    cout << "Digite a casa: ";
    cin >> casa;
    for(int linha=0; linha < casa; linha++){
        total += grao;
        grao += grao;
        cout << grao << endl;
    }

    cout << "\nValor a ser pago em trigo: " << total << endl;
    
    cout << "\n\nFim de programa";
    system("pause");
}