/*Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique 
a matriz M pelo valor A inserindo os resultados em um vetor de V(36). 
Ao final, escreva o vetor V.*/
#include<iostream>
using namespace std;

int main(){
    int M[6][6],i,j,A,V[36], cont=0;

    for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
            cout << "\nM[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }

    cout << "\nDigite um valor para multiplicar a matriz: ";
    cin >> A;

    for (i = 0; i < 6; i++){
        for (j = 0; j < 6; j++){
            V[cont] = M[i][j] * A;
            cont++;
        }
        
    }

    cout << "\nVetor A = ";

    for (i = 0; i < 36; i++){
        cout << V[i] << " ";
    }
    
    
}