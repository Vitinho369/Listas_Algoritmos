#include<iostream>
using namespace std;

int main(){
    int V[20], i,j = 19, cont=0;

    for(i=0; i < 20; i++){
        cout << "\nV[" << i << "]: ";
        cin >> V[i];
    }

    for(i=0; i < 10; i++){
        if(V[i] == V[j]){
            cont++;
        }
        j--;
    }

    cout << "V = { ";
    for(i=0; i < 20; i++){
        cout << V[i] << " ";
    }
    cout << " }";

    if(cont == 10){
        cout << "\nO vetor eh um palindromo";
    }
}