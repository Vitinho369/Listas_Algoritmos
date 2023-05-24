#include<iostream>
using namespace std;

int main(){
    int A[20], contCres=0, contDes=0,i;

    for(i=0; i < 20;i ++){
        cout << "A[" << i << "]: ";
        cin >> A[i];

        if(i > 0){
            if(A[i] == (A[i-1] + 1)){
                contCres++;
            }

            if((A[i] + 1) == A[i-1]){
                contDes++;
            }
        }
    }

    if(contCres == 19){
        cout << "\nElementos em ordem crescente";
    }else{
        if(contDes== 19){
            cout << "\nElementos em ordem decrescente";
        }else{
            cout << "\nElementos em ordem aleatoria";
        }
    }
}