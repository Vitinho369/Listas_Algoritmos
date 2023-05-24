#include<iostream>
using namespace std;

int main(){
    int num1, num2,multiplicacao;

    do{
        cout << "\nDigite o primeiro numero: ";
        cin >> num1;
        cout << "\nDigite o segundo numero: ";
        cin >> num2;
        multiplicacao = 0;
        
        if(num2 > 0 && num1 > 0){
            for(int cont=0; cont < num2; cont++) 
                multiplicacao += num1;
        }

        cout << num1 << " * " << num2 << " = " << multiplicacao << endl;
    }while(num1 > 0 && num2 > 0);

    cout << "\n\nFim de Programa\n";
    system("pause");
}