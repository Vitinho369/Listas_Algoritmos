/* Projeto: implementação de um CRUD
A partir de um registro à sua escolha, implemente um vetor 
de registros e as funcionalidades do menu abaixo:
 MENU PRINCIPAL
----------------------------------------------
1 – INCLUIR UM REGISTRO
2 – BUSCAR UM REGISTRO
3 – ALTERAR UM REGISTRO
4 – EXCLUIR UM REGISTRO
5 – LISTAR REGISTROS EXISTENTES
6 – SAIR DO SISTEMA
Considere que:
- O registro escolhido deverá ter, obrigatoriamente, um campo chave primária do tipo inteiro 
(pesquisar o que significa “campo chave primária”);
- Na inclusão de um registro, o campo chave primária deverá ser único, ou seja, não deverá 
ser permitida a inclusão de um registro cujo campo chave primária já exista no vetor;
- Na busca por um registro no vetor, o usuário deverá escolher o campo a partir do qual será 
efetuada a busca. Por exemplo, no caso do registro tProduto da questão 12, a busca poderia 
ser feita pelo campo “descrição”, “quantidade”, etc. Se existir mais de um registro 
cadastrado com aquela informação, todos deverão ser listados como resultados da busca;
- Na alteração de um registro, o algoritmo deverá garantir que o campo chave primária, após 
alterado, não poderá estar duplicado no vetor.
- Na exclusão do registro, o vetor não deve ficar com “buracos”, ou seja, quando um registro 
for excluído, todos os registros posteriores a este deverão ser movidos uma posição para a 
frente;
- Na listagem dos registros existentes, o algoritmo não deverá mostrar as posições do vetor 
sem registros incluídos previamente (com lixos de memória).
- Não poderão ser executadas inclusões se o vetor estiver cheio e não poderão ser realizadas 
exclusões se o vetor estiver vazio. O algoritmo deverá informar se uma dessas duas 
situações ocorrerem
*/
#include<iostream>
#include<string>
using namespace std;

struct tLivro{
    int isbn;
    string titulo;
    string autor;
    float preco;
    int qtdPaginas;
};

