#include <iostream>
using namespace std;

struct aluno {
  int matricula;
  float media;
  aluno *proximo;
};

int main() {
  int resposta;
  bool primeiraVez = true;
  aluno *p, *inicio, *antigoUltimo, *aux;
  cout << "\n\tCadastrando os alunos...";
  do {
    p = (struct aluno *)malloc(sizeof(struct aluno));
    cout << "\n\tDigite a matricula: ";
    cin >> p->matricula;
    cout << "\n\tDigite a media: ";
    cin >> p->media;

    if (primeiraVez) { // este é o primeiro registro da lista
      inicio = p;
      p->proximo = NULL; // aponta para o fim
      primeiraVez = false;
    } else {
      p->proximo = NULL;
      // laço procurando o antigo último
      antigoUltimo = inicio;
      while (antigoUltimo->proximo != NULL) {
        antigoUltimo = antigoUltimo->proximo;
      }
      antigoUltimo->proximo = p;
    }

    cout << "\n\tDeseja continuar (1-sim/2-nao)? ";
    cin >> resposta;
  } while (resposta == 1);

  cout << "\n\tEscrevendo os alunos cadastrados: ";
  aux = inicio;
  do {
    cout << "\n\tMatricula: " << aux->matricula;
    cout << "\n\tMedia: " << aux->media;
    // andar
    aux = aux->proximo;
  } while (aux != NULL);

  bool continuar, encontrarMatricula = false;
  int op, matriculaBusca,cont = 0;
  aluno *adicionar, *percorre, *anterior;
  do {
    cout << "\n1-Adicionar Elemento";
    cout << "\n2-Remover Elemento";
    cout << "\n3-Mostrar lista";
    cout << "\nDigite a opcao: ";
    cin >> op;

    switch (op) {
    case 1:
      p = (struct aluno *)malloc(sizeof(struct aluno));

      cout << "\nDigite a matricula do aluno: ";
      cin >> p->matricula;

      cout << "\nDigite a media do aluno: ";
      cin >> p->media;
      p->proximo = NULL;

      adicionar = inicio;
      while(adicionar->proximo != NULL){
        adicionar = adicionar->proximo;
      } 

      adicionar->proximo = p;

      break;

    case 2:
      cout << "\nDigite a matricula do aluno que deseja remover: ";
      cin >> matriculaBusca;
      percorre = inicio;
      encontrarMatricula = false;
      do {
        if(percorre->matricula == matriculaBusca){
          encontrarMatricula = true;
        }

        if(!encontrarMatricula)
          anterior = percorre;

        percorre = percorre->proximo;
          
        if(inicio->matricula == matriculaBusca){
            inicio = percorre;
            encontrarMatricula = false;
        }

        if(encontrarMatricula){
            anterior->proximo = percorre;
            encontrarMatricula = false;
        } 

      }while(percorre != NULL);
      
      break;

    case 3:
      aux = inicio;
      do {
        cout << "\n\tMatricula: " << aux->matricula;
        cout << "\n\tMedia: " << aux->media;
        // andar
        aux = aux->proximo;
      } while (aux != NULL);

      break;

    default:
      cout << "\nOpcao invalida";
    }
    cout << "\nDeseja continuar (1-sim/0-nao)?";
    cin >> continuar;
  } while (continuar);

  cout << "\n";
  system("PAUSE");
}
