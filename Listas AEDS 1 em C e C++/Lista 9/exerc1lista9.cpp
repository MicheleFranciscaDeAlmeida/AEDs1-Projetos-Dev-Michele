#include <iostream>
#include <string.h>

using namespace std;

//classe pessoa
class Pessoa {
public:
    string nome;
    int idade;
    double altura;
};

int main() {
    int N;
    cin >> N; //faz a leitura da quantidade de pessoas que vão ser cadastradas

    Pessoa pessoas[N]; //criação do vetor de objetos Pessoa com tamanho N

    for(int i = 0; i < N; i++) { //loop para fazer a leitura dos dados de cada pessoa
        cin >> pessoas[i].nome >> pessoas[i].idade >> pessoas[i].altura; //leitura de nome, idade e altura de cada pessoa
    }

    for(int i = 0; i < N; i++) { //loop para exibir os dados que foram cadastrados
        cout << "Dados da pessoa:" << endl;
        cout << "Nome:" << pessoas[i].nome << endl; //impressão do nome
        cout << "Idade:" << pessoas[i].idade << " anos" << endl; //impressão da idade
        cout << "Altura:" << pessoas[i].altura << " metros" << endl; //impressão da altura
    }
    return 0;
 }
