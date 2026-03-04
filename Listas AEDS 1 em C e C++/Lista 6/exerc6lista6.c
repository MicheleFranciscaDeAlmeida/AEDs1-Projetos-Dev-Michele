#include <stdio.h>

int main() {
    //entrada
    int numero, i, soma = 0;
    FILE*arquivo;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Os divisores sao: %d\n", numero);
    //laço repetição para verifica os numeros divisores
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0) {
            printf("%d\n", i);
            soma += i;

}

}
    arquivo = fopen("somadosdivisores.txt", "w");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n.");
        return 1;

    }
    fprintf(arquivo, "%d", soma);

    fclose(arquivo);


    printf("Soma dos divisores foi salva em somadosdivisores.txt:\n", soma);

    return 0;
}
