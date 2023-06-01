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