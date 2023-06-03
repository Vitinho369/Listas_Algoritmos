/*(Texto introdutório para as questões 29 e 30) Um algoritmo genético é 
a técnica de inteligência artificial que se inspira na forma como a natureza 
funciona e na teoria da evolução para resolver problemas complexos. Os algoritmos 
genéticos funcionam mantendo uma população de estruturas que evoluem de forma semelhante 
à evolução das espécies. A recombinação e a mutação são os operadores básicos de um algoritmo
genético. Considerando que os indivíduos da população são codificados através de cadeias de 
caracteres, o operador de recombinação recebe duas strings S1 e S2, sorteia aleatoriamente 
um ponto de corte P em S1 e S2. Em seguida, realizada a troca de informações genéticas de S1 e S2,
de forma a gerar dois novos indivíduos filhos. A figura abaixo ilustra o processo de recombinação

Elabore um algoritmo que leia uma strings S1, sorteie aleatoriamente um ponto P (número aleatório 
randômico) e escreva uma string S2 resultante do processo de mutação. Dica: utilize a geração de números 
randômicos para “sortear” a posição (índice) da string que sofrerá modificação (ponto P) e elabore uma 
maneira de escolher aleatoriamente o conteúdo de outro índice da string que será o novo valor daquela 
posição P
*/

#include<iostream>
#include<string>
#include<time.h>

using namespace std;

int main(){

    int pontoP, mutacao;
    string S1;

    cout << "\nDigite um sequencia de RNA:\n"; 
    getline(cin, S1);

    srand(time(0));
    pontoP = rand() % S1.length();
    mutacao = rand() % S1.length();

    cout << "\nSequencia digitada: " << S1 << endl;
    
    S1[pontoP] = S1[mutacao];

    cout << "\nSequencia apos sofrer mutacao: " << S1 << endl;
}