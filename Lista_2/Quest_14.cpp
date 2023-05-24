#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Digite 3 numeros inteiros:";
    cin >> num1 >> num2 >> num3;
    
    if(num1 == num2 && num1 == num3) cout << "\nTodos os numeros sao iguais";
    else if(num1 != num2 && num1 != num3 && num2 != num3) cout << "\nTodos os numeros sao diferentes";
    else if((num1 == num2 && num1 != num3) || (num1 == num3 && num1 != num2) || (num2 == num3 && num2 != num1)) cout << "\nApenas dois numeros sao iguais";

    cout << "\nFim de programa";
    system("pause");
}