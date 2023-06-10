/*Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada 
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar 
nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e 
finalizar. OBS: Deve-se utilizar um vetor de registros na solução.*/

#include<iostream>
#include<string>
using namespace std;

struct Cliente{
    unsigned long int identidade;
    string nome;
    string endereco;
    unsigned long int telefone;
};

int main(){

    Cliente clientes[20];
    int cont=0;
    char resp;

    do{

        cout << "\nDigite a identidade do cliente "<< cont+1 << " (apenas numeros):";
        cin >> clientes[cont].identidade;
        cout << "\nDigite o nome do cliente " << cont+1 << ":";
        getchar();
        getline(cin, clientes[cont].nome);
        cout << "\nDigite o endereco do cliente " << cont+1 << ":";
        getchar();
        getline(cin, clientes[cont].endereco);
        cout << "\nDigite o telefone do cliente " << cont+1 <<  " (apenas numeros):";
        cin >> clientes[cont].telefone;

        cout << "Novo Cliente (S/N)?";
        cin >> resp; 
        cont++;
    }while(cont < 20 && resp == 'S');

    cout << "\n\tRELATORIO DE CLIENTES CADASTRADOS\n";

    for(int i=0; i < cont;i++){
        cout << "\nCLIENTE " << i +1;
        cout <<"\nIDENTIDADE............"<< clientes[i].identidade;
        cout <<"\nNOME.................."<< clientes[i].nome;
        cout <<"\nENDERECO............."<<clientes[i].endereco;
        cout <<"\nTELEFONE............."<< clientes[i].telefone << "\n\n";    
    }
}