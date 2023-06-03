/*. Elabore um algoritmo que leia uma frase e escreva-a de duas formas: 
a frase completa e a frase contendo só  as palavras em “posições ímpares” 
(1ª palavra, 3ª palavra, 5ª palavra, ...). 

Entrada: eu gosto de roupa azul
Saída: eu de azul*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string texto1, texto2="";
    int cont=1;

    cout << "\nDigite um texto: ";
    getline(cin, texto1);

    for(int i=0; i < texto1.length(); i++){
        if(texto1[i] != ' '){
            if(cont%2 != 0)
                texto2 += texto1[i];
        }else{
            texto2 += " ";
            cont++;
        }

    }

    cout << texto2;
}