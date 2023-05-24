#include<iostream>
using namespace std;

int main(){

    char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10;
    char respQ1, respQ2, respQ3, respQ4, respQ5, respQ6, respQ7, respQ8, respQ9, respQ10;
    bool resp;
    int qtdAluno = 1, acertosAluno, errosAluno=0, acertosTurma=0;
    float media;

    cout << "\n|-----Digite o gabarito-----|\n";
    cout << "\nResposta da questao 1: ";
    cin >> q1;
    cout << "\nResposta da questao 2: ";
    cin >> q2;
    cout << "\nResposta da questao 3: ";
    cin >> q3;
    cout << "\nResposta da questao 4: ";
    cin >> q4;
    cout << "\nResposta da questao 5: ";
    cin >> q5;
    cout << "\nResposta da questao 6: ";
    cin >> q6;
    cout << "\nResposta da questao 7: ";
    cin >> q7;
    cout << "\nResposta da questao 8: ";
    cin >> q8;
    cout << "\nResposta da questao 9: ";
    cin >> q9;
    cout << "\nResposta da questao 10: ";
    cin >> q10;

    do{
        acertosAluno = 0;
        errosAluno = 0;
        cout << "Digite a resposta da questao 1 do aluno " << qtdAluno << ": ";
        cin >> respQ1;
        cout << "Digite a resposta da questao 2 do aluno " << qtdAluno << ": ";
        cin >> respQ2;
        cout << "Digite a resposta da questao 3 do aluno " << qtdAluno << ": ";
        cin >> respQ3;
        cout << "Digite a resposta da questao 4 do aluno " << qtdAluno << ": ";
        cin >> respQ4;
        cout << "Digite a resposta da questao 5 do aluno " << qtdAluno << ": ";
        cin >> respQ5;
        cout << "Digite a resposta da questao 6 do aluno " << qtdAluno << ": ";
        cin >> respQ6;
        cout << "Digite a resposta da questao 7 do aluno " << qtdAluno << ": ";
        cin >> respQ7;
        cout << "Digite a resposta da questao 8 do aluno " << qtdAluno << ": ";
        cin >> respQ8;
        cout << "Digite a resposta da questao 9 do aluno " << qtdAluno << ": ";
        cin >> respQ9;
        cout << "Digite a resposta da questao 10 do aluno " << qtdAluno << ": ";
        cin >> respQ10;

        if(respQ1 == q1){
            acertosAluno++;
        }else{
            errosAluno++;
        }
        
        if(respQ2 == q2){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ3 == q3){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ4 == q4){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ5 == q5){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ6 == q6){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ7 == q7){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ8 == q8){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ9 == q9){
            acertosAluno++;
        }else{
            errosAluno++;
        }

        if(respQ10 == q10){
            acertosAluno++;
        }else{
            errosAluno++;
        }
        
        acertosTurma+= acertosAluno;
        media = acertosTurma/qtdAluno;

        cout << "\nAcertos do aluno " << qtdAluno << ": " << acertosAluno;
        cout << "\nErros do aluno " << qtdAluno << ": " << errosAluno;
        cout << "\nMedia atual da turma: " << media;
        cout << "\nDeseja continuar? 1 - sim, - nao";
        cin >> resp;
        qtdAluno++;
    }while(resp);

    cout << "\nMedia final da turma: " << media;

    cout << "\n\nFim de Programa\n";
    system("pause");
}