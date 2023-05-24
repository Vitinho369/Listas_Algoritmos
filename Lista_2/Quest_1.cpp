#include<iostream>
using namespace std;

int main(){
    float X,Y,Z;

    cout << "Digite 3 comprimentos de um triangulo: ";
    cin >> X >> Y >> Z;

    if(X < (Y+Z)){
        
        if(Y < (X+Z)){

            if(Z < (Y+X)){
                cout << "\nEh um triangulo";

               if(Z==Y){
                    
                    if(Z == X){
                        cout << " equilatero";
                    }else{
                        cout << " isoceles";
                    }
               }else{
                    if(Z == X){
                        cout << " isoceles";
                    }else{
                        if(X == Y){
                            cout << " isoceles";
                        }else{
                            if(Z != X){
                                if(Z != Y){
                                    cout << " escaleno";
                                }
                            }
                        }
                    }
                    
               }

            }else{
                cout << "\nNao eh um triangulo";
            }
        }else{
            cout << "\nNao eh um triangulo";
        }

    }else{
        cout << "\nNao eh um triangulo";
    }


    cout << "\nFim de programa";
    system("pause");
}