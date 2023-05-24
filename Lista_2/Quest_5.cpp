#include<iostream>
using namespace std;

int main(){
    float salario, salarioNovo, diferenca;
    int codigoCargo;

    cout << "Ola funcionario qual o seu salario?";
    cin >> salario;
    cout << "\nQual o codigo do seu cargo?";
    cin >> codigoCargo;

    switch (codigoCargo){
    case 101:
        salarioNovo = salario + (salario*0.1);
        break;

    case 102:
        salarioNovo = salario + (salario*0.2);
        break;
    
    case 103:
        salarioNovo = salario + (salario*0.3);
        break;

    default:
        salarioNovo = salario + (salario*0.4);
        break;
    }

    diferenca = salarioNovo - salario;
    cout << "\nSalario Antigo: " << salario;
    cout << "\nNovo Salario: " << salarioNovo;
    cout << "\nDiferenca: " << diferenca;

    cout << "\nFim de programa";
    system("pause");
}