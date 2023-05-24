#include<iostream>
using namespace std;

int main(){
    int cont=0, identidade, numHoras, qtdDependentes;
    float salarioBruto, salarioLiquido;
    for(cont = 0; cont < 10; cont++){
        cout << "\nDigite sua identidade: ";
        cin >> identidade;
        cout << "\nDigite a quantidade de horas que voce trabalha: ";
        cin >> numHoras;
        cout << "\nDigite a quantidade de dependentes que voce possui: ";
        cin >> qtdDependentes;
        salarioBruto = (numHoras*12) + (qtdDependentes*40);
        salarioLiquido = salarioBruto - (salarioBruto*0.135);

        cout << "\n---------------------------------------------------------------------------------\n";
        cout << "Salario bruto do funcionario: " << salarioBruto << endl;
        cout << "Salario liquido do funcionario: " << salarioLiquido << endl;
        if(qtdDependentes > 3) cout << "Funcionario com a identidade " << identidade << " possui mais de 3 dependetes\n";
        cout << "\n---------------------------------------------------------------------------------\n";
    }
}