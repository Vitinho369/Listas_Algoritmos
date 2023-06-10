#include <iostream>
#include <string>
using namespace std;

struct Taluno{
    string nome;
    int matricula;
    Tdisciplina disciplina [4];

};
 struct Tdisciplina{
        int  matricula;
        string disciplina;
        float nota1,nota2,nota3,media;
    };

int main (){
    int i,qtd,auxqtd,auxmatricula,j,escolha;
    Taluno aluno[3];
    Tdisciplina disciplina[12];
    bool achou=false;
    float maior,soma=0,auxsoma[10],auxmedia[10],media2,media3;
    string auxdis,auxaluno;
    qtd=3;
    for(i=0;i<qtd;i++){
        getchar();
        cout << "Digite o seu nome "<<endl;
            getline(cin,aluno[i].nome);
            getchar();
        cout << "Digite o seu numero de matricula "<<endl;
            cin >> aluno[i].matricula;
    }
    
    do{
        cout << "Quantas materias que voce deseja cadastrar "<<endl;
        cin >> auxqtd;
    }while(auxqtd<0 || auxqtd>4);
    j=0;
    do{
        cout << "Qual e o numero da matricula do aluno que deseja depositar essas notas"<<endl;
            cin >> auxmatricula;
        for(i=0;i<auxqtd;i++){
            if(auxmatricula==aluno[i].matricula){
            getchar();
            achou=true;
                cout  << "Digite a disciplina que pretende cadastrar as notas "<<endl;
                getline(cin,disciplina[i].disciplina);
                //getchar();
                cout << "Digite a sua primeira nota "<<endl;
                //getchar();
                cin >> disciplina[i].nota1;
                cout << "Digite a sua segunda nota "<<endl;
                //getchar();
                cin >> disciplina[i].nota2;
                cout << "Digite a sua terceira nota "<<endl;
                //getchar();
                cin >> disciplina[i].nota3;
                //getchar();
                cout << "I";
                disciplina[i].matricula=aluno[i].matricula;
                disciplina[i].media=(disciplina[i].nota1)+(disciplina[i].nota2)+(disciplina[i].nota3)/3;
                maior=disciplina[i].media;
                if(disciplina[i].media>maior){
                    maior=disciplina[i].media;
                    auxdis=disciplina[i].disciplina;
                    auxaluno=aluno[i].nome;

                }
            }
        }
        if(!achou){
            cout << "O numero de matricula digitado nao foi encontrado "<<endl;
            j--;
        }else{
            j++;
        }
        
    }while(j<12);
    do{
        achou=false;
        cout << "-----------Menu"<<endl;
        cout << "1- Exibir os dados de um aluno"<<endl;
        cout << "2- Exibir Maior média "<<endl;
        cout << "3- Exibir a media da media dos alunos"<<endl;
        cout << "4- Exibir os Alunos de uma disciplina"<<endl;
        cout << "5- Sair do sistema "<<endl;
        cin >> escolha;
        switch(escolha){
            case 1:
            cout << "Digite o numero de matricula do aluno que voce deseja ver os dados "<<endl;
            cin >> auxmatricula;
            for(i=0;i<qtd;i++){
                if(auxmatricula==aluno[i].matricula){
                achou=true;
                cout << aluno[i].nome<<endl;
                cout << aluno[i].matricula<<endl;
            }
        }
        if(!achou){
            cout << "O numero de matricula digitado ainda não foi cadastrado"<<endl;
        }
        else{
            for(i=0;i<auxqtd;i++){
                if(auxmatricula==aluno[i].matricula){
                    cout <<disciplina[i].disciplina;
                    cout << disciplina[i].nota1<<endl;
                    cout << disciplina[i].nota2<<endl;
                    cout << disciplina[i].nota3<<endl;
                    cout << disciplina[i].media<<endl;
                }
            }
        }
        break;
        case 2:
        cout << "O nome do aluno com a maior media é: "<<auxaluno<<endl;
        cout << "A disciplina foi a de: "<<auxdis;
        break;
        case 3:
        for(i=0;i<10;i++){
            auxsoma[i]=0;
        }
        soma=0;
        for(i=0;i<qtd;i++){
            for(j=0;j<auxqtd;j++){
                soma+=disciplina[j].media;
                auxsoma[i]=soma;
                
            }
            auxmedia[i]=auxsoma[i]/auxqtd;
        }

        for(i=0;i<qtd;i++){
            cout << "O aluno "<<aluno[i].nome<<"  Teve a media da media de "<<auxmedia[i];

        }
        break;
        case 4:
        achou=false;
        cout << "Qual disciplina voce deseja ver quantos alunos estao cadastrados"<<endl;
            getline(cin,auxdis);
            getchar();
        for(i=0;i<qtd;i++){
            for(j=0;j<auxqtd;j++){
                if(auxdis==disciplina[j].disciplina){
                    achou=true;
                    if(aluno[i].matricula==disciplina[j].matricula){
                        cout << aluno[i].nome<<endl;
                        cout << aluno[i].matricula<<endl;
                    }

                }
            }
        }
        if(!achou){
            cout << "A materia digitada não existe"<<endl;
        }
        break;
        case 5: cout << "Fim do progama"<<endl;
        break;
        default: cout <<  "Opcao Invalida "<<endl;

        }
    }while(escolha!=5);
    
    


}