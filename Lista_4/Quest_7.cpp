#include<iostream>
using namespace std;

int main(){
    int V1[10], V2[10],V3[10],i;

    for(i=0; i < 10; i++){
        cout << "\nV1[" << i << "]: ";
        cin >> V1[i];

        cout << "\nV2[" << i << "]: ";
        cin >> V2[i];

        V3[i] = V1[i] * V2[i];
    }

    cout << "\nVetor resultante: ";
    for(i=0; i < 10;i++){
        cout << V3[i] << " ";
    }
}