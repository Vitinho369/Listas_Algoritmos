/*5. Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando 
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20 
clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver 
um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o 
sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente 
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma 
busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente 
cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”.
*/

#include<iostream>
#include<string>
using namespace std;

struct Cliente{
    unsigned long int identidade;
    string nome;
    string endereco;
    bool encontraCliente;
    unsigned long int telefone;
};

int main(){

    Cliente clientes[20];
    int cont=0,op;
    unsigned long int identidadeBusca;
    char resp;
    bool encontraCliente;

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
    
    system("cls");
    cout << "\n1-CONSULTAR RELATORIO COMPLETO";
    cout << "\n2-CONSULTAR UM CLIENTE INDIVIDUALMENTE";
    cout << "\nO que voce deseja?\n";
    cin >> op;

    switch (op){
    case 1:
        cout << "\n\n\tRELATORIO DE CLIENTES CADASTRADOS\n";

        for(int i=0; i < cont;i++){
            cout << "\nCLIENTE " << i +1;
            cout <<"\nIDENTIDADE............"<< clientes[i].identidade;
            cout <<"\nNOME.................."<< clientes[i].nome;
            cout <<"\nENDERECO............."<<clientes[i].endereco;
            cout <<"\nTELEFONE............."<< clientes[i].telefone << "\n\n";    
        }

        break;

        case 2:

            cout << "\nDigite a identidade do cliente que deseja encontrar:";
            cin >> identidadeBusca;
            encontraCliente = false;
            for(int i=0; i < cont;i++){
                if(identidadeBusca == clientes[i].identidade){
                    encontraCliente = true;
                    cout << "\nCLIENTE ENCONTRADO:";
                    cout <<"\nNOME.................."<< clientes[i].nome;
                    cout <<"\nENDERECO............."<<clientes[i].endereco;
                    cout <<"\nTELEFONE............."<< clientes[i].telefone << "\n\n";    
                }
            }
            
            if(!encontraCliente)
                cout << "Cliente nao cadastrado";
        break;
    
    default:cout << "\nOPCAO INVALIDA";
    }
   
}