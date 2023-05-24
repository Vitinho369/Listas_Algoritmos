#include<iostream>
using namespace std;

int main(){
    int A[10],i, contPar=0;

    for(i = 0; i < 10; i++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
        if(A[i]%2==0) contPar++;
    }

    int P[contPar], j = 0;

    for(i=0; i < 10;i++){
        if(A[i]%2==0){
            P[j] =i;
            j++;
        }
    }

    cout << "P = [ ";

    for(i=0; i < contPar;i++){
        cout << P[i] << " ";
    }
    cout << "]";
}