#include<iostream>
using namespace std;

int main(){
    int V[20], erros=0,i=0,j, num;
    bool numExist= false;
    do{
        cout << "\nV[" << i << "]: ";
        cin >> num;

        for(j=0; j < 20;j++){
            if(num == V[j]) numExist = true;
        } 

        if(!numExist){
            V[i] = num;
            i++;
        }else{
            erros++;
            cout << "\nNumero ja esta dentro do vetor, digite novamente";
        }
        numExist = false;
    }while(i < 20);

    cout << "\nTotal de erros cometidos  " << erros;
    cout <<"\nVetor: ";
    for(i=0; i < 20;i++){
        cout << V[i] << " ";
    }
}