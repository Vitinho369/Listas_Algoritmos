#include<iostream>
using namespace std;

int main(){
    int codigo, qtd, qtdTotal=0;
    float valorUnitario, subtotal=0, valorPago;
    char resp;

    do{
        cout << "\nDigite o codigo do produto: ";
        cin >> codigo;
        cout << "\nDigite o valor unitario do produto: ";
        cin >> valorUnitario;
        cout << "\nDigite a quantidade de produtos: ";
        cin >> qtd;

        qtdTotal += qtd;
        subtotal += valorUnitario*qtd;
        cout << "\nSubtotal: " << subtotal;
        cout << "\nDeseja continuar? (s - sim, n - nao)";
        cin >> resp;


    }while(resp !='n');

    cout << "\nQuantidade de produtos: " << qtdTotal;
    cout << "\nValor total: " << subtotal;
    cout << "\nDigite o valor pago: ";
    cin >> valorPago;

    if(subtotal > valorPago) cout << "\nValor insuficiente";
    else if(subtotal == valorPago) cout << "\nValor correto";
    else cout << "\nSeu troco eh de " << subtotal - valorPago << " reais";


    cout << "\n\nFim de programa\n";
    system("pause");
}