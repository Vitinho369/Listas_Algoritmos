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