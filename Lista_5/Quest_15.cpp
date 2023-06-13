/*Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente uma nova matriz que seja a matriz 
transposta da primeira (troque as linhas por colunas)*/

#include<iostream>
using namespace std;

int main(){
    int M[3][3], Mtransposta[3][3];

    for(int i=0; i < 3; i++){
        for(int j=0; j < 3;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3;j++){
            Mtransposta[j][i] = M[i][j];
        }
    }

    cout << "\nMatriz:\n";
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3;j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Transposta:\n";
    for(int i=0; i < 3; i++){
        for(int j=0; j < 3;j++){
            cout << Mtransposta[i][j] << "\t";
        }
        cout << endl;
    }
}