#include<iostream>
using namespace std;

int main(){
    int A[20], somaP=0, somaI=0, i;

    for(i=0; i < 20;i++){
        A[i] = 2*i;
    }

    cout << "\n Soma dos elementos pares: ";

    for(i=0; i < 20; i++){

        cout << A[i] << " ";
        if(A[i]%2==0){
            somaP += A[i];
        }
        
        if(A[i]%2!=0){
            somaI += A[i];
        }
    }

    cout << "\nSoma dos elementos pares: " << somaP;
    cout << "\nSoma dos elementos impares: " << somaI;
}