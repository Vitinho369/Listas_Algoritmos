/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize 
duas funções: uma que determine o maior valor entre as notas (de provas ou de 
trabalhos) e outra que calcule a média aritmética das duas maiores notas.*/

#include<iostream>
using namespace  std;

float maiorNota(float n1, float n2);
float calcularMedia(float n1, float n2);

int main(){
    float n1Prova, n2Prova, n1Trab, n2Trab;
    float maiorNProva, maiorNTrab, mediaMaiorN;

    cout << "\nDigite a primeira nota da prova:";
    cin >> n1Prova;
    cout << "\nDigite a segunda nota da prova:";
    cin >> n2Prova;
    cout << "\nDigite a primeira nota do trabalho:";
    cin >> n1Trab;
    cout << "\nDigite a segunda nota do trabalho:";
    cin >> n2Trab;

    maiorNProva = maiorNota(n1Prova, n2Prova);
    maiorNTrab = maiorNota(n1Trab, n2Trab);
    mediaMaiorN = calcularMedia(maiorNProva, maiorNTrab);

    cout << "\nMaior nota das provas: " << maiorNProva;
    cout << "\nMaior nota dos trabalhos: " << maiorNTrab;
    cout << "\nMedia das maiores notas: " << mediaMaiorN;
}

float maiorNota(float n1, float n2){
    if(n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

float calcularMedia(float n1, float n2){
    float media = (n1+n2)/2;
    return media;
}