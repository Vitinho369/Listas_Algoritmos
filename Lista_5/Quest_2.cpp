#include<iostream>
using namespace std;

int main(){
    int A, M[30][30], X[30][30],i,j, contIgual=0;

    cout << "\nDigite um valor inteiro: ";
    cin >> A;

    for(i=0; i < 30; i++){
        for(j=0; j < 30; j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];

            if(M[i][j] == A){
                contIgual++;
                X[i][j] = 0;
            }else{
                X[i][j] = M[i][j];
            }
        }
    }

    cout << "\nMatriz M: \n";

     for(i=0; i < 30; i++){
        for(j=0; j < 30; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz X: \n";

     for(i=0; i < 30; i++){
        for(j=0; j < 30; j++){
            cout << X[i][j] << " ";
        }
        cout << endl;
    }
}