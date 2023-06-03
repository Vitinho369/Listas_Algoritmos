/*Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada. 
Entrada: “uma frase qualquer” 
Saída: “reuqlauq esarf amu”
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string frase;

    cout << "\nDigite uma frase: ";
    getline(cin, frase);

    cout << "\nFrase espelhada: ";
    for(int i=frase.length(); i >= 0; i--){
        cout << frase[i];
    }
}