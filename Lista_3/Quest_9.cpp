#include<iostream>
using namespace std;

int main(){
    int mes, diaComeca,cont=1, ultimoDia=0;

    cout << "Digite o mes que deseja ver o calendario: ";
    cin >> mes;
    cout << "\nDigite o dia que o mes se inicia: ";
    cin >> diaComeca;

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        ultimoDia = 31;
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        ultimoDia = 30;
    }else if(mes == 2){
        ultimoDia = 28;
    }

    
    if(ultimoDia != 0){
        cout << "\nDom\tSeg\tTer\tQua\tQui\tSex\tSab\n";
        for(int i=1; i <= 7; i++){
            for(int j=1; j <= 7; j++){

                    if(j >= diaComeca && i == 1){
                        cout << cont << "\t";
                        cont++;
                    }else if(cont <= ultimoDia && i > 1){
                        cout << cont << "\t";
                        cont++;
                    }else{
                        cout << "\t";
                    }
            }
            if(cont <= ultimoDia)cout << endl;
        }
    }else{
        cout << "\nMes invalido";
    }

    cout << "\n\nFim de Programa\n";
    system("pause");
}