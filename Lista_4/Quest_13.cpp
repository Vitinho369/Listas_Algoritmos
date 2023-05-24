#include<iostream>
using namespace std;

int main(){
    int N;

    cout << "\nDigite N:";
    cin >> N;

    int V[N],i, X, menor=N, aux,j;
    V[0] = N;
    bool flag = false;

    for(i=1; i < N; i++){
        V[i] = V[i-1] * 2;
        if(menor > V[i])
            menor = V[i];
    }

    cout << "\nVetor sem mudanca: ";
    for(i=0; i < N;i++){
        cout << V[i] << " ";
    }

    cout << "\nDigite um numero X:";
    cin >> X;

    for(i=0; i < N;i++){
        if(V[i] == X){
            aux = menor;
            menor = V[i];
            V[i] = aux;
            flag = true;
        }
    }

    if(flag){
        cout << "\nX existe no vetor, X = " << X;
        cout << "\nVetor apos a mudanca: ";
        
        for(i=0; i < N;i++){
            cout << V[i] << " ";
        }
    }else{
        cout << "\nX nao existe no vetor";
    }
}