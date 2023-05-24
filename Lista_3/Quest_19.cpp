#include<iostream>
using namespace std;

int main(){

    int num = 100, alg1, alg2,alg3;
    bool resp;

    do{

        for(int contador = 1; contador <= 20; contador++){
                alg1 = (num/100)%10;
                alg2 = (num/10)%10;
                alg3 = num%10;

                cout << num << " = "<< alg1*alg2*alg3 << "(" << alg1 << "*" << alg2 << "*" << alg3 << ")" << endl;
                num += 1;
        }

        if(num < 999){
            cout << "\nDeseja continuar a ver a sequencia? 1 - sim, 0 - nao\n";
            cin >> resp;
        }
    }while(resp && num < 999);

    cout << "\n\nFim de Programa\n";
    system("pause");
}