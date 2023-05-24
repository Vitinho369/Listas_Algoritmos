#include<iostream>
using namespace std;

int main(){
    int idade;

    cout << "Digite sua idade:";
    cin >> idade;

    if(idade >= 18) cout << "\nParabens! Voce pode tirar habilitacao!";
    else cout << "\nDesculpe, voce nao pode tirar carteira, faltam " << 18 - idade << " anos para voce tirar sua carteira";
    cout << "\nFim de programa";
    system("pause");
}