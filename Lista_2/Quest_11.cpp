#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Digite um numero de no maximo 5 algarismos: ";
    cin >> num;

    if(num > 0) cout << "Soma de todos os algarismos: " << num%10 + (num/10)%10 + (num/100)%10 + (num/1000)%10 + (num/10000)%10;
    else cout << "\nNumero invalido";

    cout << "\nFim de programa";
    system("pause");
}