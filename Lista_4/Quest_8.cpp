#include<iostream>
using namespace std;

int main(){
    int A[20], B[20], C[20],i,j, k=0;
    bool flag;

    for(i=0; i < 20; i++){
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }
    
    for(i=0; i < 20; i++){
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    for(i=0; i <20;i++){
        for(j=0;j < 20;j++){
            flag = false;

            if(A[i] == B[j]){
                for(int l=0; l < k; l++){
                    if(A[i] == C[l]){
                        flag = true;
                    }
                }

                if(!flag){
                    C[k] = A[i];
                    k++;
                }
            }

        }
    }

    cout << "\nC = ";
    for(i=0; i < k; i++){
        cout << C[i] << " ";
    }
}