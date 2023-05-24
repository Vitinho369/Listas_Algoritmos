#include<iostream>
using namespace std;

int main(){
    float altura, pesoIdeal;
    char genero;

    cout << "Qual a sua altura?";
    cin >> altura;
    cout << "\nQual seu genero? ('m'-masculino ou 'f'-feminino)";
    cin >> genero;

    if(genero == 'm'){
        pesoIdeal = (72.7 * altura) - 58;
    }else{
            pesoIdeal = (62.1 * altura) - 44.7;
    }
    cout << "\nPeso Ideal: " << pesoIdeal;
    cout << "\nFim de programa";
    system("pause");
}