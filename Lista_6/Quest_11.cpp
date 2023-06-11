/*Elabore um algoritmo que: 
- Crie o registro tAluno: 

    Registro tAluno: 
        nome: string 
        matriculaDoAluno: int 

- Declare um vetor Alunos (3 posições de tAluno) e cadastre 3 alunos no vetor Alunos; 
- Após o cadastro, escreva os dados de todos os alunos cadastrados; 
- Crie o registro tDisciplina: 

    Registro tDisciplina:       Obs: o usuário não deverá 
        matriculaDoAluno: int   digitar o valor do campo media. 
        disciplina: string      O sistema deverá calcular 
        nota1: float           automaticamente a média 
        nota2: float           aritmética das duas notas do 
    media: float               aluno e armazenar neste campo. 

- Crie o vetor Disciplinas (12 posições de tDisciplina) e cadastre, para cada um dos 3 alunos 
existentes no vetor Alunos, 4 disciplinas com as respectivas informações. Lembre-se que a
matrícula do aluno tem que ser a mesma cadastrada no vetor Alunos.
- Informe o seguinte menu e proceda com a operação de acordo com a escolha do usuário: 

                            MENU PRINCIPAL
            ----------------------------------------------
            1 – EXIBIR DADOS DE UM ALUNO
            2 – EXIBIR MAIOR MEDIA
            3 – EXIBIR MÉDIA DAS MÉDIAS POR ALUNO
            4 – EXIBIR OS ALUNOS DE UMA DISCIPLINA
            5 – SAIR DO SISTEMA

- Se o usuário escolher a opção 1, pergunte qual a matrícula do aluno que ele deseja 
consultar. Depois que ele informar, procure a matrícula procurada no vetor Alunos. Se 
existir, mostre o nome do aluno. Em seguida, procure no vetor Disciplinas pelos dados 
daquele aluno e mostre os três resultados. 
- Se o usuário escolher a opção 2, procure no vetor notas qual a matrícula do aluno que possui 
maior média e escreva A DISCIPLINA E O NOME DO ALUNO. 
- Se o usuário escolher a opção 3, mostre a média das médias por ALUNO, informando o 
nome do aluno e a média aritmética de suas médias. 
- Se o usuário escolher a opção 4, pergunte qual a disciplina que ele deseja consultar. Depois 
que ele informar, procure e mostre todos os nomes dos alunos daquela disciplina. 
- Se o usuário escolher 5, finalize o sistema. */

#include<iostream>
#include<string>

using namespace std;


struct tAluno{
    string nome; 
    int matriculaDoAluno;
};

struct tDisciplina{
    int matriculaDoAluno;
    string disciplina;
    float nota1;
    float nota2;
    float media;
}; 

