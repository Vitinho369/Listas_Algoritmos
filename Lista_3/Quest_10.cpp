#include<iostream>
using namespace std;

int main(){

    int num1=0, num2=0, num3=0, num4=0;


    do{
        do{
            if(num1 < 0) cout << "\nDigite novamente: ";
            else cout << "\nDigite o primeiro valor: ";
            cin >> num1;

        }while(num1 < 0);

         do{
            if(num2 < 0) cout << "\nDigite novamente: ";
            else cout << "\nDigite o segundo valor: ";
            cin >> num2;
            
        }while(num2 < 0);

         do{
            if(num3< 0) cout << "\nDigite novamente: ";
            else cout << "\nDigite o terceiro valor: ";
            cin >> num3;
            
        }while(num3 < 0);

         do{
            if(num4 < 0) cout << "\nDigite novamente: ";
            else cout << "\nDigite o quarto valor: ";
            cin >> num4;
            
        }while(num4 < 0);

        if(num1 != 0 && num2 != 0 && num3 != 0 && num4 != 0){
            cout << "\nValor \tQuadrado \tCubo\n";
            cout << num1 << "\t" << num1*num1 << "\t\t" << num1*num1*num1 << endl;
            cout << num2 << "\t" << num2*num2 << "\t\t" << num2*num2*num2 << endl;
            cout << num3 << "\t" << num3*num3 << "\t\t" << num3*num3*num3 << endl;
            cout << num4 << "\t" << num4*num4 << "\t\t" << num4*num4*num4 << endl;
        }
        
    }while(num1 != 0 && num2 != 0 && num3 != 0 && num4 != 0);
    cout << "\n\nFim de programa\n";
    system("pause");
}