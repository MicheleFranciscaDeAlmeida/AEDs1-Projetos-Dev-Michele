#include <iostream>

using namespace std;

class Carro {
private:
    int capacidade;
    double consumo;
    double combustivel;
    int distancia;

public:
    Carro(int cap = 50, double cons = 15.0) {
         capacidade = cap;
         consumo = cons;
         combustivel = 0;
         distancia = 0;
    }

    void abastecer(double quantidade) {
        combustivel += quantidade;

        if(combustivel > capacidade) {
            combustivel = capacidade;
        }
        }
    void mover(int km) {
        double necessario = km / consumo;

        if(necessario <= combustivel) {
            combustivel -= necessario;
            distancia += km;
        } else {
            int kmpossivel = combustivel * consumo;
            distancia += kmpossivel;
            combustivel = 0;
        }
    }

    int getDistancia() const {
        return distancia;
    }

    double getCombustivel() const {
        return combustivel;
    }

};

int main() {
    int inicial1, inicial2;
    int distancia1, distancia2;

    cin >> inicial1;
    cin >> inicial2;
    cin >> distancia1;
    cin >> distancia2;

    Carro carro1;
    Carro carro2;

    carro1.abastecer(inicial1);
    carro2.abastecer(inicial2);

    carro1.mover(distancia1);
    carro2.mover(distancia2);

    cout << "Carro1: \n";
    cout << "Distancia percorrida: " << carro1.getDistancia() << "\n";
    cout << "Combustivel restante: " << (int)carro1.getCombustivel() << "\n";

    cout << "Carro2: \n";
    cout << "Distancia percorrida: " << carro2.getDistancia() << "\n";
    cout << "Combustivel restante: " << (int)carro2.getCombustivel() << "\n";

    return 0;
}
