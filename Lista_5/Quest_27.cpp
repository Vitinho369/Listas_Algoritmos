/*Elabore um algoritmo que leia uma cadeia de caracteres (máximo 40 caracteres) 
inverta-a armazenando em  outra variável e em seguida mostre a variável com a 
cadeia invertida. Por exemplo, ao receber a string "eaj-ufrn", o algoritmo deverá 
mostrar como saída a string "nrfu-j*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string cadeiaCaracter;
    char aux;
    int i;

    do{ 
        cout << "\nDigite uma cadeira de caracteres: ";
        getline(cin, cadeiaCaracter);

        if(cadeiaCaracter.length() > 40){
            cout << "\nA cadeira de caracteres deve ser no maximo de 40 caracteres!";
        }

    }while(cadeiaCaracter.length() > 40);

    i = cadeiaCaracter.length()-1;

    for(int j=0; j < cadeiaCaracter.length()/2; j++){
        aux = cadeiaCaracter[j];
        cadeiaCaracter[j] = cadeiaCaracter[i];
        cadeiaCaracter[i] = aux;
        i--;
    }
    
    cout << "\nCadeira invertida: " << cadeiaCaracter;
}