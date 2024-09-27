#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    cout << "Olá mundo, BSI - IFC" << endl;
    
    return 0;
}

typedef int TipoItem;

const int max_item = 100;

class Pilha{
    private:
    int tamanho;
    TipoItem* estrutura ;
 
    
    public:
    pilha::pilha(); // constutor
    pilha::~pilha(); //destruction
    
    bool estaCheia(); // verifica se a pilha está cheia
    bool estaVazia(); // verifica se a pilha está Vazia
    
    void inserir(TipoItem item);//Enserir (metodo push)
    TipoItem remover(); // Metodo Pop que remove o elemento no topo da pilha.
    
    void imprimir(); // printa na tela.
    
    int qualtamanho(); //length
}