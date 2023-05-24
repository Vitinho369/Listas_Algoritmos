#include<iostream>
using namespace std;

int main(){

    int n, contPrimo=0, numPrimo;

    cout << "\nDigite o valor de n: ";
    cin >> n;

    for(int i=1; i <= n; i ++){

        for(int j = 1; j <=(n+11); j++){
            if((11+i)%j==0){
                contPrimo++;
            }
        }
        
        if(contPrimo == 2) numPrimo = 11 + i; 
        contPrimo = 0;
    }

    cout << "\n\nN-esimo numero primo maior que 11 eh: " << numPrimo;

    cout << "\n\nFim de Programa\n";
    system("pause");
}