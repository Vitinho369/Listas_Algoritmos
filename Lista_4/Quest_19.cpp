#include<iostream>
using namespace std;

int main(){
    int V[6],i, vAposta[6], pont=0;
    char resp;

    cout << "Digite os numeros sorteados: ";
    for(i=0; i < 6;i++){
        cin >> V[i];
    }

    do{

        cout << "\nDigite os numeros do seu sorteio: ";
        for(i=0; i < 6;i++){
            cin >> vAposta[i];

            if(vAposta[i] == V[i]){
                pont++;
            }
        }

        if(pont < 4){
            cout << "\nNao ganhou";
        }else{
            if(pont == 4){
                cout << "\nGanhou a quadra";
            }else{
                if(pont == 5){
                    cout << "\nGanhou a quina";
                }else{
                    cout << "\nGanhou a mega";
                }
            }
        }
            
        pont = 0;
        cout << "\nDeseja continuar? (s-sim, n-nao) ";
        cin >> resp;
    }while(resp != 'n');
}