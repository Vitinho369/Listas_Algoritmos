#include<iostream>
using namespace std;

int main(){
    int numero;

    cout << "Digite um numero:";
    cin >> numero;
    cout << "\nDivisores do numero: ";
    for(int cont=1; cont <= numero; cont++){
        if(numero%cont==0) cout << cont << " ";
    }

    cout << "\n\nFim de programa\n";
    system("pause");
}