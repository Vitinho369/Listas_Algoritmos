#include<iostream>
using namespace std;

int main(){
    int V[30], op, i, j, primo=1, contPrimo=0;

    do{
        cout << "\nMenu Principal";
        cout << "\n------------------------------------------------------";
        cout << "\n1 - Sequencia de Fibonacci";
        cout << "\n2 - Numeros Triangulares";
        cout << "\n3 - Numeros Primos";
        cout << "\n4 - Numeros Quadrangulares";
        cout << "\n5 - Divisiveis por 3 e 5 simultaneamente";
        cout << "\n6 - Sair";
        cout << "\nDigite uma opcao: ";
        cin >> op;

        switch (op){
            case 1:
                V[0] = 0;
                V[1] = 1;
                for(i=2; i < 30; i ++){
                    V[i] = V[i-1] + V[i-2];
                }

                cout << "\nSequencia de Fibonnacia: ";
                for(i=1; i < 30; i ++){
                    cout << V[i] << " ";
                }
                cout << endl;
                break;
            
            case 2:
                V[0] = 1;
                for(i = 1; i < 30; i++){
                    V[i] = V[i-1] + (i+1);
                }
                cout << "\nNumeros triangulares: ";
                for(i = 0; i < 30; i++){
                    cout << V[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                j=0;
                do{
                    for(i=1; i <= primo; i++){
                        if(primo%i==0){
                            contPrimo++;    
                        }
                    }

                    if(contPrimo==2){
                        V[j] = primo;
                        j++;
                    }

                    primo++;
                    contPrimo = 0;
                }while(j < 30);

                cout << "\nNumeros primos: ";

                for(i=0; i < 30; i++){
                    cout << V[i] << " ";
                }
                break;

            case 4:
                j = 1;
                for(i=0; i < 30; i ++){
                    V[i] = j*(i+1);
                    j++;
                }

                cout << "\nNumeros quadrangulares: ";
                for(i=0; i < 30; i++){
                    cout << V[i] << " ";
                }
                break;
            
            case 5:
                i=0;
                j=1;
                do{
                    if(j%3==0 && j%5==0){
                        V[i] = j;
                        i++;
                    }
                    
                    j++;
                }while(i < 30);

                cout << "\nNumeros divisiveis por 3 e 5: ";

                for(i=0; i < 30; i++){
                    cout << V[i] << " ";
                }
                break;

            case 6:
                cout << "\nFim de programa";
                break;
            default:
                cout << "\nOpcao invaliada, digite novamente";
        }
    }while(op !=6);
}