int main(){
    tAluno alunos[3];
    int contInicio=0, contFim=4, indiceMaiorMedia, contMedia;
    float maiorMedia, mediaMedias;
    string alunoMaiorMedia, nomeMedias, disciplinaBusca;

    for(int i=0; i < 3; i++){
        cout << "\nDigite o nome do aluno " << i+1 << ": ";
        if(i >0)
            getchar();
        getline(cin, alunos[i].nome);
        cout << "\nDigite a matricula do aluno:";
        cin >> alunos[i].matriculaDoAluno;
    }

    cout << "\nDADOS DOS ALUNOS CADASTRADOS\n";
    cout << "\n------------------------------------";
    for(int i=0; i<3; i++){
        cout << "\nNOME........................" << alunos[i].nome;
        cout << "\nMATRICULA DO ALUNO.........." << alunos[i].matriculaDoAluno << endl;
    }
    cout << "------------------------------------\n\n";

    tDisciplina disciplinas[12];
    cout <<"\nCadastre as diciplinas";

    for(int i=0; i < 12;i++){
        cout << "\nDigite a matricula do aluno desta disciplina: ";
        cin >> disciplinas[i].matriculaDoAluno;
        cout << "\nDigite o nome da disciplina: ";
        getchar();
        getline(cin, disciplinas[i].disciplina);
        cout << "\nDigite a primeira nota desse aluno nessa disciplina: ";
        cin >> disciplinas[i].nota1;    
        cout << "\nDigite a segunda nota desse aluno nessa disciplina: ";
        cin >> disciplinas[i].nota2;   
        disciplinas[i].media = (disciplinas[i].nota1 + disciplinas[i].nota2)/2; 
        maiorMedia = disciplinas[i].media;
        indiceMaiorMedia = i;
    }

    int op;
    bool encontraAluno;
    int buscaMatricula;
    do{
        cout << "\nMENU PRINCIPAL";
        cout << "\n----------------------------------------------";
        cout << "\n1-EXIBIR DADOS DE UM ALUNO";
        cout << "\n2-EXIBIR MAIOR MEDIA";
        cout << "\n3-EXIBIR MEDIA DAS MEDIAS POR ALUNO";
        cout << "\n4-EXIBIR OS ALUNOS DE UMA DISCIPLINA";
        cout << "\n5-SAIR DO SISTEMA";
        cout << "\nDigite uma opcao:";
        cin >> op;

        switch (op){
        case 1:
            cout << "\nDigite a matricula do aluno que deseja encontrar: ";
            cin >> buscaMatricula;

            for(int i=0; i <3;i++){
                if(buscaMatricula == alunos[i].matriculaDoAluno){
                    encontraAluno = true;
                    cout << "\nDADOS DO ALUNO";
                    cout << "\n----------------------------------------------------------";
                    cout << "\nNOME...................." << alunos[i].nome;
                }
            }

            if(encontraAluno){
                cout << "\nDISCIPLINAS:";
                for(int i=0; i < 12;i++){
                    if(buscaMatricula == disciplinas[i].matriculaDoAluno){
                        cout << "\n\tNOME DA DISCIPLINA..............." << disciplinas[i].disciplina;
                        cout <<"\n\tNOTA 1............................" << disciplinas[i].nota1;
                        cout <<"\n\tNOTA 2............................" << disciplinas[i].nota2;
                        cout <<"\n\tMEDIA............................." << disciplinas[i].media << endl;
                    }
                }
                cout << "\n----------------------------------------------------------\n";
            }else{
                cout << "\nAluno nao encontrado\n";
            }
            break;

            case 2:

                for(int i=0; i < 12; i++){
                    if(maiorMedia < disciplinas[i].media){
                        maiorMedia = disciplinas[i].media;
                        indiceMaiorMedia = i;
                        i=12;
                    }
                }

                cout << endl;
                for(int i=0; i < 3;i++){
                    if(alunos[i].matriculaDoAluno == disciplinas[indiceMaiorMedia].matriculaDoAluno){
                        cout << "\nNome do aluno com a maior media.........." << alunos[i].nome;
                        cout << "\nNome da disciplina......................" << disciplinas[indiceMaiorMedia].disciplina;
                        cout << "\nMedia..................................." << disciplinas[indiceMaiorMedia].media;
                    }
                }
                cout << endl;
            break;

            case 3:
                mediaMedias = 0;
                contMedia = 0;
                cout << "\nDigite  matricula do aluno: ";
                cin >> buscaMatricula;
                for(int i=0; i < 12;i++){
                    if(buscaMatricula == disciplinas[i].matriculaDoAluno){
                        mediaMedias += disciplinas[i].media;
                        contMedia++;
                    }
                }
                mediaMedias = mediaMedias/contMedia;
                
                for(int i=0; i < 3;i++){
                    if(buscaMatricula == alunos[i].matriculaDoAluno){
                        nomeMedias = alunos[i].nome;
                    }
                }

                cout << "\nNome do aluno...................." << nomeMedias;
                cout << "\nMedia das medias do aluno.........." << mediaMedias << endl;
            break;

            case 4:
                cout << "\nDigite o nome da disciplina que deseja encontrar: ";
                getchar();
                getline(cin, disciplinaBusca);

                cout <<"\n\nAlunos Cadastrados nessa Disciplina";
                cout << "\n-----------------------------------------------\n";
                for(int i=0; i < 12;i++){
                    if(disciplinaBusca == disciplinas[i].disciplina){
                        for(int j=0; j < 3;j++){
                            if(alunos[i].matriculaDoAluno == disciplinas[j].matriculaDoAluno){
                                cout << "\nNome......................." << alunos[j].nome;
                            }
                        }
                    }
                }
                cout << "\n-----------------------------------------------\n";
            break;

            case 5:
                cout << "\nFIM DE PROGRAMA";
            break;
        default:
            cout << "\nOpcao invalida";
        }
    }while(op !=5);
}