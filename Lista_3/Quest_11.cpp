#include<iostream>
using namespace std;

int main(){
    int A, B, divisao, contador=1, resto;
    bool flag=true;
    cout << "Digite o valor do numero A: ";
    cin >> A;
    cout << "\nDigite o valor do numero B: ";
    cin >> B;

    while(flag){
        divisao = B * contador;
        resto = A - divisao;
        contador++;
        if(divisao >= A) flag = false;
    }
        cout << resto;
    

    cout << "\n\nFim de programa\n";
    system("pause");
}