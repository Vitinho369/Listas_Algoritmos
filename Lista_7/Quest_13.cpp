/*Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de 
duas variáveis inteiras, min e max, e deposite nessas variáveis o valor do menor 
elemento (mínimo) e do maior elemento (máximo) do vetor. Elabore um algoritmo que 
teste a função mm. */

#include<iostream>
using namespace std;

void mm(int *v, int *min, int *max, int n);

int main(){
    int tamVetor;
    cout << "\nQual o tamanho do vetor?";
    cin >> tamVetor;

    int vetor[tamVetor], min, max;
    
    cout << "\nDigite os elementos do vetor: ";
    for(int i=0; i < tamVetor;i++){
        cout << "vetor[" << i << "]: ";
        cin >> vetor[i];
    }

    mm(vetor, &min, &max, tamVetor);

    cout << "\nVetor: ";
    for(int i=0; i < tamVetor;i++){
        cout << vetor[i] << " ";
    }

    cout << "\nValor minimo do vetor: " << min;
    cout << "\nValor maximo do vetor: " << max;
}

void mm(int *v, int *min, int *max, int n){
    *min = v[0];
    *max = v[0];

    for(int i=0; i < n; i++){
        if(*min > v[i]){
            *min = v[i];
        }

        if(*max < v[i]){
            *max = v[i];
        }
    }
}