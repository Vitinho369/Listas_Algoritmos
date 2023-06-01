#include<iostream>
#include<string>
using namespace std;

int main(){
    string A,B,C;

    cout << "\nDigite a frase A: ";
    getline(cin, A);

    cout << "\nDigite a frase B: ";
    getline(cin, B);

    C = A + " " + B;

    cout << endl << C;
}