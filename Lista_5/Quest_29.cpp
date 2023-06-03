/*(Texto introdutório para as questões 29 e 30) Um algoritmo genético é 
a técnica de inteligência artificial que se inspira na forma como a natureza 
funciona e na teoria da evolução para resolver problemas complexos. Os algoritmos 
genéticos funcionam mantendo uma população de estruturas que evoluem de forma semelhante 
à evolução das espécies. A recombinação e a mutação são os operadores básicos de um algoritmo
genético. Considerando que os indivíduos da população são codificados através de cadeias de 
caracteres, o operador de recombinação recebe duas strings S1 e S2, sorteia aleatoriamente 
um ponto de corte P em S1 e S2. Em seguida, realizada a troca de informações genéticas de S1 e S2,
de forma a gerar dois novos indivíduos filhos. A figura abaixo ilustra o processo de recombinação


Elabore um algoritmo que leia duas strings S1 e S2, sorteie aleatoriamente um ponto P 
(número aleatório randômico) e escreva as duas strings S3 e S4 resultantes do processo 
de recombinação. Dica: pesquise por geração de números randômicos.
*/

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

int main(){
    int pontoP, contAux, tamRecomb;
    string S1, S2, S3, S4;
    char trocaPos;

    cout << "\nDigite a primeira sequencia de RNA: \n";
    getline(cin, S1);
    
    cout << "\nDigite a primeira sequencia de RNA: \n";
    getline(cin, S2);

    if(S1.length() >= S2.length()){
        srand(time(0));
        pontoP = rand() %  S2.length();
        tamRecomb = S1.length();
    }else{
        srand(time(0));
        pontoP = rand() % S1.length();
        tamRecomb = S2.length();
    }

    contAux = pontoP+1;

  
        for(int i=0; i < tamRecomb; i++){
            if(i <= pontoP){
                S3 += S1[i];
                S4 += S2[i];
            }else{
                if(S1.length() >= S2.length()){
                    
                    if(contAux < S2.length())
                        S3 += S2[contAux];
                    
                    S4 += S1[contAux];
                }else{
                    cout << tamRecomb;
                    if(contAux < S1.length())
                        S4 += S1[contAux];
                        
                    S3 += S2[contAux];
                }  
                contAux++;
            }
        }

    cout << "\nRecombincacao em S1: "<< S3 << endl;
    cout << "\nRecombincacao em S2: "<< S4 << endl;
}