/* Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da 
diagonal principal.*/
#include<iostream>
using namespace std;

int main(){
    const int l=5, c=5;
    int A[l][c], cont=0;
    float mediaAtimetica=0;

    for(int i=0; i < l;i++){
        for(int j=0; j < c; j++){
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    for(int i=0; i < l;i++){
        for(int j=0; j < c; j++){
            if(i==j){
                for(int a=i+1; a < l;a++){
                    mediaAtimetica += A[a][j];
                    cont++;
                }
            }
        }
    }

    cout << "\nMatriz: \n";
    for(int i=0; i < l;i++){
        for(int j=0; j < c; j++){
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    
    mediaAtimetica /= cont;

    cout << "\nMedia aritimetica dos elementos abaixo da diagonal principal: " << mediaAtimetica;
}