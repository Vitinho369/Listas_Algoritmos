#include<iostream>
using namespace std;

int main(){
    int X[10],i=0, valor, indice1, indice2, maior, menor;
    bool encerrar=false;

    do{

        cout << "\nDigite um valor: ";
        cin >> valor;

        if(valor > 0){
            X[i] = valor;
        }else{
            encerrar = true;
        }
        i++;
    }while(i < 10 && !encerrar);

    cout << "\nDigite dois valores de indices";
    cin >> indice1 >> indice2;

    cout << "\nIntervalo do vetor: ";
    menor = X[indice1];
    maior = X[indice1];
    for(i=indice1; i < indice2; i++){
        cout << X[i] << " ";
        if(menor > X[i]){
            menor = X[i];
        }

        if(maior < X[i]){
            maior = X[i];
        }
    }

    cout << "\nMaior elemento do intervalo: " << maior;
    cout << "\nMenor elemento do intervalo: " << menor;
}