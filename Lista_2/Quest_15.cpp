#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float a, b, c, delta, x1, x2;
    cout << "Digite os coeficientes da equacao do segundo grau:";
    cin >> a >> b >> c;

    if(a == 0) cout << "\nNao eh equacao de segundo grau";
    else{
        delta = (b*b) - 4 * a * c;

        if(delta < 0) cout << "\nNao existe raiz";
        else{
           
            x1 = ((b*-1) + sqrt(delta))/(2*a);
            x2 = ((b*-1) - sqrt(delta))/(2*a);

            if(delta == 0)
                cout << "\nRaiz unica: " << x1;
            else    
                cout << "\nRaizes: " << x1 << ", " << x2;
        }
    }
   
    cout << "\nFim de programa";
    system("pause");
}