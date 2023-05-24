#include<iostream>
using namespace std;

int main(){
    int A[10],i=0, valor, num;
    bool flag = false;
    do{
        cout << "\nA[" << i << "]: ";
        cin >> valor;

        if(valor >= 0){
            A[i] = valor;
            i++;
        }else{
            cout << "\nO valor deve ser maior que 0, digite novamente";
        }
    }while(i < 10);


    cout << "\nDigite um numero: ";
    cin >> num;

    for(i=0;i < 10;i++){
        if(A[i]== num){
            flag = true;
            cout << "\nNumero localizado no indice " << i;
        }
    }

    if(!flag){
        cout << "\nNumero nao localizado!";
    }
    
}