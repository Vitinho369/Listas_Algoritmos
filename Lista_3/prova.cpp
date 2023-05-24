#include<iostream>
using namespace std;

int main(){
    
    int op;
    int dia, mes, ano,diaMaior=-1, mesMaior=-1, anoMaior=-1;
    char resp;
    int num;
    do{
        cout << "\n----------------------\n";
        cout << "\tMENU PRINCIPAL\n";
        cout << "------------------------\n";
        cout << "1 - MAIOR\n";
        cout << "2 - SIM OU NAO\n";
        cout << "3 - TEMPO\n";
        cout << "4 - VALIDAR\n";
        cout << "5 - CALCULAR\n";
        cout << "6 - SAIR\n";
        cout << "Digite opcao: "; // nao obrigatorio
        cin >> op;
        switch (op){
             
            case 1: 
                
                    do{
                        cout << "\nDigite uma data:";
                        cin >> dia;
                        cin >> mes;
                        cin >> ano;

                        if(ano > anoMaior){
                            diaMaior = dia;
                            mesMaior = mes;
                            anoMaior = ano;
                        }else if(ano == anoMaior){
                            
                            if(mes > mesMaior){
                                diaMaior = dia;
                                mesMaior = mes;
                            }else if(mes == mesMaior){
                                if(dia > diaMaior){
                                    diaMaior = dia;
                                }
                            }
                        }

                        cout << "\nMaior data: " <<  diaMaior << "/" << mesMaior << "/" << anoMaior;
                    }while(dia > 0 && mes > 0 && ano > 0);

                break;
            case 2: 

                    do{
                        cout << "\nDigite um numero: ";
                        cin >> num;

                        if(num%2==0 && num > 10){
                            cout << "\nSIM";
                        }else{
                            if(num%3==0 && num < 50){
                                cout << "\nSIM";
                            }else{
                                cout << "\nNAO";
                            }
                        }

                        cout << "\nDeseja continuar? s - sim, n - nao ";
                        cin >> resp;
                    }while(resp != 'n');
                break;
            case 3: 
                int hora1, minuto1, segundo1;
                int hora2, minuto2, segundo2;

                cout << "\nDigite quantas horas foi o percurso do atleta 1: ";
                cin>> hora1;
                cout << "\nDigite quantos minutos de percurso teve o atleta 1: ";
                cin >> minuto1;
                cout << "\nDigite quantos segundos de percuso teve o atleta 1: ";
                cin >> segundo1;

                cout << "\nDigite quantas horas foi o percurso do atleta 2: ";
                cin>> hora1;
                cout << "\nDigite quantos minutos de percurso teve o atleta 2: ";
                cin >> minuto2;
                cout << "\nDigite quantos segundos de percuso teve o atleta 2: ";
                cin >> segundo2;

                if(hora1 < hora2){
                    cout << "\nAtleta 2 mais lento";
                }else{
                    if(hora1 == hora2){
                        if(minuto1 < minuto2){
                            cout << "\nAtleta 2 mais lento";
                        }else{
                            if(minuto1 == minuto2){
                                if(segundo1 < segundo2){
                                  cout << "\nAtleta 2 mais lento";
                                }
                            }
                        }
                    }
                }

                if(hora2 < hora1){
                    cout << "\nAtleta 1 mais lento";    
                }else{
                    if(hora2 == hora1){
                        if(minuto2 < minuto1){
                            cout << "\nAtleta 1 mais lento";
                        }else{
                            if(minuto2 == minuto1){
                                cout << "\nAtleta 1 mais lento";
                            }else{
                                if(segundo2 < segundo1){
                                    cout << "\nAtleta 1 mais lento";
                                }
                            }
                        }
                    }
                }

                
                break;
            case 4: 
                int N, cont, cod, senha;

                cout << "\nDigite o valor de N: ";
                cin >> N;

                for(cont = 0; cont < N; cont++){
                    cout << "\nDigiteu seu codigo:";
                    cin >> cod;

                    if(cod != 1234){
                        cout << "\nUsuario invalido";
                    }else{
                        cout << "\nDigite sua senha: ";
                        cin >> senha;

                        if(senha == 9999){
                            cout << "\nAcesso permitido";
                        }else{
                            cout << "\nSenha incorreta";
                        }
                    }
                }
                break;
            case 5: 
                int qtdFilhos;
                char genero;

                cout << "\nDigite sua quantidade de filhos: ";
                cin >> qtdFilhos;
                cout << "\nDigite seu genero:";
                cin >> genero;

                if(genero == 'f' && qtdFilhos >= 1){
                        cout << "\nTem direito a auxilio creche";

                        switch(qtdFilhos){
                            case 1: cout << "\nSeu auxilio creche eh de 25,50 reais";
                                break;
                            case 2: cout << "\nSeu auxilio creche eh de 50 reais";
                                break;
                            case 3: cout << "\nSeu auxilio creche eh de 76,50 reais";
                                break;

                            default: cout << "\nSeu auxilio creche eh de " << 40.5 * qtdFilhos << " reais";

                        }
                }else{
                    cout << "\nNao tem direito a auxilio creche";
                }
                break;

            case 6: cout << "\nFim de programa";
                break;
            default: cout << "\nOpcao invalida";
            
        }


    }while(op != 6);
}