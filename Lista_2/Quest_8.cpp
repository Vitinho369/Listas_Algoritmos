#include<iostream>
using namespace std;

int main(){
    int num;
    char letra;

    cout << "Digite um numero:";
    cin >> num;
    cout << "\nDigite uma letra para ver os 10 antecessores ('a') ou 10 sucessores('s'): ";
    cin >> letra;

    if(letra=='a'){
        cout << "\n10 antecessores do numero " << num << ": " << endl;
        cout << num -1 << ",";
        cout << num -2 << ",";
        cout << num -3 << ",";
        cout << num -4 << ",";
        cout << num -5 << ",";
        cout << num -6 << ",";
        cout << num -7 << ",";
        cout << num -8 << ",";
        cout << num -9 << ",";
        cout << num -10 << endl;
    }else if(letra == 's'){
        cout << "\n10 sucessores do numero " << num << ": " << endl;
        cout << num +1 << ", ";
        cout << num +2 << ", ";
        cout << num +3 << ", ";
        cout << num +4 << ", ";
        cout << num +5 << ", ";
        cout << num +6 << ", ";
        cout << num +7 << ", ";
        cout << num +8 << ", ";
        cout << num +9 << ", ";
        cout << num +10 << endl;
    }

    cout << "\nFim de programa";
    system("pause");
}