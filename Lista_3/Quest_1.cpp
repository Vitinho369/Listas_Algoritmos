#include<iostream>
using namespace std;

int main(){
    int cod, idade, codVelha, idadeVelha;

    for(int cont=0; cont < 100; cont++){
        cout << "\nDigita sua idade: ";
        cin >> idade;

        cout << "Digite seu codigo:";
        cin >> cod;

        if(cont == 0){
            idadeVelha = idade;
            codVelha = cod;
        }else if(idade > idadeVelha && cont > 0){
                codVelha = cod;
                idadeVelha = idade;
            }
    }

    cout << "Idade da pessoa mais velha: " << idadeVelha;
    cout << "\nCodigo da pessoa mais velha: " << codVelha;

    cout << "\nFim de programa";
    system("pause");
}