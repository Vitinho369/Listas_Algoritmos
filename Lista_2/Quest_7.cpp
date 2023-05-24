#include<iostream>
using namespace std;

int main(){

    int codSanduiche, qtdSanduiche, codBebida, qtdBebida;
    float precoTot;
    cout <<"\n---------------------------------------";
    cout << "\nSANDUICHE";
    cout <<"\n---------------------------------------";
    cout << "\nCodigo\tDescricao\tPreco Unitario";
    cout << "\n100\tCachorro Quente\t1,10";
    cout << "\n101\tBauru simples\t1,30";
    cout << "\n102\tBauru com ovo \t1,50";
    cout << "\n103\tHamburger\t1,10"; 
    cout << "\n104\tCheesburger\t1,30"; 

    cout << "\nDigite o codigo do sanduiche:";
    cin >> codSanduiche;
    cout << "\nQuantos sandwiches voce quer?";
    cin >> qtdSanduiche;

    switch (codSanduiche){
    case 100:
        precoTot = qtdSanduiche*1.1;
        break;
   
    case 101:
        precoTot = qtdSanduiche*1.3;
        break;
   
    case 102:
        precoTot = qtdSanduiche*1.5;
        break;
   
    case 103:
        precoTot = qtdSanduiche*1.1;
        break;
   
    case 104:
        precoTot = qtdSanduiche*1.3;
        break;
    }
    
    cout <<"\n---------------------------------------"; 
    cout << "\nBEBIDA";
    cout <<"\n---------------------------------------";
    cout << "\nCodigo\tDescricao\tPreco Unitario";
    cout << "\n105\tRefrigerante\t1,00"; 
    cout << "\n106\tSuco\t\t2,00"; 
    cout << "\n107\tNescau\t\t1,50"; 
    cout <<"\n---------------------------------------";

     cout << "\nDigite o codigo do sanduiche:";
    cin >> codBebida;
    cout << "\nQuantos sandwiches voce quer?";
    cin >> qtdBebida;

    switch (codBebida){
    case 105:
        precoTot += qtdBebida;
        break;
   
    case 106:
        precoTot += qtdBebida*2;
        break;
   
    case 107:
        precoTot += qtdBebida*1.5;
        break;
    }
    cout << "\nValor a ser pago pelo lanche: " << precoTot << " reais";

    cout << "\nFim de programa";
    system("pause");
}