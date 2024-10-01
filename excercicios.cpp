#include <iostream>
#include <vector>

using namespace std;

// Classe que gerencia as notas de um aluno
class AlunoNotas {
private:
    // Vetor para armazenar as notas do aluno
    vector<int> notas;
    
public:
    // Método para adicionar notas do aluno
    void adicionarNotas() {
        int nota; // Variável para armazenar a nota temporariamente
        
        // Loop para solicitar 5 notas
        for (int i = 0; i < 5; i++) {
            cout << "Digite a nota do aluno [" << i << "]: "; // Solicita a nota
            cin >> nota; // Lê a nota digitada pelo usuário
            notas.push_back(nota);  // Armazena a nota no vetor 'notas'
        }
    }

    // Método para calcular e exibir a média das notas
    void calcularMedia() {
        // Verifica se o vetor de notas está vazio
        if (notas.empty()) {
            cout << "Nenhuma nota cadastrada." << endl; // Mensagem se não há notas
            return; // Sai do método se não houver notas
        }

        int somatorio = 0; // Variável para armazenar a soma das notas
        
        // Loop para somar todas as notas
        for (int nota : notas) {
            somatorio += nota; // Adiciona a nota atual ao somatório
        }

        // Calcula a média, convertendo a soma para float para evitar divisão inteira
        float media = somatorio / static_cast<float>(notas.size());

        // Exibe a média calculada
        cout << "Média: " << media << endl;
        
        // Verifica se o aluno foi aprovado ou reprovado com base na média
        if (media >= 7) {
            cout << "Aluno aprovado" << endl; // Mensagem se aprovado
        } else {
            cout << "Aluno reprovado" << endl; // Mensagem se reprovado
        }
    }
};


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


    //chamar classe aluno e seus metedos pertecentes
    AlunoNotas aluno;
    aluno.adicionarNotas();
    aluno.calcularMedia();


    return 0;
}


