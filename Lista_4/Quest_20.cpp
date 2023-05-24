#include<iostream>
using namespace std;

int main(){
    int X[5], Y[5],i=0,j, valor;
    bool flag;

    do{
        flag = false;
        cout << "\nX[" << i << "]: ";
        cin >> valor;

        if(i > 0){
            for(j=0; j < 5; j++){
                if(X[j] == valor){
                    flag = true;
                }
            }

            if(flag){
                cout << "\nElemento repetido, digite novamente";
            }else{
                X[i]= valor;
                i++;
            }
        }else{
            X[i] = valor;
            i++;
        }
    }while(i < 5);
    
    i=0;

    do{
        flag = false;
        cout << "\nY[" << i << "]: ";
        cin >> valor;

        if(i > 0){
            for(j=0; j < 5; j++){
                if(Y[j] == valor){
                    flag = true;
                }
            }

            if(flag){
                cout << "\nElemento repetido, digite novamente";
            }else{
                Y[i] = valor;
                i++;
            }
        }else{
            Y[i] = valor;
            i++;
        }

    }while(i < 5);

    cout << "\nSoma: ";
    for(i = 0; i < 5;i++){
        cout << X[i] + Y[i] << " ";
    }

    cout << "\nDistancia: ";
    for(i = 0; i < 5;i++){
        if(X[i] - Y[i] < 0)
            cout << (X[i] - Y[i]) * -1 << " ";
        else
            cout << X[i] - Y[i] << " ";
    }
}