#include<iostream>
using namespace std;

int main(){
    int num, cont=1, contQuadrangular=0;
    bool flag=false;

    cout << "\nDigite um numero qualquer:";
    cin >> num;

    do{
        if((cont*cont) == num) 
            flag = true;

        cont++;
    }while(cont <= num && !flag);
    
    if(flag){
        cout << "\n10 proximos quadrangulares: ";
        
        for(int cont2=cont; cont2 < cont+10;cont2++)
            cout << cont2*cont2 << " ";
        
    }else{
        cout << "\nNao eh um numero quadrangular";
    }

    cout << "\n\nFim de programa";
    system("pause");
}