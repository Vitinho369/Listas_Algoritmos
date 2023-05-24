#include<iostream>
using namespace std;

int main(){

    int idade;
    float valor, totalArrecadado=0, desconto=0;

    cout << "\nDigite o valor da entrada hoje: ";
    cin >> valor;

    do{
    cout << "\nDigite sua idade: ";
    cin >> idade;
        if(idade > 0){
            if(idade < 6){
                cout << "\nNao pagara nada";
                desconto += valor;
            }else if(idade >= 6 && idade <= 12){
                cout << "\nPagara " << valor*0.3;
                desconto += valor*0.7;
                totalArrecadado += valor *0.3; 
            }else if((idade >= 13 && idade <= 18) || idade > 60){
                cout << "\nPagara " << valor *0.5;
                desconto += valor*0.5;
                totalArrecadado += valor *0.5; 
            }else{
                cout << "\nPagara " << valor;
                totalArrecadado += valor;
            }
        }
    }while(idade > 0);

    cout << "\n\n-------------------------------------------\n";
    cout << "Valor total arrecadado: " << totalArrecadado << endl;
    cout << "Desconto total: " << desconto;
    cout << "\n-------------------------------------------\n";
    cout << "\n\nFim de Programa\n";
    system("pause");
}