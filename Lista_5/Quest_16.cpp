/*Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, 
verifique e escreva se a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”. 
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string frase;
    string palavra;
    string palavraCompara;
    bool palavraIgual = false;

    cout << "\nDigite uma frase: ";
    getline(cin, frase);

    cout << "\nDigite uma palavra: ";
    getline(cin, palavra);

    for(int i=0; i < frase.length(); i++){
        if(frase[i] != ' '){
            palavraCompara += frase[i];
        }else{
            palavraCompara = "";
        }
        if(palavraCompara == palavra){
            palavraIgual = true;
        }
    }

    if(palavraIgual){
        cout << "A palavra '" << palavra << "' esta contida na frase " << frase << endl;
    }else{
        cout << "A palavra '" << palavra << "' nao esta contida na frase " << frase << endl;
    }
}