#include<iostream>
using namespace std;

int main(){
    const int linha=12, coluna = 13;

    int M[linha][coluna],i,j, maiorLinha;

    for(i=0; i < linha; i ++){
        for(j=0; j < coluna;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "\nMatriz original: \n";
    
    for(i=0; i < linha; i ++){
        for(j=0; j < coluna;j++){
            cout << M[i][j]<< "\t";
        }
        cout << endl;
    }

    //mulitplicando cada linha da matriz pelo maior valor de cada linha
     for(i=0; i < linha; i ++){
        for(j=0; j < coluna;j++){
           if(j==0){
                maiorLinha = M[i][j];
           }else if(maiorLinha < M[i][j]){
                maiorLinha = M[i][j];
           }
        }

        for(j=0; j < coluna;j++){
            M[i][j] *= maiorLinha;
        }
    }

    cout << "\nMatriz modificada: \n";

     for(i=0; i < linha; i ++){
        for(j=0; j < coluna;j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}