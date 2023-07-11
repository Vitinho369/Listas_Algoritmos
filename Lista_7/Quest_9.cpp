/*Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main. */

#include<iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);

int main(){
    int tamVetor, maiorV1,i;
    cout << "\nDigite o tamanho dos vetores: ";
    cin >> tamVetor;

    int v1[tamVetor], v2[tamVetor];
    cout << "\nDigite os elementos do vetor V1: \n";
    for(i=0; i < tamVetor; i++){
            cout << "v1[" << i << "]: ";
            cin >> v1[i];
    }
    maiorV1 = inverteVetor(v1, v2, tamVetor);

    cout << "\nMaior elemento do vetor V1: " << maiorV1;
    cout << "\nVetor V1: ";
    for(i=0; i < tamVetor; i++){
        cout << v1[i] << " ";
    }
    cout << "\nVetor V2: ";
    for(i=0; i < tamVetor; i++){
        cout << v2[i] << " ";
    }
}

int inverteVetor(int *v1, int *v2, int n){
    int maiorV1 = v1[0];
    
    for(int i=0; i < n;i++){
        v2[i] = v1[(n-1)-i];
        if(maiorV1 < v1[i]){
            maiorV1 = v1[i];
        }
    }

    return maiorV1;
}