#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Digite o numero:"; 
    cin >> num;

    if(num%2==0){
        cout << "\nEh par";
        if(num > 100)
            cout << " e maior que 100";
        else
            cout << " e menor que 100";

    }else{
        cout << "\nEh impar";

        if(num > 0)
            cout << " e positivo";
        else
            cout << " e negativo";
    }

    cout << "\nFim de programa";
    system("pause");
}