#include<iostream>
using namespace std;

int main(){
    int V[10],i,j,aux;

    cout << "\nDigite 10 numeros inteiros aleatorios: ";

    for(i=0; i < 10;i++){
        cin >> V[i];
    }

    for(i=0; i < 10;i++){
        for(j=0; j < 10;j++){
            if(V[i] > V[j]){
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }

    cout << "\nNumeros em ordem decrescente: ";
    for(i=0; i < 10;i++){
        cout << V[i] << " ";
    }
}