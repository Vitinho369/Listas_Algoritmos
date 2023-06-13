/*Elabore um algoritmo que leia uma matriz MxN, verifique e escreva as coordenadas (linha e coluna) do maior 
e do menor elementos.*/

#include<iostream>
using namespace std;

int main(){
    int M,N;

    cout << "\nDigite as dimensoes da matriz: ";
    cin >> M >> N;
    
    int matriz[M][N], maiorElemento, menorElemento, lMaior, cMaior, lMenor, cMenor;
    cout <<"\nDigite os elementos da matriz:\n";
    for(int i=0; i < M;i++){
        for(int j=0; j < N;j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    menorElemento = matriz[0][0];
    lMenor = 0;
    cMenor = 0;
    maiorElemento = matriz[0][0];
    lMaior = 0;
    cMaior = 0;
    
    for(int i=0; i < M;i++){
        for(int j=0; j < N;j++){
            if(menorElemento > matriz[i][j]){
                menorElemento = matriz[i][j];
                lMenor = i;
                cMenor = j;
            }

            if(maiorElemento < matriz[i][j]){
                maiorElemento = matriz[i][j];
                lMaior = i;
                cMaior = j;
            }
        }
    }

    cout << "\nMatriz:\n";
    for(int i=0; i < M;i++){
        for(int j=0; j < N;j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMaior elemento: " << maiorElemento;
    cout << "\nPosicao: [" << lMaior << "][" << cMaior <<"]";
    cout << "\nMenor elemento: " << menorElemento;
    cout << "\nPosicao: [" << lMenor << "][" << cMenor <<"]";
}