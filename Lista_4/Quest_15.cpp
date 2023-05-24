#include<iostream>
using namespace std;

int main(){
    int qtd,i;

    cout << "\nDigite a quantidade de alunos: ";
    cin >> qtd;
    int M[qtd], N[qtd], media=0;

    for(i=0; i < qtd; i++){
        cout << "\nDigite a matricula do aluno " << i+1 << ": ";
        cin >> M[i];
        cout << "\nDigite a nota do aluno: ";
        cin >> N[i];
        media += N[i];
    }

    media /= qtd;
    cout << "\nMedia da turma: " << media;
    cout << "\nConjunto de notas maiores que a media: ";
    for(i=0; i < qtd; i++){
        if(N[i] > media){
            cout << N[i] << " ";
        }
    }

    cout << "\nMatriculas dos alunos menores que a media: ";
    for(i=0; i < qtd; i++){
        if(N[i] < media){
            cout << M[i] << " ";
        }
    }
}