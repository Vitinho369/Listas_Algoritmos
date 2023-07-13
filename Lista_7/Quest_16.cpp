/*Escreva uma função que receba como parâmetros dois vetores de inteiros: x1 e 
x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar 
um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de 
x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e 
x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: 
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); */

#include<iostream>
using namespace std;

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); 

int main(){
    int qtd=0, n1, n2,i, *x3;

    cout << "\nDigite o tamanho de x1: ";
    cin >> n1;
    cout << "\nDigite o tamanho de x2: ";
    cin >> n2;

    int x1[n1], x2[n2];

    cout << "\nDigite os valores de x1: ";
    for(i=0; i < n1;i++){
        cin >> x1[i];
    }

    cout << "\nDigite os valores de x2: ";
    for(i=0; i < n1;i++){
        cin >> x2[i];
    }

    x3 = uniao(x1, x2, n1, n2, &qtd);

    cout << "\nUniao dos dois vetores: ";
    for(i=0; i < qtd;i++){
        cout << x3[i] << " ";
    }
}


int* uniao(int *x1, int *x2, int n1, int n2, int* qtd){

    int *x3 = (int *) malloc(sizeof(int));
    bool elementoInserido=false;

    for(int i=0; i < n1;i++){
        x3[*qtd] = x1[i];
        *qtd+=1;
    }

     for(int i=0; i < n2;i++){
        for(int j=0; j < *qtd;j++){
            if(x2[i] == x3[j])
                elementoInserido = true;
        }

        if(!elementoInserido){
            x3[*qtd] = x2[i];
            *qtd+=1;
        }

        elementoInserido = false;
    }

    int aux;
    for(int i=0; i < *qtd;i++){
        if(x3[i] < x3[(*qtd-1)-i]){
            aux = x3[i];
            x3[i] = x3[(*qtd-1)-i];
            x3[(*qtd-1)-i] = aux;
        }
    }

    return x3;
}