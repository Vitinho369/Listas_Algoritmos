#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    char ordem;

    cout << "Digite 3 numeros: ";
    cin >> num1 >> num2 >> num3;
    cout << "Voce quer ver eles na ordem crescente (c) ou descrecente (d)?";
    cin >> ordem;

    switch (ordem){
    case 'd':
        if(num1 > num2 && num1 > 3){
            cout << num1 << ", ";
            if(num2 > num3) cout << num2 << ", " << num3 << endl;
            else cout << num3 << ", " << num2 << endl;
        }else if(num2 > num1 && num2 > num3){
            cout << num2 << ", ";
            if(num1 > num3) cout << num1 << ", " << num3 << endl; 
            else cout << num3 << ", " << num1 << endl;
        }else if(num3 > num1 && num3 > num2){
            cout << num3 << ", ";
            if(num1 > num2) cout << num1 << ", " << num2 << endl;
            else cout << num2 << ", " << num1 << endl;
        }
        break;
    
    case 'c':
        if(num1 < num2 && num1 < num3){
            cout << num1 << ", ";
            if(num2 < num3) cout << num2 << ", " << num3 << endl;
            else cout << num3 << ", " << num2 << endl;
        }else if(num2 < num1 && num2 < num3){
            cout << num2 << ", ";
            if(num1 < num3) cout << num1 << ", " << num3 << endl;
            else cout << num3 << ", " << num1 << endl;
        }else if(num3 < num1 && num3 < num2){
            cout << num3 << ", ";
            if(num1 < num2) cout << num1 << ", " << num2 << endl;
            else cout << num2 << ", " << num1 << endl;
        }
        break;
    
    default: cout << "\nValor invalido";
    }
    

    cout << "\nFim de programa";
    system("pause");
}