/*Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde 
se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e 
encontre seu elemento minimax, mostrando também sua posição. */
#include<iostream>
using namespace std;

int main(){
    const int l = 10, c =10;
    int M[l][c], maiorElemento, miniMax, linhaMaior=0, colunaMiniMax;

    for(int i=0;i < l;i++){
        for(int j=0; j < c;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
    maiorElemento = M[0][0];

    for(int i=0;i < l;i++){
        for(int j=0; j < c;j++){
           if(maiorElemento < M[i][j]){
                maiorElemento = M[i][j];
                linhaMaior = i;
           }
        }
    }

    miniMax = M[linhaMaior][0];
    colunaMiniMax = 0;

    for(int j=0; j < c;j++){
        if(miniMax > M[linhaMaior][j]){
            miniMax = M[linhaMaior][j];
            colunaMiniMax = j;
        }
    }

    cout << "\nMatriz: \n";
    for(int i=0;i < l;i++){
        for(int j=0; j < c;j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nElemento minimax: " << miniMax;
    cout << "\nPosicao: " << "[" << linhaMaior << "][" << colunaMiniMax << "]";
}