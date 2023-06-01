#include<iostream>
using namespace std;

int main(){
    const int linha=10, coluna=10;
    int M[linha][coluna],i,j, elementoDiagonal, aux, linhaDiagonal, colunaDiagonal;

    for(i=0; i < linha; i++){
        for(j=0; j < coluna; j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
        }
    }
    cout << "\nMatriz original: \n";
    for(i=0; i < linha; i++){
        for(j=0; j < coluna; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

     for(i=0; i < linha; i++){
        for(j=0; j < coluna; j++){
            if(i==j && i < linha/2){
                elementoDiagonal = M[i][j];
                linhaDiagonal = i;
                colunaDiagonal = j;
            }else if(i+j == coluna-1 && i < linha/2){
                aux = M[i][j];
                M[i][j] = elementoDiagonal;
                M[linhaDiagonal][colunaDiagonal] = aux;
            }else if(i==j && i > linha/2){
                aux = M[i][j];
                M[i][j] = elementoDiagonal;
                M[linhaDiagonal][colunaDiagonal] = aux;
            }else if(i+j == coluna-1 && i > linha/2){
                elementoDiagonal = M[i][j];
                linhaDiagonal = i;
                colunaDiagonal = j;
            }
        }
    }

    cout << "\nMatriz com diagonais trocadas: \n";
    for(i=0; i < linha; i++){
        for(j=0; j < coluna; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

      for(i=0; i < linha; i++){
            aux = M[5][i];
            M[4][i] = M[i][9];
            M[i][9] = aux;
    }

    cout << "\nMatriz com linha 5 e coluna 10 trocadas: \n";
    for(i=0; i < linha; i++){
        for(j=0; j < coluna; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

}