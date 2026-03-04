#include <stdio.h>

int main() {

    //declara hora,minuto e totalminutos
    int hora, minuto, totalminutos;

    //lê a hora e o minuto
    scanf("%d %d", &hora, &minuto);
    
    //faz uma conversão de minutos
    totalminutos = hora * 60 + minuto;

    //imprimi o total de minutos
    printf("%d\n", totalminutos); 

    return 0;
}