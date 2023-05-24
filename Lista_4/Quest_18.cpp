#include<iostream>
using namespace std;

int main(){
    int A[10], B[10],C[20],i,j=0;

    for(i=0; i < 10; i++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
        C[j] = A[i];
        j++;
    }

    for(i=0; i < 10; i++){
        cout << "B[" << i << "]: ";
        cin >> B[i];
        C[j] = B[i];
        j++;
    }

    cout << "\nVetor C: ";
    for(i=0; i < 20;i++){
        cout << C[i]  <<" ";
    }
}