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
    string buscaCPF;
    bool encontraCPF;
    int cont=0,op;

    do{
        cout << "\n1-CADASTRAR CLIENTE";
        cout << "\n2-IMPRIMIR DADOS COM BASE NO CPF";
        cout << "\n3-IMPRIMIR CLIENTES COM SALDO NEGATIVO";
        cout << "\n4-SAIR";
        cout << "\nDigite uma opcao:";
        cin >> op;

        switch (op){
        case 1:
            if(cont < 15){
                cout << "\nDigite o nome do cliente:";
                getchar();
                getline(cin, clienteBanco[cont].nome);
                cout << "\nDigite o cpf do cliente:";
                getline(cin, clienteBanco[cont].cpf);
                cout << "\nDigite o rg do cliente:";
                getline(cin, clienteBanco[cont].rg);
                cout << "\nDigite o numero da conta:";
                cin >> clienteBanco[cont].numConta;
                cout << "\nDigite a data de abertura da conta:";
                getchar();
                getline(cin, clienteBanco[cont].dataAbertura);
                cout << "\nDigite o saldo da conta:";
                cin >> clienteBanco[cont].saldo;
                cont++;
            }else{
                cout << "\nNAO EH POSSIVEL CADASTRAR MAIS FUNCIONARIOS";
            }
            break;
        
        case 2:
            cout << "\nDigite o cpf que deseja encontrar:";
            getchar();
            getline(cin, buscaCPF);
            encontraCPF = false;
            for(int i=0; i < cont;i++){
                if(buscaCPF == clienteBanco[i].cpf){
                    encontraCPF = true;
                    cout << "\nDADOS DO CLIENTE " << clienteBanco[i].nome << ":\n";
                    cout << "\nRG......................." << clienteBanco[i].rg;
                    cout << "\nNUMERO DA CONTA.........." << clienteBanco[i].numConta;
                    cout << "\nDATA DE ABETURA.........." << clienteBanco[i].dataAbertura;
                    cout << "\nSALDO DA CONTA..........."<< clienteBanco[i].saldo << "\n";
                    i = cont;
                }
            }

            if(!encontraCPF)
                cout << "\nNao existe cliente com esse CPF\n";
            break;

        case 3:
            cout <<"\nCLIENTES COM SALADO NEGATIVO:\n";
            cout << "\n--------------------------------------------\n";
            for(int i=0; i < cont;i++){
                if(clienteBanco[i].saldo < 0){
                    cout << "\nNOME....................." << clienteBanco[i].nome;
                    cout << "\nCPF......................" << clienteBanco[i].cpf;
                    cout << "\nRG......................." << clienteBanco[i].rg;
                    cout << "\nNUMERO DA CONTA.........." << clienteBanco[i].numConta;
                    cout << "\nDATA DE ABETURA.........." << clienteBanco[i].dataAbertura;
                    cout << "\nSALDO DA CONTA..........."<< clienteBanco[i].saldo << "\n";
                }
            }
            cout << "\n--------------------------------------------\n";
            break;

            case 4: cout << "\nFIM DE PROGRAMA";
            break;
            default: cout << "\nOPCAO INVALIDA";
        }
    }while(op != 4);
}