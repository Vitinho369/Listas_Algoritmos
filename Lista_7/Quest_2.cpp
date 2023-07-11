/*Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.*/

#include<iostream>
using namespace std;

bool parImpar(int num);

int main(){
    int num;
    cout << "\nDigite um numero: ";
    cin >> num;

    if(parImpar(num)){
        cout << "\nO numero eh par";
    }else{
        cout << "\nO numero eh impar";
    }
}

bool parImpar(int num){
    if(num%2==0){
        return true;
    }else{
        return false;
    }
}