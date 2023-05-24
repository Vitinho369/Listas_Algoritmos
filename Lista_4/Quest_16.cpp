#include<iostream>
using namespace std;

int main(){
    float S[100], valor, reajuste;
    int cont=0,i;

    do{ 
        cout << "\nDigite o valor do salario do funcionario " << cont+1 << ": ";
        cin >> valor;

        if(valor != -1) S[cont] = valor;
        cont++;
    }while(cont < 100 && valor !=-1);

    float R[cont-1];
    cout << "\nDigite o valor de reajuste em % : ";
    cin >> reajuste;

    for(i=0; i < (cont-1);i++){
        R[i] = S[i] + (S[i] * (reajuste/100));
    }

    cout << "\nSalarios: ";

    for(i=0; i < (cont-1);i++){
            cout << S[i] << " ";
    }

    cout << "\nSalarios reajustados: ";

    for(i=0; i < (cont-1);i++){
        cout << R[i] << " ";
    }
}