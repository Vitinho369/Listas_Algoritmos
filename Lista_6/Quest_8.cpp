/*Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, 
e-mail, número de horas de acesso, página (‘S’-sim ou ‘N’-não). Elaborar um algoritmo que 
insira um conjunto de registros (máximo 500), calcule e mostre um relatório contendo o valor 
a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso custam R$ 35,00 e 
as horas que excederam tem o custo de R$ 2,50 por hora. Para os clientes que têm página, 
adicionar R$ 40,00. */

#include<iostream>
#include<string>
using namespace std;

struct ClienteInternet{
    int codCliente;
    string email;
    float numHorasAcess;
    char pagina;
};

int main(){
    ClienteInternet clienteInternet[500];
    int cont=0;
    float valor;
    char resp;

    do{
        cout << "\nDigite o codigo do cliente:";
        cin >> clienteInternet[cont].codCliente;
        cout << "\nDigite o email do cliente:";
        getchar();
        getline(cin, clienteInternet[cont].email);
        cout << "\nDigite a quantidade de horas de acesso:";
        cin >> clienteInternet[cont].numHorasAcess;
        cout << "\nEsse cliente possui pagina (S/N)?";
        cin >> clienteInternet[cont].pagina;
        
        cout << "\nDeseja cadastrar outro cliente(S/N)?";
        cin >> resp;
        cont++;
    }while(cont < 500 && resp != 'N');

    cout << "\nRELATORIO DE CLIENTES\n";
    cout << "\n---------------------------------------------\n";
    for(int i=0; i < cont; i++){
        cout << "\nCODIGO DO CLIENTE......................" << clienteInternet[i].codCliente;
        cout << "\nE-MAIL DO CLIENTE......................" << clienteInternet[i].email;
        cout << "\nNUMERO DE HORAS DE ACESSO.............." << clienteInternet[i].numHorasAcess;
        cout << "\nPOSSUI PAGINA?........................." << clienteInternet[i].pagina;
        if(clienteInternet[i].numHorasAcess >= 20)
            valor = ((clienteInternet[i].numHorasAcess-20)*2.5)+ 35;
        else
            valor = 35;
        if(clienteInternet[i].pagina == 'S')
            valor += 40;
        cout << "\nVALOR A PAGAR.........................." << valor << "\n";
    }
    cout << "\n---------------------------------------------\n";
}