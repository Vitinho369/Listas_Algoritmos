#include<iostream>
using namespace std;

int main(){
    int V[15],i,j, indices[15],l=0,k, cont=15;

    for(i=0; i < 15;i++){
        cout << "V[" << i << "]: ";
        cin >> V[i];
        if(V[i] ==0){
            indices[l] = i;
            l++;    
        }
    }

    for(i=0; i < l;i++){
        for(j=14; j > indices[i];j--){
                if(V[j-1] == 0){
                    V[j-1] = V[j];
                    for(k=j-1; k < 14;k++){
                        V[k] =  V[k+1];
                    }
                    cont--;
                }
            }
    }
    for(i=0; i < cont; i++){
        cout << V[i] << " ";
    }
}