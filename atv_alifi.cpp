/*
  Escreva um programa em C++ que implemente uma pilha de números inteiros com as seguintes opções:
 - Push (1 ponto) ok
 - Pop (1 ponto) ok
 - Inverter utilizando uma estrutura intermediária do tipo fila * (4 pontos) ok
 - Dobrar os números pares e triplicar os números impares da pilha. (1.5 pontos)
 - Retornar a posição do maior elemento da pilha. (1.5 pontos)
 - Mostrar a pilha (1 ponto) ok
*/
#include <iostream>
#include <stdlib.h>
#define MAX 10
#include <locale.h>

using namespace std;

int main(){
    //Declarando as variaveis
    int op,i , elemento, topo, maior, pos, qtd, pare;
    maior = 0;
    pare = -1;
    int pilha[MAX], fila[MAX];

    setlocale(LC_ALL, "Portuguese");

    //INICIANDO O CÓDIGO PARA O PROGRAMA
    do{

        system("cls");
        cout << "* * * * *    M E N U     * * * * *\n\n\n";
        cout << "\n1 - Push";
        cout << "\n2 - Pop";
        cout << "\n3 - Inverter";
        cout << "\n4 - Dobrar e Multiplicar";
        cout << "\n5 - Maior elemento da fila (posição)";
        cout << "\n6 - Mostrar a Pilha";
        cout << "\n0 - Sair";
        cout << "\n\nDigite a sua opcao -> ";
        cin >> op;

        switch(op)
            {
            case 1 : system("cls");
                cout << "* * * * *    P U S H    * * * * *\n\n\n";
                cout << "Informe a quantidade de elementos que irá ser inserido: "; cin >> qtd;
                if(pare<(MAX - qtd)){
                    for (i = 0; i < qtd;i++){
                        pare++;
                            for (int b = pare; b < qtd; b++)
                                fila[b]= fila[b-1];
                        cout << "\nDigite o elemento a ser inserido na pilha: ";
                        cin >> elemento;
                        pilha[i]=elemento;
                        cout << "\n\nElemento inserido com sucesso!\n\n";
                    }
                }else{
                    cout << "Impossivel inserir....\nFila cheia!\n\n";
                    }
            system("pause");
            break;

            case 2 : system("cls");
                cout << "* * * * *    P O P    * * * * *\n\n\n";
                if (qtd>=0){
                    elemento = pilha[qtd -1];
                    qtd--;
                    cout << "\n\nElemento removido: " << elemento;
                    cout << "\n\nElemento removido com sucesso!!\n\n";
                }else{
                         cout << "Impossivel remover...\nPilha vazia!!\n\n";
                     }
            system("pause");
            break;

            case 3: system ("cls");
                cout << "**** INVERTER **** \n\n\n";
                for(int k=0;k<=i-1;k++){
                    for(int m=k;m>0;m--)
                        fila[m]=fila[m-1];
                        fila[0]=pilha[k];
                }
                for (int n = 0; n <=i;n++){
                    pilha[n] = fila[n];
                }
            system("pause");
            break;

            case 4: system ("cls");
                cout << " *** DOBRAR NUMEROS PARES E TRIPLICAR OS IMPARES *** \n\n\n";
                for (int k = 0; k <=i-1;k++){
                    pilha[k];
                    if (pilha[k] %2 == 0){
                        pilha[k] = pilha[k] * 2;
                    }else if(pilha[k]%2!=0){
                        pilha[k] = pilha[k] * 3;
                    }
                }
                cout << "\n\tPilha\n\n";
                for (int l=(i-1);l>=0;l--)
                    cout << "\t" << pilha[l] << endl;
                    cout << "\n\n\n\n";
            system("pause");
            break;

            case 5: system("cls");
                for (int k = 0; k <=i-1;k++){
                    pilha[k];
                    if(pilha[0]){
                        maior == pilha[0];
                    }else if(pilha[k] > maior){
                        maior = pilha[k];
                        pos = k;
                    }
                }
                if (maior = pilha[0]){
                    cout << "O maior número é " << maior << " e a sua posição é " << 0;
                }else if (maior != pilha[0]){
                    cout << "O maior número é " << maior << " \ne a sua posição é " << pos;
                }
            system("pause");
            break;

            case 6:  system("cls");
                cout << "* * * * *    PILHA   * * * * *\n\n\n";
                cout << "\n\tPilha\n\n";
                for (int l=(i-1);l>=0;l--)
                    cout << "\t" << pilha[l] << endl;
                    cout << "\n\n\n\n";
            system("pause");
            break;
        }
    }while(op!=0);
    return 0;
}
