#include<iostream>
using namespace std;

int main(){
    int A[20],i, contPar=0;

    for(i=0; i < 20;i++){
        cout << "\n\tA[" << i << "]: ";
        cin >> A[i];

        if(A[i]%2==0){
            contPar++;
            A[i] = 0;
        }
    }

    cout << "\n\tQuantidade de valores pares: " << contPar;
    cout << "\n\tA final: ";
    for(i=0; i < 20;i++){
        cout << "\n\tA[" << i << "]: " << A[i];
    }
}