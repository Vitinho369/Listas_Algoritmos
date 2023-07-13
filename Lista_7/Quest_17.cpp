/*Escreva um programa que leia números 10 inteiros, armazene-os em um vetor e 
os escreva na ordem contrária à de leitura. Obs: todos os acessos ao vetor devem ser 
feitos usando somente ponteiros, sem usar os índices.*/

#include<iostream>
using namespace std;


void inverteVetor(int *vetor);

int main(){
    int vetor[10],i;

    cout << "\nDigite 10 valores: ";
    for(i=0; i < 10;i++){
        cin >> *(vetor + i);
    }

    inverteVetor(vetor);

    cout << "\nValores invertidos: ";
    for(i=0; i < 10;i++){
        cout << *(vetor + i) << " ";
    }
}

void inverteVetor(int *vetor){
    int aux;
    
    for(int i = 0; i < 5;i++){
        aux = *(vetor + i);
        *(vetor + i) = *(vetor + (9-i));
        *(vetor + (9-i)) = aux;   
    }
}