/*. Elabore um algoritmo que leia duas strings A e B e junte-as em uma única string C. 
Entradas: “frase 1” e “outra frase qualquer” 
Saída: “frase 1 outra frase qualquer” */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string A,B,C;

    cout << "\nDigite a frase A: ";
    getline(cin, A);

    cout << "\nDigite a frase B: ";
    getline(cin, B);

    C = A + " " + B;

    cout << endl << C;
}