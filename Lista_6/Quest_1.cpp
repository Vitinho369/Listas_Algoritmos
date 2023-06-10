/* Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.*/

#include<iostream>
#include<string>
using namespace std;

struct Aluno{
    int matricula;
    string nome;
    string endereco;
    float mediaGeral;
};


int main(){
    Aluno alunos[10];


    for(int i=0; i < 10; i++){
        cout << "\nDigite a matricula do aluno:";
        cin >> alunos[i].matricula;
        cout << "\nDigite o nome do aluno:";
        getchar();
        getline(cin, alunos[i].nome);
        cout << "\nDigite o endereco do aluno:";
        getline(cin, alunos[i].endereco);
        cout << "\nDigite a media geral do aluno:";
        cin >> alunos[i].mediaGeral;
        cout << "\n-------------------------------------------------\n";
        if(alunos[i].mediaGeral > 5) alunos[i].mediaGeral += 0.5;
    }

     for(int i=0; i < 10; i++){
            cout << "\n-------------------------------------------------\n";
            cout << "MATRICULA......................" << alunos[i].matricula;
            cout << "\nNOME..........................." << alunos[i].nome;
            cout << "\nENDERECEO......................" << alunos[i].endereco;
            cout << "\nMEDIA GERAL...................." << alunos[i].mediaGeral;
            cout << "\n-------------------------------------------------\n";
     }
}