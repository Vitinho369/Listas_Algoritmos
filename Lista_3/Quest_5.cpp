#include<iostream>
using namespace std;

int main(){
    float mediaFinal;
    int matricula, aprovados=0, reprovados=0, recuperacao=0;

    do{
        cout << "\nDigite sua matricula: ";
        cin >> matricula;
        cout << "Digite sua media final: ";
        cin >> mediaFinal;

        if(mediaFinal >= 7){
            aprovados++;
                if(mediaFinal > 9) cout << "\nParabens aluno da matricula " << matricula <<" sua nota foi maior que 9 :)";
        }else if(mediaFinal <3 && mediaFinal >0) 
            reprovados++;
        else if(mediaFinal >0)
            recuperacao++;

    }while(mediaFinal >= 0);

    cout << "Quantidade de alunos reprovados: " << reprovados << endl;
    cout << "Quantidade de alunos em recuperacao: " << recuperacao << endl;
    cout << "Quantidade de alunos aprovados: " << aprovados << endl;

    cout << "\n\nFim de programa";
    system("pause");
}