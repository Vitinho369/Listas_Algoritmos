#include<iostream>
using namespace std;

int main(){
    int numeroTotal=0, multiplicador=1,divisor=1, contador=1;
    long long int num;
    char resp;
        do{
            cout << "\nDigite um numero: ";
            cin >> num;
            numeroTotal *= multiplicador;
            numeroTotal += num;
            multiplicador = 10;
            cout << "\nDeseja continuar? s - sim, n - nao: ";
            cin >> resp;
        }while(resp != 'n');

    cout << numeroTotal;
 
    cout << "\n\nFim de programa\n";
    system("pause");
}