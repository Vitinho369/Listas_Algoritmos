#include<iostream>
using namespace std;

int main(){
    int V[10],i,j, aux;

    for(i=0; i < 10; i++){
        cout << "V[" << i << "]: ";
        cin >> V[i];
    }

    for(i=0; i < 10;i++){
        for(j=0; j < 10;j++){
            if(V[i] < V[j]){
                aux = V[i];
                V[i] = V[j];
                V[j] = aux;
            }
        }
    }

    cout <<"\nVetor ordenado: ";
    for(i=0; i < 10;i++){
        cout << V[i] << " ";
    }
}