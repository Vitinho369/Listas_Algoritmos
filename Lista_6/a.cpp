#include<iostream>
#include<string>
using namespace std;

struct tContatoCliente{
	int numero;
	string email;
	string nomeCliente;
};
struct tNotaFiscal {
	int NF;
	string nomeProduto;
	int volume;
	string ocorrencia;
	tContatoCliente contato;
};
int main(){
	bool flag;
	int indice=4,i, j, cont=0, escolha, auxNF;
	tNotaFiscal nota[indice];
	do{
		
		cout<<"\n|---------MENU PRINCIPAL---------|";
		cout<<"\n|--------------------------------|";
		cout<<"\n| 1  INCLUIR UM REGISTRO         |";
		cout<<"\n| 2  BUSCAR UM REGISTRO          |";
		cout<<"\n| 3  ALTERAR UM REGISTRO         |";
		cout<<"\n| 4  EXCLUIR UM REGISTRO         |";
		cout<<"\n| 5  LISTAR REGISTROS EXISTENTES |";
		cout<<"\n| 6  SAIR DO SISTEMA             |";
	    cout<<"\n|--------------------------------|";
	    cout<<"\n| Digite sua escolha: ";
	    cin>>escolha;
	    
	    switch(escolha){
	    	case 1:
	    	if(cont==4){//verifica se ha espaco nos indices para incluir NF
	     		cout <<"\n\tNao ha mais espaco para incluir NF.";
			  }else{
	     		flag=false;
	     		cout <<"\n\tINCLUIR UMA NOTA FISCAL";
	     		cout <<"\n\tDigite o codigo da NF: ";
	     		cin >>auxNF;
	     		getchar();
	     		
		     	for(i=0;i<cont;i++){//procura para saber se a NF ja esta cadastrada no CRUD
		     		if(auxNF==nota[cont].NF){
		     		   flag=true;
					  }
				  }
        }
				if(flag){
					cout << "\n\tNF ja cadastrada!";
				}else{// cadastro da NF propriammente dita
					nota[cont].NF = auxNF;
					cout <<"\n\tCadastrar NF: "<<nota[cont].NF;
					cout <<"\n\tNome do produto: ";
				    getline(cin, nota[cont].nomeProduto);
				    cout <<"\n\tQuantidade de volumes: ";
				    cin >>nota[cont].volume;
				    getchar();
					cout <<"\n\tcodigo de ocorrencia.";
					getline(cin,nota[cont].ocorrencia);
					cout <<"\n\tNome do Cliente: ";
					getline(cin, nota[cont].contato.nomeCliente);
					cout <<"\n\tInformacoes para contato: ";
					cout <<"\n\t1 - Email: ";
					getline(cin, nota[cont].contato.email);
					cout <<"\n\t2 - telefone para contato: ";
					cin >>nota[cont].contato.numero;
					getchar();
					cont++;
					cout <<"\n\tNF CADASTRADA COM SUCESSO!";
				}
		  break;
			
			case 2:
				
	    break;
	    	
	    case 5:
	    	cout<<"\n\tListar NF's.";
	    	for(i=0;i<=cont;i++){
	    		if(cont==0){
	    			cout<<"\n\tAinda nao ha NF's cadastradas.";
					}
				}
	    break;
	    	
	    case 6:
	    	cout<<"\n\tFim de programa";
			break;
			
			default:
				cout<<"\n\tOpcao invalida";
			break;	
		}
		system("clear");
		
	}while(escolha!=6);
	return 0;
}