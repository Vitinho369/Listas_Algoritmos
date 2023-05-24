#include<iostream>
using namespace std;

int main(){
    int A[20], maiorDif=0,i, dif, indiceMaior;

    for(i=0; i < 20; i++){
        cout << "\n\tA[" << i << "]: ";
        cin >> A[i];
    }

    for(i=0; i < 19;i++){
        dif = A[i] - A[i+1];

        if(dif < 0) dif *= -1;

        if(dif > maiorDif){
            maiorDif = dif;
            indiceMaior = i;
        }
    }

    cout << "\n\tA maior diferenca eh de " << maiorDif <<", nos indices " << indiceMaior << " e " << (indiceMaior+1) << endl;
}