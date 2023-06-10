/*Elabore um algoritmo que defina um registro capaz de armazenar as seguintes informações 
sobre um determinado cliente de um banco: nome, CPF, RG, número da conta, data de 
abertura da conta e saldo. Em seguida manipule um vetor com 15 registros de clientes, onde 
cada registro é um elemento do tipo de dado definido. A manipulação do vetor é feita através 
das seguintes opções: cadastrar cliente, imprimir os dados de um determinado cliente com 
base no valor do campo CPF e imprimir todos os clientes com saldo negativo. */

#include<iostream>
#include<string>
using namespace std;

struct ClienteBanco{
    string nome;
    string cpf;
    string rg;
    int numConta;
    string dataAbertura;
    float saldo;
};

int main(){
    ClienteBanco clienteBanco[15];
    int cont=0,op;

    do{
        cout << "\n1- CADASTRAR CLIENTE";
        cout << "\n2-IMPRIMIR DADOS COM BASE NO CPF";
        cout << "\n3-IMPRIMIR CLIENTES COM SALDO NEGATIVO";
        cout << "\n4-SAIR";
        cin >> op;

        switch (op){
        case 1:
            if(cont < 15){
                cout << "";
            }else{
                cout << "\nNAO EH POSSIVEL CADASTRAR MAIS FUNCIONARIOS";
            }
            break;
        
        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        default: cout << "\nOPCAO INVALIDA";
        }
    }while(op != 4);
}