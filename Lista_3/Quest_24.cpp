#include<iostream>
using namespace std;

int main(){
    int num, fatorial=1;

    cout << "\nDigite um numero: ";
    cin >> num;

    cout << "\nFatorial de " << num << " eh " << num << "! = ";
    for(int i=num; i > 0; i--){
        if(i > 1) cout << i << " X ";
        else cout << i << " = ";
        fatorial *= i;
    }
    cout << fatorial << endl;

    cout << "\n\nFim de Programa\n";
    system("pause");
}