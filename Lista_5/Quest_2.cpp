/*Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. 
Conte quantos valores  da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo 
todos os elementos de M diferentes de A (quando for igual a A, insira um 0). 
Mostre os resultados. */
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