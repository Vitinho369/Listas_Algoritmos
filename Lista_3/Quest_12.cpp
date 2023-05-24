#include<iostream>
using namespace std;

int main(){
    int num, num1, num2, result;
    char op;

    do{
    cout << "\nDigite um numero de 4 algarismos: ";
    cin >> num;

    num1 = (num/100)%100;
    num2 = num%100;
    result = num1 + num2;

    if((result*result) == num) cout << "\nPositivo";
    else cout << "Negativo";

    cout << "\nDeseja continuar? s - sim, n - nao: ";
    cin >> op;
    }while(op != 'n');


    cout << "\n\nFim de programa\n";
    system("pause");
}