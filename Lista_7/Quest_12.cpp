/*Escreva uma função hm que converta minutos em horas-e-minutos. A função 
recebe um inteiro mnts e os endereços de duas variáveis inteiras, h e m, e atribui valores 
a essas variáveis de modo que m seja menor que 60 e que 60*h + m seja igual a mnts. 
Elabore um algoritmo que teste a função hm. */

#include<iostream>
using namespace std;

void hm(int mnts, int *h, int *m);

int main(){
    int minutos, horas, min;
    cout << "\nDigite um valor em minutos: ";
    cin >> minutos;
    hm(minutos, &horas, &min);

    cout << "\n" << minutos << " convertido em horas e minutos: " << horas << ":" << min;
}

void hm(int mnts, int *h, int *m){
    int contMin=0;

    *m = mnts;

    while(*m >= 60){
        contMin++;
        *m -=60;
    }

    *h = contMin;
}