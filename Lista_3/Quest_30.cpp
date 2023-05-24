#include<iostream>

using namespace std;

int main(){
    int num1, num2, num3, num4, num5, moda, contRepete = 0, repete, contRepeteAnt=-1, numAux, numMenor, mediana, numTeste;
    cout << "\nDigite o primeiro numero: ";
    cin >> num1;
    cout << "\nDigite o segundo numero: ";
    cin >> num2;
    cout << "\nDigite o terceiro numero: ";
    cin >> num3;
    cout << "\nDigite o quarto numero: ";
    cin >> num4;
    cout << "\nDigite o quinto numero: ";
    cin >> num5;

    for(int i=0; i < 5; i++){
        if(i == 0) repete = num1;
        else if(i == 1) repete = num2;
        else if(i == 2) repete = num3;
        else if(i == 3) repete = num4;
        else if(i == 4) repete = num5;

        if(repete == num1) contRepete++;
        if(repete == num2) contRepete++;
        if(repete == num3) contRepete++;
        if(repete == num4) contRepete++;
        if(repete == num5) contRepete++;

        if(contRepete > contRepeteAnt){
                contRepeteAnt = contRepete;
                moda = repete;
            } 
       contRepete = 0;
    }

     for(int i=0; i < 5; i++){
        if(i == 0) numMenor = num1;
        else if(i == 1) numMenor = num2;
        else if(i == 2) numMenor = num3;
        else if(i == 3) numMenor = num4;
        else if(i == 4) numMenor = num5;

        cout << num1 << " ";
        cout << num2 << " ";
        cout << num3 << " ";
        cout << num4 << " ";
        cout << num5 << " ";
        cout << endl;

        for(int j=0; j < 5; j++){
            if(j == 0) numTeste = num1;
            else if(j == 1) numTeste = num2;
            else if(j == 2) numTeste = num3;
            else if(j == 3) numTeste = num4;
            else if(j == 4) numTeste = num5;

            if(numMenor > numTeste){
                numAux = numMenor;
                numMenor = numTeste;
                numTeste = numAux;
            }

            if(j == 0) num1 = numTeste;
            else if(j == 1) num2 = numTeste;
            else if(j == 2) num3 = numTeste;
            else if(j == 3) num4 = numTeste;
            else if(j == 4) num5 = numTeste;
        }
        
        mediana = num3;
     }

    cout << "\nModa: " << moda;
    cout << "\nMediana: " << mediana;
    cout <<" \n\nFim de programa\n";
    system("pause");
}