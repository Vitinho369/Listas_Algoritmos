#include<iostream>
using namespace std;

int main(){
    int idade[10],i, idadeMaior, idadeMenor;
    float altura[10], maiorAlt, menorAlt, mediaAltura18=0;

    for(i=0; i<10;i++){
        cout << "\nDigite a idade do aluno " << i << ": ";
        cin >> idade[i];

        cout << "\nDigite a altura do aluno " << i << ": ";
        cin >> altura[i];

        if(i==0){
            maiorAlt = altura[i];
            menorAlt = altura[i];
            idadeMaior = idade[i];
            idadeMenor = idade[i];
        }else{
            if(maiorAlt < altura[i]){
                maiorAlt = altura[i];
                idadeMaior = idade[i];
            }

            if(menorAlt > altura[i]){
                menorAlt = altura[i];
                idadeMenor = idade[i];
            }
        }

        if(idade[i] >= 18){
            mediaAltura18 += altura[i];
        }
    }

    cout << "\nAltura dos alunos: ";
    for(i=0; i<10; i++){
        cout << altura[i] << " ";
    }
    
    cout << "\nIdade dos alunos: ";
    for(i=0; i<10; i++){
        cout << idade[i] << " ";
    }

    cout << "\nMedia das alturas dos alunos maiores de 18: ";
    cout << mediaAltura18;
    cout << "\nIdade do aluno mais baixo: " << idadeMenor;
    cout << "\nIdade do aluno mais alto: " << idadeMaior;
}