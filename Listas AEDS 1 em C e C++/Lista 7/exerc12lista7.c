#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int vogais = 0, consoantes = 0;

    // Leitura da string
    scanf("%s", str);

    ptr = str; // ponteiro aponta para o início da string

    // Percorre a string com o ponteiro
    while (*ptr != '\0') {
        char c = *ptr;

        // Verifica se é letra (maiúscula ou minúscula)
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {

            // Verifica se é vogal (considerando maiúsculas e minúsculas)
            if (c == 'a' || c == 'A' ||
                c == 'e' || c == 'E' ||
                c == 'i' || c == 'I' ||
                c == 'o' || c == 'O' ||
                c == 'u' || c == 'U')
                vogais++;
            else
                consoantes++;
        }

        ptr++; // avança o ponteiro
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
