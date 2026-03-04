#include <iostream>
#include <string.h>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    double altura;
};

int main () {
    int N;
    cin >> N;

    Pessoa pessoas[N];

    for(int i = 0; i < N; i++) {
        cin >> pessoas[i].nome >> pessoas[i].idade >> pessoas[i].altura;
    }

    for(int i = 0; i < N; i++) {
        cout << "Dados da pessoa:" << endl;
        cout << "Nome:" << pessoas[i].nome << endl;
        cout << "Idade:" << pessoas[i].idade << " anos" << endl;
        cout << "Altura:" << pessoas[i].altura << " metros" << endl;
    }

    return 0;
}
