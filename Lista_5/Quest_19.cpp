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