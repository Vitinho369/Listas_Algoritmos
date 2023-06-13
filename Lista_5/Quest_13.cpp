/*Elabore um algoritmo que leia os elementos inteiros positivos de uma matriz 3x3 de tal forma que os números 
pares sejam armazenados somente em linhas pares e os números ímpares sejam armazenados somente em 
linha ímpares. Quando não houver mais espaço para armazenar o número lido (par ou ímpar), o algoritmo 
deverá informar e continuar pedindo novos números até que a matriz esteja preenchida. Ao final escreva a 
matriz.
*/

#include<iostream>
using namespace std;

int main(){
    int M[3][3] = {-1,-1,-1,-1,-1,-1,-1,-1,-1}, elemento;
    int linhaParFim=0, linhaImparFim=0, linha, colunaPar=0, colunaImpar=0;
    bool fim = false;

        do{
            cout << "\nDigite um elemento da matriz: ";
            cin >> elemento;

            if(elemento%2 != 0){

                if(linhaImparFim < 3){
                    linha = 1;
                    if(M[linha][colunaImpar] == -1){
                        M[linha][colunaImpar] = elemento;
                        linhaImparFim++;
                        colunaImpar++;
                    }
                }else{
                    cout << "\nNao eh mais possivel preencher a matriz com numeros impares, digite um numero par";
                }
            }else{
                if(linhaParFim  < 3){

                    if(!fim)
                        linha = 0;
                    else
                        linha = 2;
                }else{
                    cout << "\nNao eh mais possivel preencher a matriz com numeros pares, digite um numero impar";
                }

                if(M[linha][colunaPar] == -1){
                    M[linha][colunaPar] = elemento;
                    linhaParFim++;
                    colunaPar++;
                }

                if(linhaParFim == 3 && !fim){
                    fim = true;
                    linhaParFim = 0;
                    colunaPar =0;
                }
            }

        }while(linhaImparFim+linhaParFim != 6 || !fim); 

    
    cout << "\nMatriz: \n";
    for(int i=0; i < 3;i++){
        for(int j=0; j < 3;j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
}