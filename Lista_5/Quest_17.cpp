/*Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre, para cada letra, 
o número de vezes que a mesma aparece na frase. 
Entrada: “uma frase qualquer” 
Saída: “u” aparece 3 vezes 
“m” aparece 1 vez 
“a” aparece 3 vezes 
“f” aparece 1 vez 
“r” aparece 2 vezes 
“s” aparece 1 vez 
“e” aparece 2 vezes 
“q” aparece 2 vezes 
“l” aparece 1 vez 
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string frase;

    cout << "\nDigite uma frase: ";
    getline(cin, frase);

    bool letras[frase.length()];
    int contRepete;

    for(int i=0; i < frase.length(); i++){
        letras[i] = 0;
    }

    
    for(int i=0; i < frase.length(); i++){
        contRepete = 0;
        for(int j=0; j < frase.length(); j++){
            if(frase[i] == frase[j] && !letras[j] && frase[i] != ' '){
                contRepete++;
                letras[j] = 1;
            }
        }

        if(contRepete != 0){
            cout << frase[i] << " aparece " << contRepete << " vezes\n";
        }
    }
}