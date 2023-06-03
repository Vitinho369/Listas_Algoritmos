/*Faça um algoritmo que gere e escreva automaticamente a seguinte matriz: 
1 1 1 1 1 1 
1 2 2 2 2 1 
1 2 3 3 2 1 
1 2 3 3 2 1 
1 2 2 2 2 1 
1 1 1 1 1 1 
*/
#include<iostream>
using namespace std;

int main(){
    const int linha=6, coluna=6;
    int M[linha][coluna], cont,i,j;

    for(i=0;i < linha;i++){
        for(j=0; j < coluna;j++){
          
            if(i==0 || i == linha-1 || j == 0 || j == coluna-1){
                cont = 1;
            }else if(j > 1 && j < coluna-2 && i > 1 && i < linha-2){
                    cont = 3;
                }else{
                    cont = 2;
            }
              M[i][j] = cont;
        }
    }

    for(i=0;i < linha;i++){
        for(j=0; j < coluna;j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
}