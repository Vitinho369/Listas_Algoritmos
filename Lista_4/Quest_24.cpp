#include<iostream>
using namespace std;

int main(){
    int B[10], C[10], aux[10], cont=0,i,j, l=0,contRepete=0, indice[10],k=0;

    for(i=0; i < 10; i++){
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for(i=0; i < 10;i++){
        for(j=0; j < 10;j++){
            if(B[i] == B[j]){
                contRepete++;
            }
        }
        if(contRepete <= 1){
             cont++;
             C[l] = B[i];
              l++;
        }else{
            indice[k] = i;
            k++;
        }
        contRepete=0;
    }

    for(i=0;i < k; i++){
        B[indice[i]] = -1;
    }

    cout << "\nVetor B: ";
    for(i=0; i < 10; i++){
        cout << B[i] << " ";
    }
    
    cout << "\nVetor C: ";
    for(i=0; i < cont; i++){
        cout << C[i] << " ";
    }
}