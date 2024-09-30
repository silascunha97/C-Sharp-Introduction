#include <iostream>
#include <stdio.h>
#include <cstdio>


using namespace std;

int main(){

    // temperatura em fahrenheit
    int fahrenheit = 92;
/*
    Constante que pega o valor em celsius e transforma em celsius.
    Converta uma temperatura de Celsius para Fahrenheit usando a fórmula: F = (C × 9/5) + 32.
*/
    const float celsius = ((fahrenheit - 32) * 0.555555555555);

    //console output imprime o valor
    cout << celsius << endl;


    return 0;
}

class AlunoNotas {
public:
    int notas[];

    void metodo(int notas[]) {
       int media = notas[10,6,9,8];

       if (media >= 7){
        printf("Aluno aprovado");
       } else{
         printf("Aluno reprovado");
       }
    }
};


