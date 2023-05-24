#include<iostream>
using namespace std;

int main(){
    int A[10], B[10],i, somaA=0, somaB=0, C[10], qtdAMaiorB=0;

    for(i=0; i < 10; i ++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
        somaA += A[i];
    }

    for(i=0; i < 10; i ++){
        cout << "B[" << i << "]: ";
        cin >> B[i];
        somaB += B[i];
    }

    for(i=0; i < 10; i ++){
       C[i] = A[i] + B[i];
    }

    for(i=0; i < 10; i++){
        if(A[i] > somaB){
            qtdAMaiorB++;
        }
    }

    cout << "\nSoma dos elementos de A = " << somaA;
    cout << "\nQuantidade de elementos de A maior que a soma dos elementos de B: " << qtdAMaiorB;
    
    cout << "\nVetor C: ";
    for(i=0; i < 10;i++){
        cout << C[i] << " ";
    }
}