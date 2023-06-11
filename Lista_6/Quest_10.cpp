/*Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um 
conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos, 
altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados 
e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo) das 
mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja, vamos 
apenas criar uma listagem dos homens e outra das mulheres*/

#include<iostream>
#include<string>
using namespace std;

struct Pessoa{
    string nome;
    bool genero;
    string corOlhos;
    float altura;
    float peso;
    string dataNascimento;
};

int main(){
    int qtd;
    cout << "\nQuantas pessoas farao parte da pesquisa?";
    cin >> qtd;

    Pessoa pessoas[qtd];
    
    for(int i=0; i < qtd;i++){
        cout << "\nDigite o nome da pessoa " << i + 1 <<":";
        if(i==0)
            getchar();
        getline(cin, pessoas[i].nome);
        cout << "\nQual o genero da pessoa?(1-M, 0-F)";
        cin >> pessoas[i].genero;
        cout << "\nQual a cor dos seus olhos?";
        getchar();
        getline(cin, pessoas[i].corOlhos);
        cout << "\nQual sua altura?";
        cin >> pessoas[i].altura;
        cout << "\nQual seu peso?";
        cin >> pessoas[i].peso;
        cout << "\nDigite sua data de nascimento:";
        getchar();
        getline(cin, pessoas[i].dataNascimento);
    }
    cout << "\n-------------------------------------\n";
    cout << "\nLISTAGEM DO SEXO MASCULINO:";
    for(int i=0; i < qtd;i++){
        if(pessoas[i].genero){
            cout << "\nNOME....................." << pessoas[i].nome;
            cout << "\nCOR DOS OLHOS............" << pessoas[i].corOlhos;
            cout << "\nALTURA..................." << pessoas[i].altura;
            cout << "\nPESO....................." << pessoas[i].peso;
            cout << "\nDATA DE NASCIMENTO......." << pessoas[i].dataNascimento;
        }
    }
    cout << "\n-------------------------------------\n";

    cout << "\n-------------------------------------\n";
    cout << "\nLISTAGEM DO SEXO FEMININO:";
    for(int i=0; i < qtd;i++){
        if(!pessoas[i].genero){
            cout << "\nNOME....................." << pessoas[i].nome;
            cout << "\nCOR DOS OLHOS............" << pessoas[i].corOlhos;
            cout << "\nALTURA..................." << pessoas[i].altura;
            cout << "\nPESO....................." << pessoas[i].peso;
            cout << "\nDATA DE NASCIMENTO......." << pessoas[i].dataNascimento;
        }
    }
    cout << "\n-------------------------------------\n";
}