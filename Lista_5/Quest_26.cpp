/*Elabore um algoritmo que leia uma string e a escreva sem as suas vogais*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string texto, textoSemVogais;

    cout << "\nDigite um texto: ";
    getline(cin, texto);

    for(int i=0; i < texto.length(); i++){
        if(texto[i] != 'A' && texto[i] != 'E' && texto[i] != 'I' && texto[i] != 'O' && texto[i] != 'U' &&
            texto[i] != 'a' && texto[i] != 'e' && texto[i] != 'i' && texto[i] != 'o' && texto[i] != 'u'){
            textoSemVogais += texto[i];
        }
    }

    cout <<"\nFrase sem vogais: " << textoSemVogais;
}