#include<iostream>
using namespace std;

int main(){
    int num, cont=1, divisor = 10;

    cout << "\nDigite um numero: ";
    cin >> num;

    for(int i = 1; i < 5; i++){
        if((num/divisor)%10 != 0)cont++;
        divisor *= 10;
    }
    
    cout << "\nCont numero: " << cont;

    cout << "\n\nFim de programa\n";
    system("pause");
}