/*Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome, 
número de horas trabalhadas e o número de dependentes. Considerando que: 
- A empresa paga 12 reais por hora e 40 reais por dependentes; 
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR. 
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o 
usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a 
leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e 
qual o salário líquido de cada um dos funcionários que foram cadastrados.*/

#include<iostream>
#include<string>
using namespace std;

struct Funcionario{
    string nome;
    float numHoras;
    int numDependetes;
};

int main(){
    Funcionario funcionarios[200];
    int cont=0;
    char resp;
    float salario;

    do{
        cout << "\nDigite o nome do funcionario:";
        if(cont > 0)
            getchar();
        getline(cin, funcionarios[cont].nome);
        cout << "\nDigite o numero de horas trabalhadas pelo funcionario:";
        cin >> funcionarios[cont].numHoras;
        cout << "\nDigite o numero de dependentes desse funcionario:";
        cin >> funcionarios[cont].numDependetes;    
        cout << "\nDeseja cadastrar outro funcionario(S/N)?";
        cin >> resp;
        cont++;
    }while(cont < 200 && resp != 'N');

    cout << "\nRELATORIO DE FUNCIONARIOS:";
    cout <<"\n\n------------------------------------\n";
    for(int i=0; i < cont;i++){
        salario = (funcionarios[i].numDependetes*40) + (funcionarios[i].numHoras*12);
        cout << "\nNOME........................" << funcionarios[i].nome;
        cout << "\nNUMERO DE HORAS TRABALHADAS." << funcionarios[i].numHoras;
        cout << "\nNUMERO DE DEPENDENTES......." << funcionarios[i].numDependetes;
        cout << "\nSALARIO BRUTO..............." << salario;
        cout << "\nDESCONTO DO INSS............" << salario * 0.085 ;
        cout << "\nDESCONTO DO IR.............." << salario * 0.05 ;
        cout << "\nSALARIO LIQUIDO............." << salario - (salario * 0.135) << endl;
    }
    cout <<"\n------------------------------------\n";
}