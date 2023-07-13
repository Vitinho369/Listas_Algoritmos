/*Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção 
escolhida pelo usuário, realize a respectiva operação conforme detalhamento. 
-------------------------------------------------------
 MENU PRINCIPAL 
-------------------------------------------------------
1 - ORDEM 
2 - DATA 
3 - SALÁRIO 
4 - MULTA 
5 - CALCULAR 
6 - SAIR 
-------------------------------------------------------
Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passeos 
para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los 
para o chamador, que deverá escrever o resultado da ordenação. 

Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 
datas em um vetor de datas. Passe o vetor lido para uma função que deverá verificar 
e retornar um vetor booleano contendo true em cada posição cuja data for válida e false 
em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar 
anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma 
mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor. 
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999 
Saída da função: true, true, false, false, false

Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma 
função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um 
dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor 
total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido 
pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a 
pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”. 

Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o 
motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a 
pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como 
multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: 
velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o 
motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver 
acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa 
deverá ser escrita pelo chamador após a execução da função. 

Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 
2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na 
segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o 
percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada 
questão vale 1,5 ponto. Escreva os resultados retornados pela função. 

Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo.*/
#include<iostream>
using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

struct percentual{
    int acertosAluno=0;
    float nota=0;
};

int *ordem(char ordenar, int *valores);
bool *verificaData(Data *datas, bool *datasVerificadas);
float distribuiSalarios(float salario, float qtdFilhos);
void definemulta(float *multa, float velMaxima, float velMotor);
percentual verificaGabarito(char gabarito[2][10]);

int main(){
    int op,i,j;
    percentual desempenho;
    do{
        cout << "\n-------------------------------------------------------\n";
        cout << "MENU PRINCIPAL";
        cout << "\n-------------------------------------------------------\n";
        cout << "1 - ORDEM\n"; 
        cout << "2 - DATA\n"; 
        cout << "3 - SALRIO\n"; 
        cout << "4 - MULTA\n";
        cout << "5 - CALCULAR\n";
        cout << "6 - SAIR\n";
        cout << "-------------------------------------------------------\n";
        cout << "Digite uma opcao: ";
        cin >> op;

        switch (op){
            
            case 1:
                int valores[3], *valoresOrdenados;
                char caracterOrdem;
                for(i=0; i < 3;i++){
                    cout << "\nDigite o " << i+1 << " valor: ";
                    cin >> valores[i];
                }
                cout << "\nComo deseja ordena-los? (c-crescente, d-decrescente)";
                cin >> caracterOrdem;

                valoresOrdenados = ordem(caracterOrdem, valores);
                
                if(caracterOrdem == 'c')
                    cout << "\nValores ordenados em ordem crescente: ";
                else if(caracterOrdem == 'd')
                    cout << "\nValores ordenados em ordem decrescente: ";

                
                for(i=0; i < 3;i++){
                    cout << valoresOrdenados[i] << " ";
                }
             
            break;
            
            case 2:
                Data datas[5];
                bool *datasVerificadas;

                for(i=0;i < 5;i++){
                    cout << "\nDigite a data " << i+1 << "(dia/mes/ano): ";
                    cin >> datas[i].dia;
                    cin >> datas[i].mes;
                    cin >> datas[i].ano;
                }

                datasVerificadas = verificaData(datas, datasVerificadas);

                cout << "\nDatas verificadas: ";
                for(i=0; i < 5;i++){
                    cout << "\nData " << i +1 << ": ";
                    if(datasVerificadas[i]){
                        cout << "valida";
                    }else{
                        cout << "invalida";
                    }
                }
            break;
            
            case 3:
                int qtdFilhos;
                float salario, salarioFilhos;

                cout << "\nDgite seu salario: ";
                cin >> salario;

                cout << "\nQuantos filhos voce tem?";
                cin >> qtdFilhos;

                salarioFilhos = distribuiSalarios(salario, qtdFilhos);
                
                if(salarioFilhos == 0){
                    cout << "\nO seu salario eh 100% para seu proprio custeio";
                }else{
                    cout << "\nSalario dedicado aos filhos: " << salarioFilhos;
                }
            break;
            
            case 4:
                float velMaxima, velMotor, multa;

                cout << "\nDigite a velocidade maxima permitida na avenida:";
                cin >> velMaxima;

                cout << "\nQual a velocidade do motorista?";
                cin >> velMotor;

                definemulta(&multa, velMaxima, velMotor);

                cout << "\nValor da multa: " << multa;
            break;
        
            
            case 5:
                char gabarito[2][10];

                for(i=0; i < 2;i++){
                        if(i==0)
                            cout << "\nDigite o gabarito da prova: ";
                        else
                            cout << "\nDigite o gabarito do aluno: ";
                        
                    for(j = 0; j < 10; j++){
                        cin >> gabarito[i][j];
                    }
                }
                desempenho = verificaGabarito(gabarito);
                    
                cout << "\nNota do aluno: " << desempenho.nota;
                cout << "\nQtd de acertos do aluno: " << desempenho.acertosAluno;

            break;
            
            case 6:
                cout << "\nFim de Programa\n";
            break;
        
        default: cout << "\nOpcao invalida";
        }
    }while(op != 6);

    system("pause");
}


int *ordem(char ordenar, int *valores){
    int aux;
    if(ordenar == 'c'){
        for(int i=0; i < 3;i++){
            for(int j=0; j < 3;j++){
                if(valores[i] < valores[j]){
                    aux = valores[i];
                    valores[i] = valores[j];
                    valores[j] = aux;
                }
            }
        }
    }else if(ordenar == 'd'){
        for(int i=0; i < 3;i++){
            for(int j=0; j < 3;j++){
                if(valores[i] > valores[j]){
                    aux = valores[i];
                    valores[i] = valores[j];
                    valores[j] = aux;
                }
            }
        }
    }

    return valores;
}

bool *verificaData(Data *datas, bool *datasVerificadas){
    for(int i=0; i < 5;i++){
        if(datas[i].dia < 1 || datas[i].dia > 31){
            datasVerificadas[i] = false;
        }else if(datas[i].mes < 1 || datas[i].mes > 12){
            datasVerificadas[i] = false;
        }else if(datas[i].mes == 2 && datas[i].dia > 29){
            datasVerificadas[i] = false;
        }else if((datas[i].mes == 4 || datas[i].mes == 6 || datas[i].mes == 9 || datas[i].mes == 11) && datas[i].dia > 30){
            datasVerificadas[i] = false;
        }else{
            datasVerificadas[i] = true;
        }
    }

    return datasVerificadas;
}


float distribuiSalarios(float salario, float qtdFilhos){
    float salarioFilhos = (salario*0.1)*qtdFilhos;

    if(salarioFilhos > (salario*0.5)){
        salarioFilhos =  (salario*0.5)/qtdFilhos;
    }

    return salarioFilhos;
}


void definemulta(float *multa, float velMaxima, float velMotor){
    if(velMaxima <= velMotor){
        
        if((velMotor-velMaxima)<= 10)
            *multa = 50;
        else if((velMotor-velMaxima) <= 30)
            *multa = 100;
        else
            *multa = 200;

    }else{
        *multa = 0;
    }
}

percentual verificaGabarito(char gabarito[2][10]){
    percentual percentualAluno;
    for(int i=0; i < 10; i ++){
        if(gabarito[1][i] == gabarito[0][i]){
            percentualAluno.acertosAluno++;
            percentualAluno.nota = percentualAluno.acertosAluno * 1.5;
        }
    }

    return percentualAluno;
}