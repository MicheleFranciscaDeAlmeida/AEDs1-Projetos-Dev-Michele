#include <iostream>
#include <iomanip>

using namespace std;

//inicializando a classe relógio
class Relogio {
private:
    int h, m, s; //horas, minutos e segundos
public:
    //uso de void para definir o horário inicial
    void setHorario(int hora, int minuto, int segundo) {
    h = hora;
    m = minuto;
    s = segundo;
}
    //avanço do relógio em um segundo
    void avancarumsegundo() {
        s++; //incrementação dos segundos
    if(s == 60) { //se chegou nos 60 segundos, ele zera e incrementa os minutos
        s = 0;
        m++;
    if(m == 60) { //se chegou nos 60 segundos, ele zera e incrementa as horas
        m = 0;
        h++;

    if(h == 24) {
        h = 0;
      }
     }
    }
   }
   //impressão do horário formatado em HH:MM:SS com dois dígitos
   void imprimirhorario() const {
       cout << setfill('0') << setw(2) << h << ":";
       cout << setfill('0') << setw(2) << m << ":";
       cout << setfill('0') << setw(2) << s;
       }
};

int main() {
    int N;
    cin >> N; //leitura da quantidade de operações

    Relogio r; //objeto relógio

    for(int i = 0; i < N; i++) {
        int h, m, s;
        cin >> h >> m >> s; //leitura do horário da operação

        r.setHorario(h,m,s); //armazena dentro do relógio

        //imprime horários
        cout << "Horario inicial: ";
        r.imprimirhorario();
        cout << endl;

        //avança o relógio em 1 segundo
        r.avancarumsegundo();

        cout << "Novo horario: ";
        r.imprimirhorario();
        cout << endl;
   }
   return 0;
 }
