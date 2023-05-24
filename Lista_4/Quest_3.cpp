#include<iostream>
using namespace std;

int main(){
    int A[15], i, elementosTipo;

    for(i=0; i < 15;i++){
        cout << "\n\tA[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\nDeseja ver os elementos com os indices pares (0) ou impares(1)?";
    cin >> elementosTipo;

    for(i=elementosTipo; i < 15; i+=2){
        cout << "\n\tA[" << i << "] = " << A[i];
    }
}