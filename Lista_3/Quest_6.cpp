#include<iostream>
using namespace std;

int main(){

    int num = 7, numAdvinhar, tentativas = 3;
    bool ganharJogo = false;

    do{
        cout << "\nTente descobrir um numero que esta entre 1 e 10, voce tem " << tentativas << " tentativa(s): ";
        cin >> numAdvinhar;

        if(numAdvinhar == num){
            ganharJogo = true;
        }else{
            cout << "\nNumero ainda nao descoberto :(";
                if(numAdvinhar > num) cout << "\nO valor digitado eh maior que o numero";
                else cout << "\nO valor digitado eh menor que o numero";
        }

        tentativas--;
    }while(tentativas > 0 && !ganharJogo);

    if(!ganharJogo){
        cout << "\n\nSinto muito, voce perdeu o jogo :(";
        cout << "\n O numero a ser descoberto era o " << num;
    }else{
        cout << "\n\nParabens!!!!!! Voce ganhou jogo!!!! Conseguiu advinhar o numero";
    }

    cout << "\n\nFim de programa\n";
    system("pause");
}