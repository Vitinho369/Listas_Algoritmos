#include<iostream>
using namespace std;

int main(){
    int Q[10],i, P[10], faturamento=0; 

    for(i=0; i < 10; i++){
        cout << "\nQual a quantidade de produtos vendidos da mercardoria " << i+1 <<": ";
        cin >> Q[i];
        cout << "\nQual o preco unitario desse produto? ";
        cin >> P[i];

        faturamento += Q[i]*P[i];
    }

    cout << "\nPreco\t|\tQtd";

    for(i=0;i <10; i++){
        cout << endl << P[i] << "\t|\t" << Q[i];
    }

    cout << "\nFaturamento mensal: " << faturamento << " reais";
}