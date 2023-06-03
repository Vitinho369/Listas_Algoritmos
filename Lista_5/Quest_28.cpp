/*. Elabore num algoritmo que que seja capaz de embaralhar uma string S1 com 
uma string S2 e colocar o resultado em uma string S3. Para embaralhar S1 com S2 
preencha os índices pares de S3 com os elementos de S1 e os ímpares com os elementos
de S2 até que os elementos de uma das duas strings termine. Os demais 
elementos de S3 serão preenchidos com os elementos da string restante.
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    string S1, S2, S3;
    int i=0,j=0;

    cout << "\nDigite a string S1: ";
    getline(cin, S1);

    cout << "\nDigite a string S2: ";
    getline(cin, S2);
    
    do{
        if(i%2==0 && j%2==0){
            S3 += S1[i];
        }else{
            S3 += S2[j];
        }
        i++;
        j++;
    }while(i < S1.length() && j < S2.length());

    if(i == S1.length()){
        for(int c=j; c < S2.length(); c++){
            S3 += S2[c];
            cout << S3 << endl;
        }
    }else{
       for(int c=j; c < S1.length(); c++){
            S3 += S1[c];
        } 
    }

    cout << "\nStrings embaralhadas: " << S3;
}