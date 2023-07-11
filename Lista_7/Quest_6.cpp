/*Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
elementos do vetor e atribuir às variáveis min e max respectivamente. */

#include<iostream>
using namespace std;

void MinMax(int *vetor, int *min, int *max);

int main(){
    int vetor[10], min, max;

    for(int i=0; i < 10; i++){
        cout << "\nv[" << i << "]: ";
        cin >> vetor[i];
    }

    MinMax(vetor, &min, &max);

    cout << "\nVetor: ";
    
    for(int i=0; i < 10; i++){
        cout << vetor[i] << " ";
    }

    cout << "\nMin: " << min;
    cout << "\nMax: " << max;
}


void MinMax(int *vetor, int *min, int *max){
    *min = vetor[0];
    *max = vetor[0];

    for(int i=1; i < 10;i++){
        if(*max < vetor[i]){
            *max = vetor[i];
        }

        if(*min > vetor[i]){
            *min = vetor[i];
        }
    }
}