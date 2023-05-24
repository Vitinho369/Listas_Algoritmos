#include<iostream>
using namespace std;

int main(){

    int num;

    cout << "Digite um numero:";
    cin >> num;

    if(num%2 == 0){
        cout << "\nNumero par";
        if(num%10 == 0) cout << " e multiplo de 10";
        else cout << " e nao eh multiplo de 10";
    }else{
        cout << "\nNumero impar";
        if(num%5 == 0) cout << " e divisivel por 5";
        else cout << " e nao divisivel por 5";
    }
    
    cout << "\nFim de programa";
    system("pause");
}