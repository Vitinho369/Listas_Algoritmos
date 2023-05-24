#include<iostream>
using namespace std;

int main(){
    int n, divisores=0;
    cout << "Digite o valor de N: ";
    cin >> n;
    for(int cont=1; cont < n;cont++){
        
        if(n%cont==0)
            divisores += cont;
    }
    
    if(divisores == n) cout << "\nN eh um numero perfeito";
    else cout << "\nN nao eh um numero perfeito";
    cout << "\nFim de programa";
    system("pause");
}