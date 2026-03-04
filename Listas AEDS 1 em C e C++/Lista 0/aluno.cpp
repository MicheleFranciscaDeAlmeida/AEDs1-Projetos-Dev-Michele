#include <iostream>
#include <iomanip>

using namespace std;

class Aluno {
private:
        string nome;
        int idade;
        float altura;
public:
      Aluno(){
      inicializa("nenhum");
      }
      Aluno(string novo, int novaId, float novaAlt){
      inicializa(novo, novaId,novaAlt);
      }

      void inicializa(string nNome) {
      setNome(nNome);
      }

      void inicializa(string nNome, int nIdade, float nAltura){
      setNome(nNome);
      setIdade(nIdade);
      setAltura(nAltura);
      }

      void setNome(string novo) {
      if(novo.length() > 2) //strlen(novo)
        nome = novo;
      else cout << "ERRO - Nome tem que ser acima de 2 caracteres" << endl;
      }
      string getNome() {
      return nome;
      }
      void setIdade(int nova) {
      if(nova > 5) idade = nova;
      else cout << "ERRO - Idade acima de 5 anos" << endl;
      }
      int getIdade() {
      return idade;
      }
      void setAltura (float nova) {
      }
      }
