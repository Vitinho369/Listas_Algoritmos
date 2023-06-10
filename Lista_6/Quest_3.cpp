/*Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma 
estrutura de registro para a construção deste cadastro.*/

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
    Cliente clientes[2];

    for(int i=0; i < 2;i++){
        cout << "\nDigite a identidade do cliente "<< i+1 << " (apenas numeros):";
        cin >> clientes[i].identidade;
        cout << "\nDigite o nome do cliente " << i+1 << ":";
        getchar();
        getline(cin, clientes[i].nome);
        cout << "\nDigite o endereco do cliente " << i+1 << ":";
        getchar();
        getline(cin, clientes[i].endereco);
        cout << "\nDigite o telefone do cliente " << i+1 <<  " (apenas numeros):";
        cin >> clientes[i].telefone;
    }
    
    cout <<"\n\nCLIENTES CADASTRADOS:\n";
    for(int i=0; i < 2;i++){
        cout << "\nCLIENTE " << i +1;
        cout <<"\nIDENTIDADE............"<< clientes[i].identidade;
        cout <<"\nNOME.................."<< clientes[i].nome;
        cout <<"\nENDERECO............."<<clientes[i].endereco;
        cout <<"\nTELEFONE............."<< clientes[i].telefone << "\n\n";    
    }
}