int main(){
    const int tamLivros = 1;
    int op,contLivro=0, isbnBusca, opBusca, paginasBusca, indiceLivro;
    tLivro livro[tamLivros];
    string tituloBusca, autorBusca;
    float precoBusca;
    bool encontraLivro;

    do{
        cout << "\nMENU PRINCIPAL\n";
        cout << "\n----------------------------------------------\n";
        cout << "1 - INCLUIR UM LIVRO\n";
        cout << "2 - BUSCAR UM LIVRO\n";
        cout << "3 - ALTERAR UM LIVRO\n";
        cout << "4 - EXCLUIR UM LIVRO\n";
        cout << "5 - LISTAR LIVROS EXISTENTES\n";
        cout << "6 - SAIR DO SISTEMA\n";
        cout << "Digite uma opcao: ";
        cin >> op;

        switch (op){
        case 1:
            if(contLivro == tamLivros){
                cout << "\nNao eh mais possivel cadastrar livros";
            }else{

                do{
                    encontraLivro = false;
                    cout << "\nDigite o ISBN do livro: ";
                    cin >> isbnBusca;

                    if(contLivro>0){
                        for(int i = 0; i < contLivro; i++){
                            if(isbnBusca == livro[i].isbn){
                                encontraLivro = true;
                                i=contLivro;
                            }
                        }
                    }
                    if(encontraLivro){
                        cout << "\nLivro ja cadastro, digite novamente";
                    }
                }while(encontraLivro);

                livro[contLivro].isbn = isbnBusca;
                cout << "\nDigite o titulo do livro: ";
                getchar();
                getline(cin, livro[contLivro].titulo);
                cout << "\nDigite o nome do autor: ";
                getline(cin, livro[contLivro].autor);
                cout << "\nDigite o preco do livro: ";
                cin >> livro[contLivro].preco;
                cout << "\nDigite a qtd de paginas do livro: ";
                cin >> livro[contLivro].qtdPaginas;
                cout << "\n-------------------------------\n";
                cout << "LIVRO CADASTRADO COM SUCESSO :)";
                cout << "\n-------------------------------\n";
                contLivro++;
            }
            break;

            case 2:
                cout << "\nQual o campo que voce quer utilizar para buscar o livro?\n";
                cout << "1 - ISBN\n";
                cout << "2 - TITULO\n";
                cout << "3 - AUTOR\n";
                cout << "4 - PRECO\n";
                cout << "5 - QTD. PAGINAS\n";
                cout << "Digite uma opcao: ";
                cin >> opBusca;

                encontraLivro = false;
                switch (opBusca){
                case 1:
                    cout << "\nDigite o ISBN do livro que deseja encontrar: ";
                    cin >> isbnBusca;
                    for(int i=0; i < contLivro;i++){
                        if(livro[i].isbn == isbnBusca){
                            cout << "\n---------------------------\n";
                            cout << "\nTITULO: " << livro[i].titulo;
                            cout << "\nAUTOR: " << livro[i].autor;
                            cout << "\nISBN: " << livro[i].isbn;
                            cout << "\nPRECO: " << livro[i].preco;
                            cout << "\nQTD. PAGINAS: " << livro[i].qtdPaginas;
                            cout << "\n---------------------------\n";
                            encontraLivro = true;
                        }
                    }

                    if(!encontraLivro){
                        cout << "\nLiVRO NAO ENCONTRADO";
                    }
                    break;

                    case 2:
                    cout << "\nDigite o autor do livro que deseja encontrar: ";
                    getchar();
                    getline(cin, tituloBusca);
                    for(int i=0; i < contLivro;i++){
                        if(livro[i].titulo == tituloBusca){
                            cout << "\n---------------------------\n";
                            cout << "\nTITULO: " << livro[i].titulo;
                            cout << "\nAUTOR: " << livro[i].autor;
                            cout << "\nISBN: " << livro[i].isbn;
                            cout << "\nPRECO: " << livro[i].preco;
                            cout << "\n---------------------------\n";
                            encontraLivro = true;
                        }
                    }
                    
                    if(!encontraLivro) 
                        cout << "\nLiVRO NAO ENCONTRADO";
                    break;

                    case 3:
                    cout << "\nDigite o titulo do livro que deseja encontrar: ";
                    getchar();
                    getline(cin,autorBusca);
                    for(int i=0; i < contLivro;i++){
                        if(livro[i].autor == autorBusca){
                            cout << "\n---------------------------\n";
                            cout << "\nTITULO: " << livro[i].titulo;
                            cout << "\nAUTOR: " << livro[i].autor;
                            cout << "\nISBN: " << livro[i].isbn;
                            cout << "\nPRECO: " << livro[i].preco;
                            cout << "\n---------------------------\n";
                            encontraLivro = true;
                        }
                    }
                    
                    if(!encontraLivro) 
                        cout << "\nLiVRO NAO ENCONTRADO";
                    break;

                    case 4:
                    cout << "\nDigite o preco do livro que deseja encontrar: ";
                    cin >> precoBusca;
                    for(int i=0; i < contLivro;i++){
                        if(livro[i].preco == precoBusca){
                            cout << "\n---------------------------\n";
                            cout << "\nTITULO: " << livro[i].titulo;
                            cout << "\nAUTOR: " << livro[i].autor;
                            cout << "\nISBN: " << livro[i].isbn;
                            cout << "\nPRECO: " << livro[i].preco;
                            cout << "\n---------------------------\n";
                            encontraLivro = true;
                        }
                    }

                    if(!encontraLivro)
                        cout << "\nLiVRO NAO ENCONTRADO";
                    break;

                    case 5:
                    cout << "\nDigite a qtd. de paginas do livro que deseja encontrar: ";
                    cin >> paginasBusca;
                    for(int i=0; i < contLivro;i++){
                        if(livro[i].autor == autorBusca){
                            cout << "\n---------------------------\n";
                            cout << "\nTITULO: " << livro[i].titulo;
                            cout << "\nAUTOR: " << livro[i].autor;
                            cout << "\nISBN: " << livro[i].isbn;
                            cout << "\nPRECO: " << livro[i].preco;
                            cout << "\n---------------------------\n";
                            encontraLivro = true;
                        }
                    }

                    if(!encontraLivro)
                        cout << "\nLiVRO NAO ENCONTRADO";
                    break;
                
                default:
                    cout << "\nOpcao invalida, digite novamente!";
                }
            break;
            
            case 3:
                cout << "\nDigite o ISBN do livro que deseja alterar: ";
                cin >> isbnBusca;

                
                encontraLivro = false;
                for(int i=0; i < contLivro; i++){
                    if(livro[i].isbn == isbnBusca){
                        indiceLivro = i;   
                        encontraLivro = true;  
                    }
                }

                if(!encontraLivro){
                    cout << "\nLiVRO NAO ENCONTRADO";
                }else{
                    cout << "\nDigite o novo ISBN do livro: ";
                    cin >> isbnBusca;

                    encontraLivro = false;
                    for(int i=0; i < contLivro; i++){
                        if(livro[i].isbn == isbnBusca){
                            i = contLivro;  
                            encontraLivro = true;   
                        }
                    }

                    if(encontraLivro) {
                        cout << "\nISBN ja presente no banco, nao eh possivel altera-lo";
                    }else{
                        livro[indiceLivro].isbn = isbnBusca;
                        cout << "\nDigite o novo titulo do livro: ";
                        getchar();
                        getline(cin, livro[contLivro].titulo);
                        cout << "\nDigite o novo nome do autor: ";
                        getline(cin, livro[contLivro].autor);
                        cout << "\nDigite o novo preco do livro: ";
                        cin >> livro[contLivro].preco;
                        cout << "\nDigite a nova qtd de paginas do livro: ";
                        cin >> livro[contLivro].qtdPaginas;
                        cout << "\n-------------------------------\n";
                        cout << "LIVRO ALTERADO COM SUCESSO :)";
                        cout << "\n-------------------------------\n";
                    }
                }
            break;

            case 4:
                if(contLivro == 0){
                    cout << "\nNAO EH POSSIVEL EXCLUIR LIVROS";
                }else{
                    cout << "\nDigite o ISBN do livro que deseja excluir: ";
                    cin >> isbnBusca;
                    encontraLivro = false;
                    for(int i=0; i < contLivro; i++){
                        if(livro[i].isbn ==  isbnBusca){
                            encontraLivro = true;
                            indiceLivro = i;
                        }
                    }

                    if(!encontraLivro){
                        cout << "\nLIVRO NAO CADASTRADO, NAO EH POSSIVEL EXCLUIR";
                    }else{
                       for(int i=indiceLivro; i < (contLivro-1); contLivro++){
                            livro[i].autor = livro[i+1].autor;
                            livro[i].isbn = livro[i+1].isbn;
                            livro[i].titulo = livro[i+1].titulo;
                            livro[i].qtdPaginas = livro[i+1].qtdPaginas;
                       }
                       contLivro--; 
                        cout << "\n-------------------------------\n";
                        cout << "LIVRO EXCLUIDO COM SUCESSO :)";
                        cout << "\n-------------------------------\n";
                    }
                }
            break;
            
            case 5:
                cout << "\nLIVROS CADASTRADOS: ";
                for(int i=0; i < contLivro;i ++){
                    cout << "\n---------------------------\n";
                    cout << "\nTITULO: " << livro[i].titulo;
                    cout << "\nAUTOR: " << livro[i].autor;
                    cout << "\nISBN: " << livro[i].isbn;
                    cout << "\nPRECO: " << livro[i].preco;
                    cout << "\nQTD. PAGINAS: " << livro[i].qtdPaginas;
                    cout << "\n---------------------------\n";
                }
            break;

            case 6: cout << "\nFIM DE PROGRAMA";
            break;
            default: cout << "\nOpcao invalida, digite novamente!";
        }
    }while(op != 6);
}