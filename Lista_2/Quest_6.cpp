#include<iostream>
using namespace std;

int main(){
    int nivel;
    float horas, salario;
    cout << "Digite seu nivel de professor:";
    cin >> nivel;
    cout << "\nQuantas horas aulas voce deu?";
    cin >> horas;

    switch (nivel){
    case 1:
        salario = horas*12;
        break;
 
    case 2:
        salario = horas*17;
        break;
 
    case 3:
        salario = horas*25;
        break;
    }

    cout <<"\nSeu salario eh: " << salario;

    cout << "\nFim de Programa";
    system("pause");
}