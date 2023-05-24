#include<iostream>
using namespace std;

int main(){
    int A[20], B[20], i, j = 19;

    for(i=0; i < 20; i++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
        B[j] = A[i];
        j--;
    }

    cout << "\nA = { ";
    for(i=0; i < 20;i++){
        cout << A[i] << " ";
    }

    cout << "}\nB = { ";
      for(i=0; i < 20;i++){
        cout << B[i] << " ";
    }
     cout << "}";
}