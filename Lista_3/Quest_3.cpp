#include<iostream>
using namespace std;

int main(){
    float chico = 1.50, juca = 1.10;
    int anos=0;
    do{
        chico += 0.02;
        juca += 0.03;
        anos++;
    }while(juca < chico);

    cout << "\nDaqui a " << anos << " anos Juca sera maior que Chico";

    cout << "\n\nFim de programa";
    system("pause");
}