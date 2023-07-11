/*Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por 
X e armazenar os resultados em V2. A função deve possui a seguinte assinatura: void 
multiplica_escalar(int *v1, int *v2, int x, int n); 
No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor de 
tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar 
também fornecido pelo usuário. Por último, o programa deverá exibir o vetor resultante.*/


#include<iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);
void multiplica_escalar(int *v1, int *v2, int x, int n);

int main(){
    int tamVetor, maiorV1,i, escalar;
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

    cout << "\nDigite um escalar:";
    cin >> escalar;

    multiplica_escalar(v1, v2, escalar, tamVetor);

    cout << "\nVetor V1 multiplicado pelo escalar " << escalar << ": ";
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

void multiplica_escalar(int *v1, int *v2, int x, int n){
    for(int i=0; i < n;i++){
        v2[i] = v1[i] * x;
    }
}