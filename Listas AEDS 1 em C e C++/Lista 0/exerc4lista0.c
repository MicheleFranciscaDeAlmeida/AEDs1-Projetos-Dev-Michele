#include <stdio.h>
#include <math.h>

int main() {
    //declaração das variaveis
    double raio, perimetro, area;
    const double PI = 3.14159;
    
    //entrada dos dados
    scanf("%lf", &raio);
    
    //calcular o perimetro
    perimetro = 2 * (PI *  raio);
    
    //calcular a area
    area = PI * raio * raio;
    
    //saida 2 casas decimais
    printf("perimetro: %.2lf\n", perimetro);
    printf("area: %.2lf\n", area);

    return 0;
}