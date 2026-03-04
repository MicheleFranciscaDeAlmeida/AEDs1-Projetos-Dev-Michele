#include <iostream>
#include <string.h>

using namespace std;

class Autor {
private:
    string nome;

public:
    Autor(const string &n) {
        nome = n;
    }

    string getNome() const {
        return nome;
    }

};

class Livro {
private:
    string titulo;
    int ano;
    Autor* autor;
public:
    Livro(const string &t, int a, Autor* au) {
        titulo = t;
        ano = a;
        autor = au;
    }

    void imprimir() const {
        cout << "Detalhes do livro:\n";
        cout << "Titulo: " << titulo << "\n";
        cout << "Ano de Publicacao: " << ano << "\n";
        cout << "Autor: " << autor->getNome() << "\n";
    }
};

int main() {
    string nomeAutor;
    string tituloLivro;
    int anoPublicacao;

    getline(cin, nomeAutor);
    getline(cin, tituloLivro);
    cin >> anoPublicacao;

    Autor autor(nomeAutor);
    Livro livro(tituloLivro, anoPublicacao, &autor);

    livro.imprimir();

    return 0;

}
