#include<iostream>
using namespace std;

int main(){
    const int tamLinha = 5, tamColuna = 5, tamVetor = tamLinha*tamColuna;
    int i,j,c,v,iRepete, jRepete,contRepete=0, numRepetidos[tamVetor];
    bool existe=false, procuraIgual = false;
    int M[tamLinha][tamColuna],k=0,cont=-1;

    //lendo valores e jogando dentro do vetor
    for(i=0; i < tamLinha; i++){
        for(j=0; j < tamColuna; j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];
            numRepetidos[k++] = M[i][j];
        }
    }

    //normalizando o vetor para ficar sem elementos repetidos
    for(c=0; c < k;c++){
        for(i=c; i < k;i++){
            if(numRepetidos[c] == numRepetidos[i] && i != c){
                v = i;
                existe = false;
                do{
                    if(numRepetidos[i] != numRepetidos[v] && v != j){
                        numRepetidos[i] = numRepetidos[v];
                        existe = true;
                    }
                    v++;
                }while(!existe && v < k);
            }
        }
    }

    //Procurando saber até qual indíce do vetor não vou encontrar elementos repetidos
    c = 0;
    do{
        if(numRepetidos[c] == numRepetidos[c+1]){
            cont = c;
            procuraIgual = true;
        }
        c++;
    }while(!procuraIgual && c <(k -1));
   
    for(c=0; c< cont-1;c++){
        if(numRepetidos[c] == numRepetidos[cont]){
            cont--;
        }
    }

    cout << endl;
    for(i=0; i < tamLinha; i++){
        for(j=0; j < tamColuna; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    if(cont == -1){ // caso não haja nenhuma repeticao na matriz
        cout << "\nNao ha nenhuma valor igual na matriz";
    }else{ // caso ocorra repeticao na matriz

        for(c=0; c <= cont; c++){ // contando quantas vezes um numero se repete na matriz a partir do vetor normalizado
            for(i=0; i < tamLinha; i++){
                for(j=0; j < tamColuna; j++){
                    if(numRepetidos[c] == M[i][j]){
                        contRepete++;
                    }
                }
            }
            if(contRepete > 1){
                cout <<  "\nO numero "<< numRepetidos[c] << " se repetiu " << (contRepete-1) << " vezes" << endl;
            }
                
            contRepete = 0;
        }
    }
}