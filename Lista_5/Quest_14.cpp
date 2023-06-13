/*. Elabore um algoritmo que leia uma matriz 4x5 de números reais. Em seguida, calcule a soma dos elementos
de cada coluna, armazenando o resultado da soma em um vetor de 5 elementos. Escreva a matriz e o vetor.*/

#include<iostream>
using namespace std;

int main(){
    float M[4][5], V[5] = {0,0,0,0,0};

    for(int i=0; i < 4;i++){
        for(int j=0; j < 5;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    for(int j=0; j < 5;j++){
        for(int i=0; i < 4;i++){
            V[j] += M[i][j]; 
        }
    }

    cout << "\nMatriz:\n";
    for(int i=0; i < 4;i++){
        for(int j=0; j < 5;j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    for(int j=0; j < 5;j++){
        cout << "\nSoma dos elementos da coluna " << j << ": " << V[j];
    }
}