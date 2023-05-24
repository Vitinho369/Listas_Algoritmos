#include<iostream>
using namespace std;

int main(){
    int op;
    float area, base, altura, lado, baseMaior, baseMenor, raio;
          
    do{
        cout << "\n1-Triangulo";
        cout << "\n2-Quadrado";
        cout << "\n3-Retangulo";
        cout << "\n4-Trapezio";
        cout << "\n5-Circulo";
        cout << "\n6-Sair";
        cout << "\nDigite uma opcao:";
        cin >> op;

        switch (op){
        case 1:
            cout << "\nDigite o valor da base do triangulo: ";
            cin >> base;
            cout << "\nDigite o valor da altura do trangulo: ";
            cin >> altura;
            area = (base*altura)/2;
            cout << "\nArea do triangulo = " << area;
            break;
        case 2:
            cout << "\nDigite o valor do lado do quadrado: ";
            cin >> lado;
            area = lado*lado;
            cout << "\nArea do quadrado = " << area;
            break;

        case 3:
            cout << "\nDigite o valor da base do retangulo: ";
            cin >> base;
            cout << "\nDigite o valor da altura do retangulo: ";
            cin >> altura;

            area = base*altura;
            cout << "\nArea do retangulo = " << area;
            break;

        case 4:
            cout << "\nDigite a maior base do trapezio: ";
            cin >> baseMaior;
            cout << "\nDigite a menor base do trapezio: ";
            cin >> baseMenor;
            cout << "\nDigite a altura do trapezio: ";
            cin >> altura;

            area = ((baseMaior + baseMenor)*altura)/2;

            cout << "\nArea do trapezio = " << area;

            break;
        case 5:
            cout << "\nDigite o raio do circulo: ";
            cin >> raio;

            area = 3.14* (raio*raio);
            cout << "\nArea do circulo = " << area;
            break;
     
        }

    }while(op !=6);
    cout << "\n\nFim de programa\n";
    system("pause");
}