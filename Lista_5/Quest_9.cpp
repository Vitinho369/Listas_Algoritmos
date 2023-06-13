/*Implemente o jogo da velha usando uma matriz como tabuleiro. */
#include<iostream>
using namespace std;

int main(){
    bool alguemGanhou = false;
	int cont = 0, jogador = 1, jogada,i=0,j=0;
    int linha, coluna;	
    char peca = 'X', conteudo;
    char c[3][3] = {' ',' ', ' ',
                    ' ', ' ', ' ', 
                    ' ', ' ', ' '};

    do{
        system("cls");
        cout << "\n\t   TABULEIRO";
        for(i=0; i < 3;i++){
            cout << "\n\t | ";
            for(j=0; j < 3;j++){
                cout << c[i][j] << " | ";
            }
        }
        do{
            cout << "\n\tJogador " << jogador << " faca a sua jogada: ";
            cin >> jogada;
            
            switch(jogada){
                    case 1: linha=0; coluna=0; 
                        break;
                    case 2: linha=0; coluna=1;
                        break;
                    case 3: linha=0; coluna=2;
                        break;
                    case 4: linha=1; coluna=0;
                        break;
                    case 5: linha=1; coluna=1;
                        break;
                    case 6: linha=1; coluna=2;
                        break;
                    case 7: linha=2; coluna=0;
                        break;
                    case 8: linha=2; coluna=1;
                        break;
                    case 9: linha=2; coluna=2;
                        break;
                }	
                conteudo = c[linha][coluna];	

                if((jogada<1) || (jogada>9) || (conteudo!=' ')){
                    cout << "\n\tJogada invalida, digite de novo...";
                }	
            }while((jogada<1) || (jogada>9) || (conteudo!=' '));

            c[linha][coluna] = peca;

        for(i=0; i < 3;i++){
            for(j=0; j < 3; j++){
                if((((c[i][0]==c[i][1])&&(c[i][1]==c[i][2]) &&(c[i][0]!=' ')) || 
                    ((c[0][j]==c[1][j])&&(c[1][j]==c[2][j])) &&(c[0][j]!=' ')) || 
                    ((c[0][0]==c[1][1])&&(c[1][1]==c[2][2])) &&(c[0][0]!=' ') ||
                    ((c[0][2]==c[1][1])&&(c[1][1]==c[2][0])) &&(c[0][2]!=' ')){
                    alguemGanhou = true;
                }
            }
        }

        if(!alguemGanhou){
            if(jogador ==1){
				jogador = 2;
				peca = 'O';
			}else{
				jogador = 1;
				peca = 'X';
			}
        }

        cont++;
    }while((alguemGanhou==false) && (cont<9));

     cout << "\n\t   TABULEIRO";
    for(i=0; i < 3;i++){
        cout << "\n\t | ";
        for(j=0; j < 3;j++){
            cout << c[i][j] << " | ";
        }
    }

    if((cont==9)&&(alguemGanhou==false)){
		cout << "\n\n\tDEU VELHA!!!";
	}else{
		cout << "\n\n\tHouve ganhador!";
		cout << "\n\tQuem ganhou foi o jogador " << jogador;
	}

	cout << "\n\tFIM\n\n\t";
	system("pause");
}