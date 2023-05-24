#include<iostream>
using namespace std;

int main(){
    int segundos, horasE, minutosE, segundosE;

    cout << "Digite a duracao do evento em segundos:";
    cin >> segundos;
    horasE = segundos/3600;
    minutosE = (segundos%3600)/60;
    segundosE = (segundos%3600)%60;

    cout <<"\nHoras: " << horasE;
    cout << "\nMinutos: " << minutosE;
    cout << "\nSegundos: " << segundosE; 

    cout << "\nFim de programa";
    system("pause");
}