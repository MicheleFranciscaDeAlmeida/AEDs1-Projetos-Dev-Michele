#include <iostream>
#include <string.h>

using namespace std;

//classe elevador
class Elevador {
private:
    int andarAtual;//andar atual onde o elevador está
    int totalAndares;//total de andares do prédio
    int capacidade;//capacidade máxima de pessoas
    int pessoasPresentes;//quantidade atual de pessoas no elevador

public:
    Elevador() { //construtor sem parâmetros
        andarAtual = 0;
        totalAndares = 0;
        capacidade = 0;
        pessoasPresentes = 0;
    }

    Elevador(int cap, int tot) { //construtor com parâmetros
        inicializa(cap, tot);
    }

    void inicializa(int cap, int tot) { //inicialização do elevador com capacidade e total de andares
        capacidade = cap; //definição da capacidade máxima
        totalAndares = tot; //definição do número de andares do prédio
        andarAtual = 0; //inicialização do elevador no andar térreo
        pessoasPresentes = 0; //elevador começa vazio
    }

    void entra() { //uma pessoa entra no elevador se couber
        if(pessoasPresentes < capacidade) {
            pessoasPresentes++;

        }
    }

    void sai() { //retira uma pessoa do elevador se tiver pessoas
        if(pessoasPresentes > 0) {
            pessoasPresentes--;
        }
    }

    void sobe() { //o elevador sobe um andar para cima
        if(andarAtual < totalAndares) {
            andarAtual++;
        } //evita não passar do último andar
    }

    void desce() { //o elevador desce um andar para baixo
        if(andarAtual > 0) {
            andarAtual--;
        } //evita ficar abaixo do térreo
    }
    //métodos get para verificar informações do elevador
    int getAndarAtual() const {
        return andarAtual;
    }

    int getTotalAndares() const {
        return totalAndares;
    }

    int getCapacidade() const {
        return capacidade;
    }

    int getPessoasPresentes() const {
        return pessoasPresentes;
    }

};

int main() {
    int capacidade, totalAndares;
    cin >> capacidade >> totalAndares; //faz a leitura da capacidade e do total de andares

    int quantidadeAcoes;
    cin >> quantidadeAcoes; //quantidade de operações que serão simuladas


    Elevador e1(capacidade, totalAndares);
    Elevador e2(capacidade, totalAndares);

    string acao;


    for(int i = 0; i < quantidadeAcoes; i++) { //executa cada ação solicitada atráves do usuário
        cin >> acao; //faz a leitura da operação(entrar,sair,subir e descer)


        if(acao == "entrar") {
            e1.entra();
        }

        else if(acao == "sair") {
            e1.sai();
        }

        else if(acao == "subir") {
            e1.sobe();
        }

        else if(acao == "descer") {
            e1.desce();
        }
        //faz a impressão da situação atual do elevador
        cout << "Andar atual: " << e1.getAndarAtual() << "\n";
        cout << "Pessoas presentes: " << e1.getPessoasPresentes() << "\n";

    }

    return 0;
}
