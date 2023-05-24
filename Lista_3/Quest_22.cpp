#include<iostream>
using namespace std;

int main(){
    int num1, num2, somaModulo = 0;
    bool resp;
    float potencia;
    do{
        cout << "\nDigite dois pares de numeros: ";
        cin >> num1 >> num2;
        potencia = 1;
      
        if(num2 > 0){
            for(int i = 0; i < num2; i++) 
                potencia *= num1;   
        }else{
            num2 = num2 * -1;
            potencia = num2;
            for(int i = 0; i < num2; i++){
                potencia /= num1;  
            }
        } 

        if(num1 < 0) num1 = num1 * -1;
        if(num2 < 0) num2 = num2 * -1;

        somaModulo = num1 + num2;

        cout << num1 << "^" << num2 << " = " << potencia << endl;
        cout << "|" << num1 << "| + |" << num2 << "| = " << somaModulo << endl;
        cout << "\nDeseja continuar? 1 - sim, 0 - nao ";
        cin >> resp;
    }while(resp);
  
    cout << "\n\nFim de Programa\n";
    system("pause");
}