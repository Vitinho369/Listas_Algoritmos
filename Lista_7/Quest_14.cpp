/*Escreva uma função que receba uma string e uma letra e retorne um vetor de 
inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada e 
um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). 
Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o 
tamanho do vetor. Elabore um algoritmo que teste a função supracitada.*/
#include<iostream>
using namespace std;

int *supracitada(string texto, char letra, int *tamVetor, int *vetorLetras);

int main(){
    string texto;
    char letra;
    int *vetorLetras, tamVetor=0;
    cout << "\nDigite um texto: ";
    getline(cin, texto);
    cout << "\nDigite uma letra: ";
    cin >> letra;

    vetorLetras = supracitada(texto, letra, &tamVetor, vetorLetras);

    cout << "\nTamanho do vetor: " << tamVetor;
    cout << "\nPosicao das letras repetidas: ";
    for (int i = 0; i < tamVetor; i++){
        cout << vetorLetras[i] << " ";
    }
    
}


int *supracitada(string texto, char letra, int *tamVetor, int *vetorLetras){
    
    for(int i=0; i < texto.length(); i++){
        if(texto[i] == letra){
            vetorLetras[*tamVetor] = i;   
            *tamVetor+=1;
        }
    }

    return vetorLetras;
}