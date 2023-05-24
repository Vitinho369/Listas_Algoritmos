#include<iostream>
using namespace std;

int main(){
       char sexo;
       float altura, alturaBaixa=0, mediaHomens, mediaPopulacao, alturaHomens=0, alturaTotal = 0;
       int populacao = 0, qtdHomens=0, qtdMulheres=0;

       do{
          cout << "\nQual seu sexo? m - masculino, f - feminino ";
          cin >> sexo; 

          cout << "\nDigite sua altura:  ";
          cin >> altura;

          if(altura != -1){
             if(sexo == 'f' && (qtdMulheres == 0 || altura < alturaBaixa)){
                    alturaBaixa = altura;
                    qtdMulheres ++;
               } 

               if(sexo == 'm'){
                    qtdHomens++;
                    alturaHomens += altura;
                    mediaHomens = alturaHomens/qtdHomens;
               }
               populacao++;
               alturaTotal += altura;
               mediaPopulacao = alturaTotal/populacao;
          }
       }while(altura != -1);

       cout << "\nAltura da mulher mais baixa: " << alturaBaixa;
       cout << "\nMedia da altura dos homens: " << mediaHomens;
       cout << "\nMedia de altura da populacao: " << mediaPopulacao;

    cout << "\n\nFim de programa\n";
    system("pause");
}