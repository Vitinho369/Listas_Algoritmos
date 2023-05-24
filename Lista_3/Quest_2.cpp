#include<iostream>
using namespace std;

int main(){
    char continuar;
    int carteira, numMultas;
    float valorMulta, totMulta=0, maiorMulta=-1, somMulta=0, carteiraMaior;
    do{
        cout << "Digite o numero da sua carteira de motorista: ";
        cin >> carteira;
        cout << "\nDigite o numero de multas que voce levou: ";
        cin >> numMultas;

        for(int cont=1; cont <= numMultas; cont++){
            cout << "Digite o valor da multa: "  << cont << ": ";
            cin >> valorMulta;
            totMulta += valorMulta;
        }
       
        somMulta += totMulta;
        if(maiorMulta < numMultas){
                maiorMulta = numMultas;
                carteiraMaior = carteira;
        }

        cout << "\nNumero da carteira: " << carteira;
        cout << "\nNumero de multas: " << numMultas;
        cout << "\nValor total a ser pago: " << totMulta;

        totMulta = 0;

        cout << "\nDeseja continuar? (s-sim), (n-nao): ";
        cin >> continuar;
    }while(continuar != 'n');
    cout << "\n\n-------------------------------------------------";
    cout << "\nValor total arrecadado pelo DETRAN: " << somMulta;
    cout << "\nCarteira com a maior multa: " << carteiraMaior;
    cout << "\n-------------------------------------------------";

    cout << "\nFim de programa";
    system("pause");
}