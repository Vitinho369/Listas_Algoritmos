/*O código de César é uma das mais simples e conhecidas técnicas de 
criptografia. É um tipo de substituição na qual cada letra do texto 
é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo
de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído 
por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Elabore um algoritmo que
utilize o Código de César (n posições, sendo n informado pelo usuário),
entre com uma string e escreva a string codificada.

Exemplo: para n=3, a string “a ligeira raposa marrom saltou sobre o cachorro 
cansado” seria codificada para “D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string frase, fraseCriptografada="";
    char letraCrip;
    cout << "\nDigite o numero n para criptografia:";
    cin >> n;
    getchar();
    cout << "\nDigite uma frase: ";
    getline(cin, frase);

    for(int j=0; j < frase.length(); j++){
        for(int i=97; i <= 122;i++){
            letraCrip = (char) i;
            if(frase[j] == letraCrip || frase[j] == letraCrip-32){
                letraCrip = (char)(letraCrip - (32-n));
                fraseCriptografada += letraCrip;
            } 
        }
        
        if(frase[j] == ' '){
            fraseCriptografada += " ";
        }
    }

    cout << "\nFrase criptografada com o codigo de Cezar: " << fraseCriptografada;
}