/*Elabore um algoritmo que leia uma matriz MxN, verifique e escreva o maior elemento da linha que contém o 
menor elemento da matriz*/

#include<iostream>
using namespace std;

int main(){
    int M, N;

    cout << "\nDigite as dimensoes da matriz: ";
    cin >> M >> N;

    int matriz[M][N], menorElemento, maiorElemtMenor, linhaMenor;

    cout << "\nDigite a matriz:\n";
    for(int i=0; i < M; i++){
        for(int j=0; j < N;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    menorElemento = matriz[0][0];
    linhaMenor = 0;

    for(int i=0; i < M; i++){
        for(int j=0; j < N;j++){
            if(menorElemento > matriz[i][j]){
                menorElemento = matriz[i][j];
                linhaMenor = i;
            }
        }
    }

    maiorElemtMenor = matriz[linhaMenor][0];

    for(int j=1; j < N;j++){
        if(maiorElemtMenor < matriz[linhaMenor][j]){
            maiorElemtMenor = matriz[linhaMenor][j];
        }
    }

    cout << "\nMatriz:\n";
    for(int i=0; i < M; i++){
        for(int j=0; j < N;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMaior elemento da linha que contem o menor elemento da matriz: " << maiorElemtMenor;
    cout << "\nMenor elemento da matriz: " << menorElemento;
}