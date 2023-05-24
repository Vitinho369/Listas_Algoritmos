#include<iostream>
using namespace  std;

int main(){
    int V[10],i,P, X;

    for(i=0; i < 9;i++){
        cout << "\nV[" << i << "]: ";
        cin >> V[i];
    }

    cout << "\nDigite o indice P: ";
    cin >> P;

    while (P < 0 || P > 9){
        cout <<" \nValor invalido, digite novamente: ";
        cin >> P;
    }

    cout << "\nDigite um numero inteiro X: ";
    cin >> X;
    
    cout << "\nPrimeiro vetor: ";
    for(i=0; i < 9; i++){
        cout << V[i] << " ";
    }

    for(i=9; i > P; i--){
        V[i] = V[i-1];
    }
    V[P]= X;
    
    cout << "\nSegundo vetor: ";
    for(i=0; i < 10; i++){
        cout << V[i] << " ";
    }
}