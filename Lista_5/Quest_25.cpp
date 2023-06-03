/*Elabore um algoritmo que leia uma string, verifique e informe se 
trata-se ou não de um palíndromo. Lembrando que um palíndromo é uma palavra que 
tenha a propriedade de poder ser lida tanto da direita para a esquerda quanto da 
esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string texto;

    cout << "\nDigite um texto: ";
    getline(cin, texto);

    int j = texto.length()-1;
    bool palindromo=true;
   
    for(int i=0; i < texto.length()/2; i++){
        if(texto[i] != texto[j] && texto[i] != ' ' && texto[j] != ' '){
            palindromo = false;
        }
        j--;
    }

    if(palindromo)
        cout << "\nA frase digitada eh um palindromo";
    else
        cout << "\nA frase digitada nao eh um palindromo";
}