#include <stdio.h>

int main() {

    char    var_char   = 'A';
    int     var_int    = 2025;
    float   var_float  = 3.14f;
    double  var_double = 3.14159265;


    char   *ptr_char   = &var_char;
    int    *ptr_int    = &var_int;
    float  *ptr_float  = &var_float;
    double *ptr_double = &var_double;



    printf("--- Tipos Primitivos ---\n");

    printf("char:   Valor: %c, Endereco: %p, Tamanho: %zu bytes\n", var_char, &var_char, sizeof(var_char));


    printf("int:    Valor: %d, Endereco: %p, Tamanho: %zu bytes\n", var_int, &var_int, sizeof(var_int));


    printf("float:  Valor: %f, Endereco: %p, Tamanho: %zu bytes\n", var_float, &var_float, sizeof(var_float));


    printf("double: Valor: %lf, Endereco: %p, Tamanho: %zu bytes\n", var_double, &var_double, sizeof(var_double));

    printf("\n--- Tipos Ponteiro ---\n");

    printf("char*:   Aponta para: %p, Endereco do ponteiro: %p, Tamanho: %zu bytes\n", ptr_char, &ptr_char, sizeof(ptr_char));
    printf("int*:    Aponta para: %p, Endereco do ponteiro: %p, Tamanho: %zu bytes\n", ptr_int, &ptr_int, sizeof(ptr_int));
    printf("float*:  Aponta para: %p, Endereco do ponteiro: %p, Tamanho: %zu bytes\n", ptr_float, &ptr_float, sizeof(ptr_float));
    printf("double*: Aponta para: %p, Endereco do ponteiro: %p, Tamanho: %zu bytes\n", ptr_double, &ptr_double, sizeof(ptr_double));

    return 0;
}
