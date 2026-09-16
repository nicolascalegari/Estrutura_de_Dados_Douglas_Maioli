#include <iostream>
#include "pilha.h"

using namespace std;

int main(){

    pilha pilha1;
    TipoItem item;
    int opcao;

    cout << "Programa gerador de pilhas!\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir.\n";
        cout << "Digite 2 para remover.\n";
        cout << "Digite 3 para imprimir.\n";
        cout << "Digite 4 para ver o tamanho.\n";
        cout << "Digite 5 verificar se a pilha esta vazia.\n";
        cout << "Digite 6 verificar se a pilha esta cheia.\n";
        cin >> opcao;

        if (opcao == 1){
            cout << "Digite o elemento: \n";
            cin >> item;
            pilha1.inserir(item);
        } else if(opcao == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        } else if (opcao == 3){
            pilha1.imprimir();
        } else if (opcao == 4){
            pilha1.qualtamanho();
        } else if (opcao == 5){
            if (pilha1.estavazia()){
                cout << "Pilha vazia!\n";
            } else{
                cout << "Pilha nao esta vazia!\n";
            }
        } else if (opcao == 6){
            if (pilha1.estacheia()){
                cout << "Pilha cheia!\n";
            } else{
                cout << "Pilha nao esta cheia!\n";
            }
        }

    } while(opcao != 0);

    return 0;
}