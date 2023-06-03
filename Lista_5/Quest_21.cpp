/*Elabore um algoritmo que declare duas strings e leia a primeira string. 
Em seguida, copie o texto da primeira  string para a segunda em letras 
maiúsculas se a primeira letra da primeira string for minúscula ou em letras 
minúsculas se a primeira letra da primeira string for maiúscula. Imprima
no final o conteúdo das duas strings. 
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string texto1, texto2;
    char letraMaiuscula, comparaMaiuscula, comparaMinuscula;
    bool maiuscula = false;

    cout << "\nDigite a primeira string: ";
    getline(cin, texto1);  
    
    int j=65, c;
    do{
        letraMaiuscula = (char) j;
        if(texto1[0] == letraMaiuscula){
            maiuscula = true;
        }
        j++;
    }while(j <= 90 && !maiuscula);

    if(maiuscula){
        for(int i=0; i < texto1.length();i++){ 
            c = 65;
            for(j=65; j <= 90; j++){
                comparaMaiuscula = (char) c;
                comparaMinuscula = (char) (c+32);

                if(texto1[i] == comparaMaiuscula || texto1[i] == comparaMinuscula){
                    texto2 += (char) j;
                }
                c++;
            }
          
            if(texto1[i] == ' '){
                    texto2 += ' ';
            }
        }
    }else{
       
        for(int i=0; i < texto1.length();i++){
            c = 97;
            for(j=97; j <= 122; j++){
                comparaMaiuscula = (char) c;
                comparaMinuscula = (char) (c-32);
                if(texto1[i] == comparaMaiuscula || texto1[i] == comparaMinuscula){
                    texto2 += (char) j;
                }
                c++;
            }

            if(texto1[i] == ' '){
                    texto2 += ' ';
            }
        }
    }
    
    cout << "\nTexto 1: " << texto1;
    cout << "\nTexto 2: " << texto2;
}