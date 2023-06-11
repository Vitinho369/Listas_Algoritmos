/*Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int), 
Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo 
Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string), 
Ender (Endereco), Telefone (string) e Idade (int). 
- Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados; 
- Leia um endereço na variável do tipo endereço;
- Faça uma busca e liste os nomes de todas as pessoas cadastradas no vetor cujo bairro é o 
mesmo bairro do endereço cadastrado na variável do tipo endereço. */

#include<iostream>
#include<string>
using namespace std;

struct Endereco{
    string Rua;
    int Numero;
    string Bairro;
    string Cidade;
    string Estado;
};

struct Pessoa{
    string Nome;
    Endereco Ender;
    string Telefone;
    int Idade;
};

int main(){
    Endereco endereco;
    Pessoa pessoas[10];

    for(int i=0; i < 3; i++){
        cout << "\nDigite o nome da pessoa:";
        if(i>0)
            getchar();
        getline(cin, pessoas[i].Nome);
        cout << "\nDigite o endereco da pessoa\n";
        cout << "\n-------------------------------";
        cout << "\nDigite o nome da Rua:";
        getline(cin, pessoas[i].Ender.Rua);
        cout << "\nDigite o numero da casa: ";
        cin >> pessoas[i].Ender.Numero;
        cout << "\nDigite o nome do Bairro:";
        getchar();
        getline(cin, pessoas[i].Ender.Bairro);
        cout << "\nDigite o nome da Cidade:";
        getline(cin, pessoas[i].Ender.Cidade);
        cout << "\nDigite o nome do Estado:";
        getline(cin, pessoas[i].Ender.Estado);
        cout << "\n-------------------------------";
        cout << "\nDigite o Telefone da pessoa:";
        getline(cin, pessoas[i].Telefone);
        cout << "\nDigite a Idade da pessoa:";
        cin >> pessoas[i].Idade;
    }

    cout << "\n-------------------------------------\n";
    cout << "\nDigite um endereco\n";
    cout << "\nDigite o nome da Rua:";
    getchar();
    getline(cin, endereco.Rua);
    cout << "\nDigite o numero da casa: ";
    cin >> endereco.Numero;
    cout << "\nDigite o nome do Bairro:";
    getchar();
    getline(cin, endereco.Bairro);
    cout << "\nDigite o nome da Cidade:";
    getline(cin, endereco.Cidade);
    cout << "\nDigite o nome do Estado:";
    getline(cin, endereco.Estado);

    cout << "\nPESSOAS QUE MORAM NO BAIRRO DO ENDERECO DIGITADO:\n\n";
    for(int i=0; i < 3;i++){
        if(endereco.Bairro == pessoas[i].Ender.Bairro){
            cout << pessoas[i].Nome << "\n";
        }
    }
    cout << "-----------------------------------------\n";
}