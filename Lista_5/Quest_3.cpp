#include<iostream>
using namespace  std;

int main(){
    int M[5][5], i, j, somaLinha4=0, somaColuna2=0, somaDiagonalP=0, somaDiagonalS=0, somaElementos=0;

     for(i=0; i < 5; i++){
        for(j=0; j < 5; j++){
            cout << "M[" << i << "][" << j << "]: ";
            cin >> M[i][j];

            if(i==4) somaLinha4 += M[i][j];
            if(j==2) somaColuna2 += M[i][j];
            if(i==j) somaDiagonalP +=  M[i][j];
            if(i+j == 4) somaDiagonalS += M[i][j];
              
            somaElementos += M[i][j];
        }
    }

    
    cout << "\nMatriz: \n";
    for(i=0; i < 5; i++){
        for(j=0; j < 5; j++){
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }
       
    cout << "\nSoma da linha 4 de M: " << somaLinha4;
    cout << "\nSoma da coluna 2 de M: " << somaColuna2;
    cout << "\nSoma da diagonal principal de M: " << somaDiagonalP;
    cout << "\nSoma da diagonal secuncaria de M: " << somaDiagonalS;
    cout << "\nSoma de todos elementos de M: " << somaElementos;
}