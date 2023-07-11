/*Escreva uma função que determine a média e a situação de um aluno em uma 
disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), 
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro 
para uma variável (media), conforme a seguinte assinatura: 
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na 
variável indicada pelo ponteiro media, a função deve armazenar a média do aluno, 
calculada como a média aritmética das três provas. Além disso, a função deve retornar 
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte 
critério: 
    ver imagem criterio.png
Em seguida, escreva a função principal de um programa que utiliza a função anterior para 
determinar a situação de um aluno. O programa deve: 
- Ler do teclado três números reais e dois números inteiros, representando as 
notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente; 
- Chamar a função desenvolvida na primeira questão para determinar a média e a 
situação do aluno na disciplina; 
- Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é, 
“APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere 
retornado pela função, conforme a tabela acima. */

#include<iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main(){
    float nota1, nota2, nota3, media;
    int numFaltas, numAulas;
    char situacaoAluno;
    cout << "\nDigite a primeira nota:";
    cin >> nota1;
    cout << "\nDigite a segunda nota:";
    cin >> nota2;
    cout << "\nDigite a terceira nota:";
    cin >> nota3;

    cout << "\nQual a quantidade de aulas que voce teve?";
    cin >> numAulas;
    cout << "\nQual a sua quantidade de faltas?";
    cin >> numFaltas;

    situacaoAluno = situacao(nota1, nota2, nota3, numFaltas, numAulas, &media);

    cout << "\nMEDIA DO ALUNO: " << media;
    cout << "\nSITUACAO DO ALUNO: " << situacaoAluno;
}


char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    *media = (p1+p2+p3)/3;

    if(faltas <= (aulas*0.25)){
        if(*media >= 6){
            return 'A';
        }else{
            return 'R';
        }
    }else{
        return 'F';
    }
}