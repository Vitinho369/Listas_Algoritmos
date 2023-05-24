#include<iostream>
using namespace std;

int main(){
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;
    int diasDecorridos1, diasDecorridos2, diferencaDias;

    do{
        cout << "\nDigite uma data (dd/mm/aa): ";
        cin >> dia1;
        cin >> mes1;
        cin >> ano1;
    }while(( dia1 < 0 || dia1 > 31) || (mes1 < 0 || mes1 > 12) || ano1 < 1);
    
    do{
        cout << "\nDigite uma segunda data (dd/mm/aa): ";
        cin >> dia2;
        cin >> mes2;
        cin >> ano2;
    }while(( dia1 < 0 || dia1 > 31) || (mes1 < 0 || mes1 > 12) || ano1 < 1);

    if(mes1 == 1 || mes1 == 3 || mes1 == 5 || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12){
        diasDecorridos1 = dia1 + mes1*31;
    }else if(mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11){
         diasDecorridos1 = dia1*30;
    }else{
         diasDecorridos1 = dia1 + mes1*28;
    }
    
    
    cout << "\n\nFim de programa\n";
    system("pause");
}