#include<iostream>
using namespace std;

int main(){
    float nota1, nota2, nota3, media;
    cout << "Digite suas 3 notas:";
    cin >> nota1 >> nota2 >>nota3;
    media = ((nota1*2) + (nota2*3) + (nota3*5))/10;

    cout << "\nMedia do aluno: " << media << endl; 
    if(media > 0 && media < 2.9) cout << "\nAluno reprovado";
    else if(media < 4.9) cout << "\nAluno em recuperacao";
    else cout << "\nAluno aprovado";

    cout << "\nFim de programa";
    system("pause");
}