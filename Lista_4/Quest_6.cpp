#include<iostream>
using namespace std;

int main(){
    const int qtd=20;
    int A[qtd],i, j = (qtd-1), aux;

    for(i=0; i < qtd;i++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    for(i=0; i < qtd/2;i++){
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
        j--;
    }

    cout << "\nA = { ";
    for(i=0; i < qtd;i++){
        cout << A[i] << " ";
    }
    
    cout << " }";
}