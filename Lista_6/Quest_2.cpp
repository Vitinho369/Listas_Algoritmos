/*Elabore um algoritmo que 
- Crie a estrutura tAnimal: Registro tAnimal: 
                                nome: string 
                                raca: string 
                                idade: int 
- Declare um vetor Animais (50 posições de tAnimal) e cadastre 8 animais; 
- Verifique e escreva o nome do animal mais velho; 
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para 
a busca. Se ele quiser, leia uma raça e, se existir animal da raça procurada, informe seus 
dados (nome e idade); 
*/

#include<iostream>
#include<string>
using namespace std;


struct tAnimal{
    string nome; 
    string raca; 
    int idade;
};

int main(){
    tAnimal animais[50];
    tAnimal animalMaisVelho;
    string buscaAnimal;
    int op, cont=0;
    do{
        cout << "\n1-CADASTRAR ANIMAL";
        cout << "\n2-CONSULTAR ANIMAL";
        cout << "\n3-SAIR";
        cout << "\nDigite uma opcao:";
        cin >> op;
        switch (op){
        case 1:

            if(cont == 50){
                cout << "\nNAO EH POSSIVEL CADASTRAR MAIS ANIMAIS";
            }else{
                cout << "\nDigite o nome do animal:";
                getchar();
                getline(cin, animais[cont].nome);
                cout << "\nDigite a raca do animal:";
                getline(cin, animais[cont].raca);
                cout << "\nDigite a idade do animal:";
                cin >> animais[cont].idade;

                if(cont == 0 || animalMaisVelho.idade < animais[cont].idade){
                    animalMaisVelho = animais[cont];
                }

                cout << "\n--------------------------------";
                cout << "\n\t*ANIMAL MAIS VELHO*\n";
                cout << "\nNOME..........." << animalMaisVelho.nome;
                cout << "\nRACA..........." << animalMaisVelho.raca;
                cout << "\nIDADE..........." << animalMaisVelho.idade;
                cout << "\n--------------------------------";
                cont++;
            }
            break;

            case 2: 
                cout << "\nDigite a raca do animal:";
                getchar();
                getline(cin, buscaAnimal);
                
                cout << "\n--------------------------------";
                cout << "\n\t*ANIMAIS DA RACA " << buscaAnimal << "*\n";
                for(int i=0; i < cont; i++){
                    if(buscaAnimal == animais[i].raca){
                        cout << endl;
                        cout << "NOME..........." << animais[i].nome;
                        cout << "\nRACA..........." << animais[i].raca;
                        cout << "\nIDADE..........." << animais[i].idade;
                        cout << endl;
                    }
                }
                cout << "\n--------------------------------";
                break;
            case 3: cout << "\nFIM DE PROGRAMA";
                break;
        default: cout << "\nOPCAO INVALIDA";
        }
    }while(op != 3);
}