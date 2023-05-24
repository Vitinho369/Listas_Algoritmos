#include<iostream>

using namespace std;

int main(){
    int A[20],i, cod;

    for(i=0; i < 20; i++){
        cout << "\n\tA[" << i << "]: ";
        cin >> A[i];
    }

    cout << "\n\tDigite um codigo: ";
    cin >> cod;

    if(cod == 1){
        for(i=0; i < 20; i++){
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }else if(cod == 2){
         for(i=20; i > 0; i--){
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }
}